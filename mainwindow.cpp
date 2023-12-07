#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservations.h"
#include<QString>
#include <QtDebug>
#include<QSqlQuery>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QList>
#include <QStandardItem>
#include <QUrl>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <qpdfwriter.h>
#include <QtCharts>
#include <QPieSeries>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QMessageBox>
#include "promotions.h"
#include <QTimer>
#include <QCoreApplication>
#include <QSystemTrayIcon>
 int occ=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
     break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
   case(-1):qDebug() << "arduino is not available";
}


    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(message()));


    QTimer *timer = new QTimer(this);
           connect(timer, SIGNAL(timeout()), this, SLOT(checkAndSendDataToArduino()));
           timer->start(40000); // Adjust the interval as needed

           // Connect a signal to quit the application after a certain time (for demonstration purposes)

    ui->le_code->setValidator(new QIntValidator(100, 9999999, this));
    ui->POURCENTAGE->setValidator(new QIntValidator(100, 9999999, this));


    Reservations R; // Crée une instance de la classe Reservations
    Promotions P ;


    // Assurez-vous que la connexion à la base de données est ouverte avec succès
    QSqlDatabase db = QSqlDatabase::database(); // Récupère l'objet de la base de données
    bool database_opened_successfully = db.isOpen();
    qDebug() << "Update successful!";
    ui->tab_reservation->setModel(R.afficher());
    ui->tab_promo->setModel(P.afficher());
    connect(ui->le_chercher, &QPushButton::clicked, this, &MainWindow::on_le_recherche_textChanged);


    if (database_opened_successfully) {


    } else {
        // Gérez le cas où la connexion à la base de données a échoué
        // Affichez un message d'erreur ou effectuez des actions nécessaires
    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    QString code_res=ui->le_code->text();
    QString date_res=ui->le_date->text();
    QString heure_res=ui->le_heure->text();
    QDateTime date_resf=ui->le_date_2->dateTime();
    int Prix=ui->prix->text().toInt();
    QString CODE_PROMOTION=ui->code->text();
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon(":/new/prefix1/ajouter.png"));
   notifyIcon->show();



    QSqlQuery query;
       query.prepare("SELECT * FROM PROMOTIONS WHERE CODE = :code");
       query.bindValue(":code", CODE_PROMOTION);
       bool queryExecuted = query.exec();

       if (queryExecuted && query.first()) {
           int pourcentage = query.value("POURCENTAGE").toInt();
           qDebug() << "Pourcentage:" << pourcentage;
           Prix =Prix-(pourcentage*Prix/100);

           // Use pourcentage in Reservations constructor or any other operations
           Reservations R(code_res, date_res,date_resf, heure_res, Prix);
           bool test = R.ajouter();

           if (test) {
               QMessageBox::information(nullptr, QObject::tr("OK"),
                   QObject::tr("Ajout effectue\nClick Cancel to exist."), QMessageBox::Cancel);
               ui->tab_reservation->setModel(R.afficher());
           } else {
               QMessageBox::critical(nullptr, QObject::tr("Error"),
                   QObject::tr("Ajout non effectue\nClick Cancel to exist."), QMessageBox::Cancel);
           }
       } else {
           qDebug() << "No records found or query execution failed.";
           // Handle this case accordingly (display an error message, take appropriate action)
       }
}

