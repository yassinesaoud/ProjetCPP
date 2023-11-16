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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_code->setValidator(new QIntValidator(100, 9999999, this));


    Reservations R; // Crée une instance de la classe Reservations

    // Assurez-vous que la connexion à la base de données est ouverte avec succès
    QSqlDatabase db = QSqlDatabase::database(); // Récupère l'objet de la base de données
    bool database_opened_successfully = db.isOpen();
    qDebug() << "Update successful!";
    ui->tab_reservation->setModel(R.afficher());
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
    Reservations R(code_res,date_res,heure_res);
    bool test=R.ajouter();
    if(test)
    {
        QMessageBox ::information(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
        ui->tab_reservation->setModel(R.afficher());
    }
    else
        QMessageBox ::critical(nullptr,QObject::tr("ok"),
                QObject::tr("Ajout non effectue\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimer_clicked()
{
    Reservations R1; R1.setcode_res(ui->le_code_res_supp->text());
    bool test=R1.supprimer(R1.getcode_res());
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
    QString newcode_res =ui->code_modif->text();
            QString newdate_res=ui->date_modif->text();
            QString newheure_res=ui->time_modif->text();
            Reservations R(newcode_res,newdate_res,newheure_res);
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
        painter.drawText(3000, 3300, "time_res");

        QSqlQuery query;
        query.prepare("SELECT * FROM reservations");
        query.exec();

        while (query.next())
        {
            painter.drawText(1000, i, query.value("code_res").toString());
            painter.drawText(2000, i, query.value("date_res").toString());
            painter.drawText(3000, i, query.value("heure_res").toString());

            i = i + 500;
        }

 }

void MainWindow::on_le_recherche_textChanged()
{
    Reservations R;
        if (ui->le_coderechercher->text() != "")
        {
            QString a = ui->le_coderechercher->text();
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