void MainWindow::on_pb_supprimer_clicked()
{
    Reservations R1; R1.setcode_res(ui->le_code->text());
    bool test=R1.supprimer(R1.getcode_res());
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon(":/new/prefix1/icon_supp-removebg-preview.png"));
   notifyIcon->show();


    if(test)
    {
        QMessageBox ::information(nullptr,QObject::tr("ok"),
                QObject::tr("suppression effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
        ui->tab_reservation->setModel(R.afficher());

    }
    else
        QMessageBox ::critical(nullptr,QObject::tr("ok"),
                QObject::tr("suppression non effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
}



void MainWindow::on_pb_modify_clicked()
{
            QString newcode_res =ui->le_code->text();
            QString newdate_res=ui->le_date->text();
            QString newheure_res=ui->le_heure->text();
            QDateTime newdate_resf=ui->le_date_2->dateTime();
            int Prix=ui->prix->text().toInt();


            Reservations R(newcode_res,newdate_res,newdate_resf,newheure_res,Prix);
            bool test=R.modifier();
            if(test){
                QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
                ui->tab_reservation->setModel(R.afficher());


            }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

            }

}

void MainWindow::on_pushButton_stat_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    //model->setQuery("SELECT DATE_RES , COUNT(*) as res_count FROM RESERVATIONS GROUP BY DATE_RES ORDER BY res_count DESC LIMIT 1");
    model->setQuery("SELECT DATE_RES, COUNT(*) as res_count FROM RESERVATIONS GROUP BY DATE_RES ORDER BY res_count DESC");
    // Checking if the query has data

        qDebug() << "SQL rows: " << model->record(0); // Output the SQL query being executed
        int countMostReserved = model->record(0).value("res_count").toInt();

        QString mostReservedDate = model->record(0).value("DATE_RES").toString();
        qDebug() << "date reserved :" << mostReservedDate;

        QString queryStringTotal = "SELECT COUNT(*) as total_reservations FROM RESERVATIONS";
        model->setQuery(queryStringTotal);
        int totalReservations = model->record(0).value("total_reservations").toInt();
        double percentage = (countMostReserved * 100.0) / totalReservations;

        qDebug() << "most reserved count : " << countMostReserved;

        qDebug() << "most reserved count : " << totalReservations;


        qDebug() << "percentage : " << percentage;

    if (model->rowCount() > 0) {
         qDebug("test");
        int countAcceptable = model->record(0).value("res_count").toInt();

        QPieSeries *series = new QPieSeries();
        series->append(QString("Date plus reservé : %1").arg(mostReservedDate), countAcceptable);

        qDebug() << "date"<< model->record(0);


        QString label = QString("Percentage: %1%").arg(percentage);
        label.replace("%", "%<br>"); // Adding a line break after the percentage symbol
        QPieSlice *slice = series->append(QString("Percentage: %1%").arg(percentage), percentage);

        slice->setLabelVisible();
        slice->setLabel(QString("%1 - %2%").arg(slice->label()).arg(percentage, 0, 'f', 1));

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistique : Pourcentage");

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->resize(400, 300);
        chartView->show();
    } else {
        // Handle case where no data is returned by the query
        QMessageBox::information(this, "No Data", "No reservation data available.");
    }
}

void MainWindow::on_pushButton_2_clicked()
{

        Reservations reservation;
        QPdfWriter pdf("reservations.pdf");
        QPainter painter(&pdf);
        int i = 4000;
        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial", 30));
        painter.drawText(3300, 1200, "Liste Des Reservations");
        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 50));
        painter.drawRect(1500, 200, 7300, 2600);
        painter.drawRect(0, 3000, 9600, 500);
        painter.setFont(QFont("Arial", 9));
        painter.drawText(1000, 3300, "code_res");
        painter.drawText(2000, 3300, "date_res");
        painter.drawText(2000, 3300, "date_resf");
        painter.drawText(3000, 3300, "time_res");

        QSqlQuery query;
        query.prepare("SELECT * FROM reservations");
        query.exec();

        while (query.next())
        {
            painter.drawText(1000, i, query.value("code_res").toString());
            painter.drawText(2000, i, query.value("date_res").toString());
            painter.drawText(2000, i, query.value("date_res").toString());
            painter.drawText(3000, i, query.value("heure_res").toString());

            i = i + 500;
        }

 }

void MainWindow::on_le_recherche_textChanged()
{
    Reservations R;
        if (ui->le_code->text() != "")
        {
            QString a = ui->le_code->text();
            ui->tab_reservation->setModel(R.displayClause("WHERE (code_res LIKE '%" + a + "%') "));
        }
        else
        {
            ui->tab_reservation->setModel(R.afficher());
        }

}


void MainWindow::on_pushButton_clicked()
{
    Reservations R;
       ui->tab_reservation->setModel(R.tri_id());

}


void MainWindow::on_pushButton_7_clicked()
{
    QString CODE=ui->codepromor->text();
    int POURCENTAGE=ui->POURCENTAGE->text().toInt();


    Promotions P(CODE, POURCENTAGE );
    bool test=P.ajouter();
    if(test)
    {
        QMessageBox ::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
        ui->tab_promo->setModel(P.afficher());
    }
    else
        QMessageBox ::critical(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout non effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString CODE=ui->codepromor->text();
    int POURCENTAGE=ui->POURCENTAGE->text().toInt();

    Promotions P(CODE, POURCENTAGE);
    bool test=P.modifier(CODE);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->tab_promo->setModel(P.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifier non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }

}

void MainWindow::on_pushButton_9_clicked()
{
    Promotions P; P.setCode(ui->codepromor->text());
    bool test=P.supprimer(P.getCode());
    if(test)
    {
        QMessageBox ::information(nullptr,QObject::tr("ok"),
                QObject::tr("suppression effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
        ui->tab_promo->setModel(P.afficher());

    }
    else
        QMessageBox ::critical(nullptr,QObject::tr("ok"),
                QObject::tr("suppression non effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
}







void MainWindow::message()
{
occ=0;
QString test1;
        data=A.read_from_arduino();  //input
qDebug()<<data;
        test1=data;
        test=test1.left(test1.length()-2);
       qDebug()<<test1.left(test1.length()-2);
    if (test[0]!="�"&& test[0]!="+"&& test!="" && test!="OK"  && occ==0  )
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

        notifyIcon->setIcon(QIcon(":/new/prefix1/icon/notification-3-line.svg"));
       notifyIcon->show();
        notifyIcon->showMessage("Massege from Arduino",test,QSystemTrayIcon::Information,15000);
        srand (time(NULL));
     QSqlQuery q;

     q.prepare("insert into message (MESSAGE)""values(:msg)");

     q.bindValue(":msg", test);
     q.exec();


    }


}



void MainWindow::checkAndSendDataToArduino()
{
   occ=1;
    QDateTime x = QDateTime::currentDateTime();

    QString x1 = QString::number(x.date().month());
    QString x2 = QString::number(x.date().day());
    QString x3 = QString::number(x.date().year());
    QString x4 = QString::number(x.time().hour());
    QString x5 = QString::number(x.time().minute());

    QSqlQuery query;
    query.prepare("SELECT DATE_RESF FROM RESERVATIONS WHERE "
                    "(EXTRACT(DAY FROM CAST(DATE_RESF AS TIMESTAMP))='" + x2 + "' "
                    "AND EXTRACT(MONTH FROM CAST(DATE_RESF AS TIMESTAMP))='" + x1 + "' "
                    "AND EXTRACT(YEAR FROM CAST(DATE_RESF AS TIMESTAMP))='" + x3 + "' "
                    "AND EXTRACT(HOUR FROM CAST(DATE_RESF AS TIMESTAMP))='" + x4 + "' "
                    "AND EXTRACT(MINUTE FROM CAST(DATE_RESF AS TIMESTAMP))='" + x5 + "')");

    if (query.exec() && query.next()) {
        QDateTime dbTime = query.value(0).toDateTime(); // Assuming the time_column is of type QDateTime
        // Compare times as strings
        if (x.toString("yyyy-MM-dd hh:mm") == dbTime.toString("yyyy-MM-dd hh:mm")) {
           QString t = "fin de reservation";
            qDebug ()<< t;

            QByteArray tt = t.toUtf8();
            A.write_to_arduino(tt);  //output
            // Send data to Arduino
        }

    }


}
