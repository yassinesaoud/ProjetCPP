//EMPLOYE
#include "employe.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QIntValidator>
#include <QSqlTableModel>
#include <QKeyEvent>
#include <QInputDialog>
#include <QDate>
#include <QDesktopServices>
#include <QListWidget>
#include <QDebug>
#include <QSortFilterProxyModel>
#include <QFile>
#include <QTextStream>
#include <QTextDocument>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QMap>
#include <QUrl>
#include <QStandardPaths>
#include<QPdfWriter>
#include <QLayout>
#include <QVector>
#include <QStringList>
#include <QPalette>
#include <QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QPainter>
#include <QtSql>
#include <QProcess>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QEasingCurve>
#include <QPixmap>
#include <QPoint>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts>
#include <QGraphicsTextItem>
#include <QFont>
#include <memory>
#include <QDir>
#include "arduino.h"
#include <QFile>
#include <QTextStream>
//vente
#include"ventevehicule.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QIntValidator>
#include <QSqlTableModel>
#include <QKeyEvent>
#include <QInputDialog>
#include <QDate>
#include <QListWidget>
#include <QDebug>
#include <QSortFilterProxyModel>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include "generateurpdf.h"
//Facture
#include "facture.h"
#include "iostream"
#include <QTabWidget>
#include<QSqlQuery>
#include <QDate>
#include <QDateEdit>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QStandardItemModel>
#include <QtWidgets>
#include <cstdlib>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QImage>
#include <QFileDialog>
#include "qrcode.h"
#include <QLabel>
 //Trajet
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QIntValidator>
#include <QSqlTableModel>
#include <QKeyEvent>
#include <QInputDialog>
#include <QDate>
#include <QListWidget>
#include <QDebug>
#include <QSortFilterProxyModel>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QtCharts/QBarSeries> // Inclure cette ligne
#include <QtCharts/QChart>
#include"trajets.h"
#include"notification.h"
#include <QFileDialog>
#include <QSettings>
#include <QCoreApplication>
#include <QUrl>
#include <QSqlRecord>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QVBoxLayout>
#include <QDialog>
#include <QPushButton>
//RESERVATION
#include "reservations.h"
#include"promotions.h"
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
#include <QTimer>
#include <QCoreApplication>
#include <QSystemTrayIcon>
 int occ=0;

//EMPLOYE
QString user,prenom;
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     ui->lineEdit_cin_employe->setPlaceholderText("10000-99999 🆔");
     ui->lineEdit_cin_employe->setValidator(new QIntValidator(10000,99999,this));
     ui->lineEdit_age_employe->setPlaceholderText("16-80 👴");
     ui->lineEdit_nom_employe->setPlaceholderText("entre 2 et 10 caractères 📛");
     ui->lineEdit_prenom_employe->setPlaceholderText("entre 2 et 10 caractères 📛");
     ui->lineEdit_heure_employe->setPlaceholderText("0-300 ⌚");
     ui->lineEdit_sexe_employe->setPlaceholderText("homme👨 femme👩");
     ui->lineEdit_sante_employe->setPlaceholderText("Bien-Non 💪");
     ui->lineEdit_chat->setPlaceholderText("Place your message 😊");
     ui->lineEdit_Habs_employe->setPlaceholderText("0-20 📅");
     ui->lineEdit_rfid_employe->setPlaceholderText("1000000-9999999999 💳");
     ui->lineEdit_age_employe->setValidator(new QIntValidator(0,100,this));
     ui->lineEdit_Habs_employe->setValidator(new QIntValidator(0,20,this));
     ui->lineEdit_heure_employe->setValidator(new QIntValidator(0,300,this));
     QRegExp regExpAutre("[A-Za-z]+");
     ui->lineEdit_nom_employe->setValidator(new QRegExpValidator(regExpAutre, this));
     ui->lineEdit_prenom_employe->setValidator(new QRegExpValidator(regExpAutre, this));
     ui->table_employe->setModel(e.afficher());
     QRegExp regExpSexe("(homme|femme)", Qt::CaseInsensitive);
     ui->lineEdit_sexe_employe->setValidator(new QRegExpValidator(regExpSexe, this));
     QRegExp regExpSante("(Bien|Non)", Qt::CaseInsensitive);
     ui->lineEdit_sante_employe->setValidator(new QRegExpValidator(regExpSante, this));
     ret=a.connect_arduino(); // lancer la connexion à arduino
            switch(ret){
            case(0):qDebug()<< "arduino is available and connected to : "<< a.getarduino_port_name();
                break;
            case(1):qDebug() << "arduino is available but not connected to :" <<a.getarduino_port_name();
               break;
            case(-1):qDebug() << "arduino is not available";
            }
             //le slot update_label suite à la reception du signal readyRead (reception des données).
             QObject::connect(a.getserial(),SIGNAL(readyRead()),this,SLOT(input()));


            // vente :
             ui->le_id_vehicule->setValidator(new QIntValidator(0, 999999, this));
                 ui->tab_vente->setModel(V.afficher());
             //Facture
                 ui->ID_facture->setValidator(new QIntValidator(0,99999,this));
                 //ui->montant_facture->setValidator(new QDoubleValidator(0.0, 99999.0, 2, ui->montant_facture));
                // ui->montant_facture->setMaxLength(8);
                // ui->client_facture->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z]{1,8}$"), this));
                // ui->payement_facture->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z]{1,8}$"), this));
                 ui->verticalLayout->addWidget(f.stat_factures());
                 //ui->rech->setValidator(new QIntValidator(0,99999,this));
                 ui->table_facture->setModel(f.afficher());
                 ui->gain->setColumnCount(2);
                   QStringList headerLabels;
                   headerLabels << "Year" << "Gain";
                   ui->gain->setHorizontalHeaderLabels(headerLabels);

               //Trajet
                 ui->id_trajet->setValidator(new QIntValidator(0,9999999,this));
                 ui->tab_trajet->setModel(T.afficher());
                 QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                                    QCoreApplication::organizationName(), QCoreApplication::applicationName());

                 //Reservation
                 ui->tab_reservation->setModel(R.afficher());
                       ui->table_flotee->setModel(fl.GETALL());

}
void MainWindow::on_pushButton_conn_2_clicked()
{
    QString pass = ui->lineEdit_cin_login->text();
    QString user = ui->lineEdit_nom_login->text();
    QString prenom,sexe,messagg;
    QSqlQuery query;
    query.prepare("SELECT * FROM GS_EMPLOYE WHERE cin = :cin AND nom = :nom");
    query.bindValue(":cin", pass);
    query.bindValue(":nom", user);
    query.exec();
    if (query.next()) {
        prenom= query.value(2).toString();
        a.write_to_arduino("employe : "+user);
        sexe=query.value(6).toString();
        if(sexe=="homme")
        {
            messagg="Monsieur";
        }
        else{messagg="Madame";
        }

        QString message ="Welcom "+messagg+" "+user+" "+prenom;
        ui->us->setText(message);
        ui->us->setTextFormat(Qt::RichText);

        // Start the timer to gradually change the text color and size
        QTimer *timer = new QTimer(this);

        // Define the color list and other parameters
        const int numColors = 5;
        QColor colorList[numColors] = {
            QColor(52, 152, 219),   // Blue
            QColor(41, 21, 60),    // Red
            QColor(240, 20, 241),   // Green
            QColor(240, 16, 15),   // Yellow
            QColor(155, 89, 182)    // Purple
        };

        int colorIndex = 0;
        int fontSize = 14;  // Initial font size
        const int maxFontSize = 20;  // Maximum font size

        connect(timer, &QTimer::timeout, this, [=]() mutable {
            // Set the text color
            ui->us->setStyleSheet("color: " + colorList[colorIndex].name() + ";");

            // Set the text size
            QFont font = ui->us->font();
            font.setPointSize(fontSize);
            ui->us->setFont(font);

            // Increment the color index and wrap around if necessary
            colorIndex = (colorIndex + 1) % numColors;

            // Increase the font size for the next iteration, but stop looping if it exceeds the maximum
            if (fontSize < maxFontSize) {
                fontSize += 2;
            }
        });

        // Set the timer interval and start it
        timer->start(300);  // Change color and size every 300 milliseconds

     ui->stackedWidget->setCurrentIndex(0);



}
}
void MainWindow::on_pushButton_disconnect_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::input(){
data=a.read_from_arduino();
ref= data;
qDebug()<<ref.left(ref.length()-2);
if(ui->stackedWidget->currentIndex()==1){
   QSqlQuery query;

query.prepare("SELECT * FROM gs_employe WHERE rfid = :rfid");
query.bindValue(":rfid", ref.left(ref.length()-2));
query.exec();
if (query.next()) {
    user= query.value(1).toString();
    prenom=query.value(2).toString();


    QString message = user+" "+prenom;
    ui->us->setText(message);
    ui->us->setTextFormat(Qt::RichText);

    // Start the timer to gradually change the text color and size
    QTimer *timer = new QTimer(this);

    // Define the color list and other parameters
    const int numColors = 5;
    QColor colorList[numColors] = {
        QColor(52, 152, 219),   // Blue
        QColor(41, 21, 60),    // Red
        QColor(240, 20, 241),   // Green
        QColor(240, 16, 15),   // Yellow
        QColor(155, 89, 182)    // Purple
    };

    int colorIndex = 0;
    int fontSize = 14;  // Initial font size
    const int maxFontSize = 20;  // Maximum font size

    connect(timer, &QTimer::timeout, this, [=]() mutable {
        // Set the text color
        ui->us->setStyleSheet("color: " + colorList[colorIndex].name() + ";");

        // Set the text size
        QFont font = ui->us->font();
        font.setPointSize(fontSize);
        ui->us->setFont(font);

        // Increment the color index and wrap around if necessary
        colorIndex = (colorIndex + 1) % numColors;

        // Increase the font size for the next iteration, but stop looping if it exceeds the maximum
        if (fontSize < maxFontSize) {
            fontSize += 2;
        }
    });

    // Set the timer interval and start it
    timer->start(300);  // Change color and size every 300 milliseconds

    ui->stackedWidget->setCurrentIndex(0);
a.write_to_arduino("employe : "+user);
}
}
else {
         ui->lineEdit_rfid_employe->setText(ref.left(ref.length()-2));
}

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_ajouter_employe_clicked()
{
    int cin =ui->lineEdit_cin_employe->text().toInt();
    QString nom=ui->lineEdit_nom_employe->text();
    QString prenom=ui->lineEdit_prenom_employe->text();
    int age=ui->lineEdit_age_employe->text().toInt();
    QString sante=ui->lineEdit_sante_employe->text();
    int heure =ui->lineEdit_heure_employe->text().toInt();
    QString sexe=ui->lineEdit_sexe_employe->text();
    QString rfid=ui->lineEdit_rfid_employe->text();
    int abs =ui->lineEdit_Habs_employe->text().toInt();
    if (cin < 10000 || cin > 99999999) {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("La valeur du cin doit être comprise entre 10000 et 99999."), QMessageBox::Cancel);
            return;
        }

    if (nom.length() < 2 || nom.length() > 10) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom doit avoir entre 2 et 10 caractères."), QMessageBox::Cancel);
           return;
       }
    if (rfid.length() < 2 || rfid.length() > 20) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Il faux ajouter une RFID 📡."), QMessageBox::Cancel);
           return;
       }

       // Contrôle de saisie pour le prénom
       if (prenom.length() < 2 || prenom.length() > 10) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Le prénom doit avoir entre 2 et 10 caractères."), QMessageBox::Cancel);
           return;
       }
       if (age < 16 || age > 80) {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("L'âge doit être compris entre 16 et 80 ans."), QMessageBox::Cancel);
               return;
           }
    QRegExp regExpSexe("(homme|femme)", Qt::CaseInsensitive);
       if (!regExpSexe.exactMatch(sexe)) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("La valeur de sexe doit être \"homme\" ou \"femme\"."), QMessageBox::Cancel);
           return;
       }

       // Contrôle de saisie pour la santé
       QRegExp regExpSante("(Bien|Non)", Qt::CaseInsensitive);
       if (!regExpSante.exactMatch(sante)) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("La valeur de santé doit être \"Bien\" ou \"Non\"."), QMessageBox::Cancel);
           return;
       }
    employe e(cin,nom,prenom,age,sante,heure,sexe,abs,rfid);
    bool test=e.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Ajout effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("ajouter non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}
void MainWindow::on_pushButton_supp_employe_clicked()
{
    int id=ui->lineEdit_cin_employe->text().toInt();
    bool test=e.supprimer(id);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("supprimer effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel); ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("supprimer non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}
void MainWindow::on_pushButton_modifier_employe_clicked()
{
    int newcin =ui->lineEdit_cin_employe->text().toInt();
    QString newnom=ui->lineEdit_nom_employe->text();
    QString newprenom=ui->lineEdit_prenom_employe->text();
    int newage=ui->lineEdit_age_employe->text().toInt();
    QString newsante=ui->lineEdit_sante_employe->text();
    int newheure =ui->lineEdit_heure_employe->text().toUInt();
    QString newsexe=ui->lineEdit_sexe_employe->text();
    QString newrfid=ui->lineEdit_rfid_employe->text();
    int newabs =ui->lineEdit_Habs_employe->text().toUInt();
    if (newnom.length() < 2 || newnom.length() > 10) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom doit avoir entre 2 et 10 caractères."), QMessageBox::Cancel);
           return;
       }

       // Contrôle de saisie pour le prénom
       if (newprenom.length() < 2 || newprenom.length() > 10) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Le prénom doit avoir entre 2 et 10 caractères."), QMessageBox::Cancel);
           return;
       }
       if (newage < 16 || newage > 80) {
               QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("L'âge doit être compris entre 16 et 80 ans."), QMessageBox::Cancel);
               return;
           }
    QRegExp regExpSexe("(homme|femme)", Qt::CaseInsensitive);
       if (!regExpSexe.exactMatch(newsexe)) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("La valeur de sexe doit être \"homme\" ou \"femme\"."), QMessageBox::Cancel);
           return;
       }

       // Contrôle de saisie pour la santé
       QRegExp regExpSante("(Bien|Non)", Qt::CaseInsensitive);
       if (!regExpSante.exactMatch(newsante)) {
           QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("La valeur de santé doit être \"Bien\" ou \"Non\"."), QMessageBox::Cancel);
           return;
       }
    employe e(newcin,newnom,newprenom,newage,newsante,newheure,newsexe,newabs,newrfid);
    bool test=e.modifier();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}
void MainWindow::on_pushButton_chercher_employe_clicked(){}
void MainWindow::on_pushButton_tri_id_employe_clicked()
{
    employe E;
           QSqlQueryModel* result = e.tri_cin();
           ui->table_employe->setModel(result);

}
void MainWindow::on_pushButton_tri_age_employe_clicked()
{
    employe E;
           QSqlQueryModel* result = e.tri_age();
           ui->table_employe->setModel(result);
}
void MainWindow::on_pushButton_tri_nom_employe_clicked()
{
    employe E;
    QSqlQueryModel* result = E.tri_nom();
    ui->table_employe->setModel(result);
}
void MainWindow::on_pushButton_tri_prenom_employe_clicked()
{
    employe E;
    QSqlQueryModel* result = E.tri_prenom();
    ui->table_employe->setModel(result);
}
void MainWindow::on_pushButton_rechercher_employe_clicked()
{
    int id = ui->lineEdit_cin_employe->text().toInt();

    std::unique_ptr<QSqlQueryModel> res(e.rechercher(id));

    if (res->lastError().isValid()) {
        qDebug() << "Error executing query: " << res->lastError().text();
        QMessageBox::critical(nullptr, QObject::tr("Recherche"),
                              QObject::tr("Erreur lors de la recherche d'employé."), QMessageBox::Ok);
        return;
    }

    if (res->rowCount() > 0) {
        // Employee found, get details
        int cin = res->record(0).value("cin").toInt();
        QString nom = res->record(0).value("nom").toString();
        QString prenom = res->record(0).value("prenom").toString();
        int age = res->record(0).value("age").toInt();
        QString sante = res->record(0).value("santer").toString();
        QString heure = res->record(0).value("heure").toString();
        QString sexe = res->record(0).value("sexe").toString();
        int abs = res->record(0).value("abs").toInt();
        QString rfid = res->record(0).value("rfid").toString();

        // Display details in a QMessageBox
        QString detailsText = tr("CIN: %1\nNom: %2\nPrenom: %3\nAge: %4\nSante: %5\nHeure: %6\nSexe: %7\nAbs: %8\rfid: %9")
                              .arg(cin).arg(nom).arg(prenom).arg(age).arg(sante).arg(heure).arg(sexe).arg(abs).arg(rfid);

        QMessageBox::information(nullptr, QObject::tr("Détails de l'employé"), detailsText, QMessageBox::Ok);
    } else {
        QMessageBox::information(nullptr, QObject::tr("Recherche"),
                                 QObject::tr("Aucun employé trouvé."), QMessageBox::Ok);
    }
}
void MainWindow::on_pushButton_PDF_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "Fichiers PDF (*.pdf)");

    if (!fileName.isEmpty()) {
        employe E;
        QSqlQueryModel* mod = E.afficher();

        if (E.exporterPDF(fileName, mod)) {
            QMessageBox::information(this, "Exportation PDF", "Les données ont été exportées en PDF avec succès !");
        } else {
            QMessageBox::warning(this, "Exportation PDF", "Échec de l'exportation en PDF.");
        }
    }
}
void MainWindow::on_pushButton_employe_de_moit_employe_clicked()
{
    employe e;
    employe E;
    E = e.employe_du_mois();

    QString message = "L'employé du mois est: <strong><span style='text-decoration: underline; font-size: 80;'>" + E.Getnom() + " " + E.Getprenom() + "</span></strong>"" ""🎉🎉🎉🎉";
    ui->mes2->setText(message);
    ui->mes2->setTextFormat(Qt::RichText);

    // Start the timer to gradually change the text color and size
    QTimer *timer = new QTimer(this);

    // Define the color list and other parameters
    const int numColors = 5;
    QColor colorList[numColors] = {
        QColor(52, 152, 219),   // Blue
        QColor(41, 21, 60),    // Red
        QColor(240, 20, 241),   // Green
        QColor(240, 16, 15),   // Yellow
        QColor(155, 89, 182)    // Purple
    };

    int colorIndex = 0;
    int fontSize = 14;  // Initial font size
    const int maxFontSize = 20;  // Maximum font size

    connect(timer, &QTimer::timeout, this, [=]() mutable {
        // Set the text color
        ui->mes2->setStyleSheet("color: " + colorList[colorIndex].name() + ";");

        // Set the text size
        QFont font = ui->mes2->font();
        font.setPointSize(fontSize);
        ui->mes2->setFont(font);

        // Increment the color index and wrap around if necessary
        colorIndex = (colorIndex + 1) % numColors;

        // Increase the font size for the next iteration, but stop looping if it exceeds the maximum
        if (fontSize < maxFontSize) {
            fontSize += 2;
        }
    });

    // Set the timer interval and start it
    timer->start(300);  // Change color and size every 300 milliseconds
}
void MainWindow::on_pushButton_statstique_employe_clicked()
{
    QSqlQueryModel *model = e.afficher();

    if (!model) {
        qDebug() << "Error: QSqlQueryModel is null.";
        return;
    }

    int totalEmployes = model->rowCount();
    int femme = 0;
    int homme = 0;

    // Assuming 'sexe' is an attribute in the employe class
    int sexeColumnIndex = model->record().indexOf("sexe");

    // Count male and female employees
    for (int row = 0; row < totalEmployes; ++row) {
        QString sexe = model->data(model->index(row, sexeColumnIndex)).toString().toLower();
        if (sexe == "femme") {
            femme++;
        } else if (sexe == "homme") {
            homme++;
        }
    }

    // Calculate percentages
    double pourcentagefemme = (totalEmployes > 0) ? ((double)femme / totalEmployes) * 100 : 0;
    double pourcentagehomme = (totalEmployes > 0) ? ((double)homme / totalEmployes) * 100 : 0;

    // Create QPieSeries
    QPieSeries *series = new QPieSeries();

    // Add slices
    if (pourcentagefemme > 0) {
        QPieSlice *slicefemme = new QPieSlice(QString("Femme (%1%)").arg(pourcentagefemme), pourcentagefemme);
        slicefemme->setColor(QColor("pink")); // Change color to pink
        series->append(slicefemme);
    }

    if (pourcentagehomme > 0) {
        QPieSlice *slicehomme = new QPieSlice(QString("Homme (%1%)").arg(pourcentagehomme), pourcentagehomme);
        slicehomme->setColor(QColor("lightblue")); // Change color to lightblue
        series->append(slicehomme);
    }

    // Create QChart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique FEMME, HOMME");

    // Customize legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Create QChartView
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Add rotation animation
    QPropertyAnimation *animation = new QPropertyAnimation(series, "slicesAngle");
    animation->setStartValue(0.0);
    animation->setEndValue(360.0);
    animation->setDuration(2000); // Animation duration in milliseconds

    // Set chart animation

    chart->setAnimationOptions(QChart::AllAnimations);
    chartView->setChart(chart);

    // Create QDialog
    chartDialog = new QDialog(this);
    chartDialog->setFixedSize(1080, 720);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
    connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::accept);
    layout->addWidget(closeButton);

    // Display the window
    chartDialog->exec();
}
void MainWindow::on_pushButton_chat_employe_clicked()
{
    QString userQuestion = ui->lineEdit_chat->text();

        // Create an employe instance
        employe E;

        // Get the chatbot response
        QString botResponse = E.chatBotResponse(userQuestion);

        // Append the user's question and the chatbot's response to the QTextEdit
        ui->textEdit_chat->append("User: " + userQuestion);
        ui->textEdit_chat->append("ChatBot: " + botResponse);

        // Clear the input field for the next question
        ui->lineEdit_chat->clear();
}
void MainWindow::on_pushButton_OuvrirBlocNote_employe_clicked()
{
    QString cheminBlocNote = "notepad.exe";

       // Utiliser QProcess pour démarrer le Bloc-notes
       QProcess *processBlocNote = new QProcess(this);
       processBlocNote->start(cheminBlocNote);

       if (!processBlocNote->waitForStarted()) {
           // Gérer les erreurs si le Bloc-notes ne peut pas être démarré
           QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le Bloc-notes.");
       }
}
void MainWindow::on_pushButton_age_statistique_employe_clicked()
{
    {
        QSqlQueryModel *model = e.afficher();

        if (!model) {
            qDebug() << "Error: QSqlQueryModel is null.";
            return;
        }

        int totalEmployes = model->rowCount();

        // Assuming 'age' is an attribute in the employe class
        int ageColumnIndex = model->record().indexOf("age");

        // Define age groups
        QVector<int> ageGroups = {18, 25, 32, 39, 49, 100};
        QVector<int> ageCount(ageGroups.size(), 0);

        // Count employees in each age group
        for (int row = 0; row < totalEmployes; ++row) {
            int age = model->data(model->index(row, ageColumnIndex)).toInt();

            for (int i = 0; i < ageGroups.size(); ++i) {
                if (age <= ageGroups[i]) {
                    ageCount[i]++;
                    break;
                }
            }
        }

        // Create QPieSeries
        QPieSeries *series = new QPieSeries();

        // Add slices for each age group
        for (int i = 0; i < ageGroups.size(); ++i) {
            double percentage = (totalEmployes > 0) ? ((double)ageCount[i] / totalEmployes) * 100 : 0;
            QString label = QString("%1-%2 ans (%3%)").arg((i == 0) ? 0 : ageGroups[i - 1] + 1).arg(ageGroups[i]).arg(percentage);

            if (percentage > 0) {
                QPieSlice *slice = new QPieSlice(label, percentage);
                slice->setColor(QColor::fromHsv(i * (255 / ageGroups.size()), 255, 200)); // Adjust color
                series->append(slice);
            }
        }

        // Create QChart
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistique par tranche d'âge");

        // Customize legend
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignRight);

        // Create QChartView
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        // Add rotation animation
        QPropertyAnimation *animation = new QPropertyAnimation(series, "slicesAngle");
        animation->setStartValue(0.0);
        animation->setEndValue(360.0);
        animation->setDuration(2000); // Animation duration in milliseconds

        // Set chart animation
        chart->setAnimationOptions(QChart::AllAnimations);
        chartView->setChart(chart);

        // Create QDialog
        QDialog *chartDialog = new QDialog(this);
        chartDialog->setFixedSize(1080, 720);
        QVBoxLayout *layout = new QVBoxLayout(chartDialog);
        layout->addWidget(chartView);

        // Close button
        QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
        connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::accept);
        layout->addWidget(closeButton);

        // Display the window
        chartDialog->exec();
    }
}
void MainWindow::on_pushButton_abs_statistique_employe_clicked()
{
    QSqlQueryModel *model = e.afficher();

    if (!model) {
        qDebug() << "Error: QSqlQueryModel is null.";
        return;
    }

    int totalEmployes = model->rowCount();

    // Assuming 'abs' and 'heure' are attributes in the employe class
    int absColumnIndex = model->record().indexOf("abs");
    int heureColumnIndex = model->record().indexOf("heure");

    // Define absence groups
    QVector<int> absGroups = {0, 6, 10, 18, 20};
    QVector<int> absCount(absGroups.size(), 0);
    QVector<int> heureSum(absGroups.size(), 0);

    // Create QChartView
    QChartView *chartView = new QChartView;

    // Count employees in each absence group and calculate total absence hours
    for (int row = 0; row < totalEmployes; ++row) {
        int abs = model->data(model->index(row, absColumnIndex)).toInt();
        int heure = model->data(model->index(row, heureColumnIndex)).toInt();

        for (int i = 0; i < absGroups.size(); ++i) {
            if (abs <= absGroups[i]) {
                absCount[i]++;
                heureSum[i] += heure;
                break;
            }
        }
    }

    // Create QPieSeries
    QPieSeries *series = new QPieSeries();

    // Set label visibility and position
    series->setLabelsVisible(true);
    series->setLabelsPosition(QPieSlice::LabelInsideHorizontal);

    // Add slices for each absence group
    for (int i = 0; i < absGroups.size(); ++i) {
        double percentage = (totalEmployes > 0) ? ((double)absCount[i] / totalEmployes) * 100 : 0;
        QString label = QString("%1-%2 jours").arg((i == 0) ? 0 : absGroups[i - 1] + 1).arg(absGroups[i]);

        if (percentage > 0) {
            QPieSlice *slice = new QPieSlice(label, percentage);
            slice->setColor(QColor::fromHsv(i * (255 / absGroups.size()), 255, 200)); // Adjust color

            // Modify the label text to include the percentage
            slice->setLabel(QString("%1 - %2%").arg(label).arg(percentage, 0, 'f', 1));

            // Add slice to the series
            series->append(slice);
        }
    }
    // Create QChart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique par absence");

    // Customize legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Set chart animation
    chart->setAnimationOptions(QChart::AllAnimations);
    chartView->setChart(chart);

    // Create QDialog
    QDialog *chartDialog = new QDialog(this);
    chartDialog->setFixedSize(1080, 720);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
    connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::accept);
    layout->addWidget(closeButton);

    // Display the window
    chartDialog->exec();
}
void MainWindow::on_pushButton_Word_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en Word", "", "Fichiers Word (*.odt)");

       if (!fileName.isEmpty()) {
           employe E;
           QSqlQueryModel* mod = E.afficher();

           if (E.exporterWord(fileName, mod)) {
               QMessageBox::information(this, "Exportation Word", "Les données ont été exportées en document Word avec succès !");
           } else {
               QMessageBox::warning(this, "Exportation Word", "Échec de l'exportation en document Word.");
           }
       }
}
void MainWindow::on_pushButton_heure_statistique_employe_clicked()
{
    employe e;
    QSqlQueryModel *model = e.afficher();

    if (!model) {
        qDebug() << "Error: QSqlQueryModel is null.";
        return;
    }

    int totalEmployes = model->rowCount();

    // Assuming 'heure' is an attribute in the employe class
    int heureColumnIndex = model->record().indexOf("heure");

    // Create QBarSeries
    QBarSeries *barSeries = new QBarSeries();

    // Count employees in different hour ranges
    int range120 = 0, range180 = 0, range210 = 0, range250 = 0, range300 = 0;

    for (int row = 0; row < totalEmployes; ++row) {
        int heure = model->data(model->index(row, heureColumnIndex)).toInt();

        if (heure >= 0 && heure <= 120) {
            range120++;
        } else if (heure <= 180) {
            range180++;
        } else if (heure <= 210) {
            range210++;
        } else if (heure <= 250) {
            range250++;
        } else {
            range300++;
        }
    }

    // Add bars to the bar series
    QBarSet *barSet = new QBarSet("Heure");
    *barSet << range120 << range180 << range210 << range250 << range300;
    barSeries->append(barSet);

    // Create QChart
    QChart *chart = new QChart();
    chart->addSeries(barSeries);
    chart->setTitle("Statistique HEURE");

    // Customize the chart
    chart->createDefaultAxes();
    // Create QBarCategoryAxis for x-axis
    QBarCategoryAxis *axisX = new QBarCategoryAxis();

    // Labels for the x-axis
    QStringList labels = {"0-120 heure ", "120-180 heure", "180-210 heure", "210-250 heure", "250-300 heure"};

    for (int i = 0; i < labels.size(); ++i) {
        QString label = labels[i];

        // Append percentage for each label
        label += "\n(" + QString::number((double)barSet->at(i) / totalEmployes * 100, 'f', 1) + "%)";

        axisX->append(label);
    }

    chart->setAxisX(axisX, barSeries);


    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 20);  // Set the maximum value to 20

    // Customize the labels on the Y-axis
    axisY->setLabelFormat("%.0f employes");
    chart->setAxisY(axisY, barSeries);

    chart->setAnimationOptions(QChart::AllAnimations);

    // Create QChartView
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Create QDialog with opacity animation
    QDialog *chartDialog = new QDialog(this, Qt::Window | Qt::FramelessWindowHint);
    chartDialog->setFixedSize(1080, 720);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Set initial opacity to 0
    chartDialog->setWindowOpacity(0.0);

    // Opacity animation
    QPropertyAnimation *opacityAnimation = new QPropertyAnimation(chartDialog, "windowOpacity");
    opacityAnimation->setStartValue(0.0);
    opacityAnimation->setEndValue(1.0);
    opacityAnimation->setDuration(500);  // Animation duration in milliseconds

    // Connect animation finished signal to delete the animation object
    connect(opacityAnimation, &QPropertyAnimation::finished, opacityAnimation, &QObject::deleteLater);

    // Start the opacity animation
    opacityAnimation->start();

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
    connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::accept);
    layout->addWidget(closeButton);

    // Display the window
    chartDialog->exec();
}
void MainWindow::on_pushButton_calculer_prime_employe_clicked()
{
    employe e;
    employe E = e.employe_du_mois();

    // Calcul du prime
    double prime = E.calculerPrime();

    // Affichage du prime avec animation
    QString message = "Le prime de l'employé du mois est de : <strong><span style='text-decoration: underline; font-size: 30;'>"
                      + QString::number(prime) + " DT</span></strong><br>&nbsp;&nbsp;"
                                                 "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"
                                                 "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;💰💰💰💰";

    ui->mes2->setText(message);
    ui->mes2->setTextFormat(Qt::RichText);

    // Start the timer to gradually change the text color and size
    QTimer *timer = new QTimer(this);

    // ... (la suite du code reste la même)

    // Connectez le timer à une fonction lambda pour changer la couleur et la taille du texte
    connect(timer, &QTimer::timeout, this, [=]() mutable {
        // ... (la suite du code reste la même)
    });

    // Définissez l'intervalle du timer et démarrez-le
    timer->start(300);  // Changez la couleur et la taille toutes les 300 millisecondes
}
void MainWindow::on_pushButton_showQuestions_employe_clicked()
{
    // Create a QMessageBox to display the list of questions
    QMessageBox questionBox;
    questionBox.setWindowTitle("List of Questions");

    QString questionList;
    questionList += "1. Bonjour\n";
    questionList += "2. Comment ça va\n";
    questionList += "3. Aide\n";
    questionList += "4. Disponibilité d'une voiture\n";
    questionList += "5. Tarifs de location\n";
    questionList += "6. Entretien des véhicules\n";
    questionList += "7. Comment réserver\n";
    questionList += "8. Suivi de réservation\n";
    questionList += "9. Les heures de travail\n";
    questionList += "10. Modèles de voitures disponibles\n";
    questionList += "11. Combien il y a d'employés\n";
    questionList += "12. Combien de femmes\n";
    questionList += "13. Combien d'hommes\n";
    questionList += "14. Combien d'employés de plus de 25 ans\n";
    questionList += "15. Informations sur l'employé avec le CIN [cin_number]\n";
    questionList += "16. Quels employés ont l'âge [age_number]\n";
    questionList += "17. employé du mois\n";
    questionBox.setText(questionList);
    questionBox.exec();
}
void MainWindow::on_table_employe_clicked(const QModelIndex &index)
{
    int selectedRow = index.row();
       QString cin = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 0)).toString();
       QString nom = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 1)).toString();
       QString prenom = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 2)).toString();
       QString age = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 3)).toString();
       QString sante = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 4)).toString();
       QString heure = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 5)).toString();
       QString sexe = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 6)).toString();
       QString abs = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 7)).toString();
       QString rfid = ui->table_employe->model()->data(ui->table_employe->model()->index(selectedRow, 8)).toString();

       // Populate line edit widgets with the selected data
       ui->lineEdit_cin_employe->setText(cin);
       ui->lineEdit_nom_employe->setText(nom);
       ui->lineEdit_prenom_employe->setText(prenom);
       ui->lineEdit_age_employe->setText(age);
       ui->lineEdit_sante_employe->setText(sante);
       ui->lineEdit_heure_employe->setText(heure);
       ui->lineEdit_sexe_employe->setText(sexe);
       ui->lineEdit_Habs_employe->setText(abs);
       ui->lineEdit_rfid_employe->setText(rfid);
}



//Vente :
void MainWindow::on_pushButton_disconnect_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pb_ajouter_vente_clicked()
{
    int id_vehicule=ui->le_id_vehicule->text().toInt();
    QString nom_beneficaire=ui->le_nom_beneficiaire->text();
    QString type=ui->le_type->text();
    QString model=ui->le_model->text();
    int num_chassis=ui->le_type->text().toInt();
    int prix_vente=ui->le_prix_vente->text().toInt();
  Ventevehicule V(id_vehicule,nom_beneficaire,type,model,num_chassis,prix_vente);
   bool test=V.ajouter();
     if(test)
          {
             { QMessageBox::information(nullptr, QObject::tr("OK"),
                          QObject::tr("Ajout effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
                  ui->tab_vente->setModel(V.afficher());


              }
          }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                          QObject::tr("Ajout non effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
}
void MainWindow::on_modifier_vente_clicked()
{

           int newid_vehicule=ui->le_id_vehicule->text().toInt();
            QString newNOM_BENEFICAIRE=ui->le_nom_beneficiaire->text();
            QString newtype=ui->le_type->text();
            QString newmodel=ui->le_model->text();
            int newnum_chassis=ui->le_num_chassis->text().toInt();
            int newprix_vente=ui->le_prix_vente->text().toInt();
            Ventevehicule V(newid_vehicule,newNOM_BENEFICAIRE,newtype,newmodel,newnum_chassis,newprix_vente);
            bool test=V.modifier();
            if(test){
                QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
                ui->tab_vente->setModel(V.afficher());


            }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

            }
}
void MainWindow::on_rechercher_vente_clicked()
{
    Ventevehicule V;
              int id_vehicule = ui->le_id_vehicule->text().toInt();

              QSqlQueryModel* res = V.recherche(id_vehicule);

              if (res->rowCount() > 0) {

                  QMessageBox::information(nullptr, QObject::tr("Recherche"),
                                           QObject::tr("vehicule existant."), QMessageBox::Ok);
                                        }
              else {
                  QMessageBox::information(nullptr, QObject::tr("Recherche"),
                                           QObject::tr("Aucun résultat trouvé pour cet id."), QMessageBox::Ok);
              }

}
void MainWindow::on_exporte_vente_clicked()
{
    QString nomFichierPDF = QFileDialog::getSaveFileName(this, "Enregistrer PDF", "", "Fichiers PDF (*.pdf)");

            if (!nomFichierPDF.isEmpty()) {
                QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tab_vente->model());

                if (model) {
                    GenerateurPDF::genererPDF(model, nomFichierPDF);
                } else {
                    QMessageBox::warning(this, "Erreur", "Le modèle n'est pas de type QSqlQueryModel.");
                }
            }
}
void MainWindow::on_tri_2_vente_clicked()
{
    Ventevehicule V;
           QSqlQueryModel *model = V.tri();


           ui->tab_vente->setModel(model);
}
void MainWindow::on_historique_vente_clicked()
{

        Ventevehicule *venteVehicule = new Ventevehicule();


        venteVehicule->afficherHistorique();

}
void MainWindow::on_stat_vente_clicked()
{
    Ventevehicule v;
    QSqlQueryModel *model = v.afficher();

    if (!model) {
        qDebug() << "Error: QSqlQueryModel is null.";
        return;
    }

    int type = model->rowCount();
    int avendre = 0;
    int alouer = 0;

    int typess = model->record().indexOf("TYPE");

    for (int row = 0; row < type; ++row) {
        QString typs = model->data(model->index(row, typess)).toString().toLower();
        if (typs == "avendre") {
            avendre++;
        } else if (typs == "alouer") {
            alouer++;
        }
    }

    double pavendre = (type > 0) ? ((double)avendre / type) * 100 : 0;
    double palouer = (type > 0) ? ((double)alouer / type) * 100 : 0;

    // Create QPieSeries
    QPieSeries *series = new QPieSeries();

    // Add slices
    if (pavendre > 0) {
        QPieSlice *sliceavendre = new QPieSlice(QString("À vendre (%1%)").arg(pavendre), pavendre);
        sliceavendre->setColor(QColor("#5cb85c")); // Change color to green
        series->append(sliceavendre);
    }

    if (palouer > 0) {
        QPieSlice *slicelouer = new QPieSlice(QString("À louer (%1%)").arg(palouer), palouer);
        slicelouer->setColor(QColor("#2e6da4")); // Change color to dark blue
        series->append(slicelouer);
    }

    // Create QChart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique À vendre, À louer");

    // Customize legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Create QChartView
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Add rotation animation
    QPropertyAnimation *animation = new QPropertyAnimation(series, "slicesAngle");
    animation->setStartValue(0.0);
    animation->setEndValue(360.0);
    animation->setDuration(2000); // Animation duration in milliseconds

    // Set chart animation options
    chart->setAnimationOptions(QChart::AllAnimations);
    chartView->setChart(chart);

    // Start the rotation animation
    animation->start();

    // Create QDialog
    QDialog *chartDialog = new QDialog(this);
    chartDialog->setFixedSize(800, 600);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
    connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::close);
    layout->addWidget(closeButton);

    // Display the window
    chartDialog->exec();

    // Deallocate memory
    delete chartDialog;
}
void MainWindow::on_arduino_2_vente_clicked()
{
    // Simulate movement detection
           bool movementDetected = true; // Replace this with actual logic

           if (movementDetected) {
               // Get current time
               QDateTime currentDateTime = QDateTime::currentDateTime();
               QString currentTime = currentDateTime.toString("yyyy-MM-dd HH:mm");  // Adjusted the format

               // Save the time to the database
               QSqlQuery query;
               query.prepare("INSERT INTO ButtonClicks (ClickTime) VALUES (TO_DATE(:time, 'YYYY-MM-DD HH24:MI'))");
               query.bindValue(":time", currentTime);

               if (!query.exec()) {
                   qDebug() << "Error: Failed to insert button click time into the database.";
                   qDebug() << "Query error: " << query.lastError().text();
               }

               // Display the time on the label
            //   ui->labelTime->setText("Movement Detected at " + currentTime);
               QString messag = "Movement Detected at " + currentTime;
               ui->labelTime->setText(messag);
               ui->labelTime->setTextFormat(Qt::RichText);

               // Start the timer to gradually change the text color and size
               QTimer *timer = new QTimer(this);

               // Define the color list and other parameters
               const int numColors = 5;
               QColor colorList[numColors] = {
                   QColor(52, 152, 219),   // Blue
                   QColor(41, 21, 60),    // Red
                   QColor(240, 20, 241),   // Green
                   QColor(240, 16, 15),   // Yellow
                   QColor(155, 89, 182)    // Purple
               };

               int colorIndex = 0;
               int fontSize = 14;  // Initial font size
               const int maxFontSize = 20;  // Maximum font size

               connect(timer, &QTimer::timeout, this, [=]() mutable {
                   // Set the text color
                   ui->labelTime->setStyleSheet("color: " + colorList[colorIndex].name() + ";");

                   // Set the text size
                   QFont font = ui->labelTime->font();
                   font.setPointSize(fontSize);
                   ui->labelTime->setFont(font);

                   // Increment the color index and wrap around if necessary
                   colorIndex = (colorIndex + 1) % numColors;

                   // Increase the font size for the next iteration, but stop looping if it exceeds the maximum
                   if (fontSize < maxFontSize) {
                       fontSize += 2;
                   }
               });

               // Set the timer interval and start it
               timer->start(300);  // Change color and size every 300 milliseconds
           }
           }
void MainWindow::on_supprimer_vente_clicked()
{

    int id=ui->le_id_vehicule->text().toInt();
    bool test=V.supprimer(id);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("supprimer effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel); ui->tab_vente->setModel(V.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("supprimer non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}
void MainWindow::on_tab_vente_clicked(const QModelIndex &index)
{
    int selectedRow = index.row();
       QString id_vehicule = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 0)).toString();
       QString nom_beneficaire = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 1)).toString();
       QString type = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 2)).toString();
       QString model = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 3)).toString();
       QString num_chassis = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 4)).toString();
       QString prix_vente = ui->tab_vente->model()->data(ui->tab_vente->model()->index(selectedRow, 5)).toString();


       // Populate line edit widgets with the selected data
       ui->le_id_vehicule->setText(id_vehicule);
       ui->le_nom_beneficiaire->setText(nom_beneficaire);
       ui->le_type->setText(type);
       ui->le_model->setText(model);
       ui->le_num_chassis->setText(num_chassis);
       ui->le_prix_vente->setText(prix_vente);

}



//Facture
void MainWindow::showEvent(QShowEvent *event) {
    QMainWindow::showEvent(event);

    ui->table_facture->setModel(f.afficher());
}
void MainWindow::on_ASC_facture_clicked()
{
    QPixmap pixmap("‪C:/Users/21658/Desktop/qrcode.jpg");
    Facture f;
     QString typee="";

     if(ui->ASC->isChecked())
         typee="ASC";
     else if(ui->DESC->isChecked())
         typee="DESC";

     qDebug()<<ui->comboBox1_facture->currentText();

     if(ui->comboBox1_facture->currentText() != "choisir"){
         ui->table_facture->setModel(f.tri(ui->comboBox1_facture->currentText(),typee));
         //ui->table->setModel(ui->tableView->model());
     }
       else {
         ui->table_facture->setModel(f.afficher());
         ui->table_fact->setModel(f.afficher());
}
}
void MainWindow::on_DESC_facture_clicked()
{
    Facture f;
     QString typee="";

     if(ui->ASC->isChecked())
         typee="ASC";
     else if(ui->DESC->isChecked())
         typee="DESC";

     if(ui->comboBox1_facture->currentText() != "choisir")
         ui->table_facture->setModel(f.tri(ui->comboBox1_facture->currentText(),typee));

     else  ui->table_facture->setModel(f.afficher());
     ui->table_fact->setModel(f.afficher());
}
void MainWindow::on_buttonajout_facture_clicked()
{
   int ID_facture=ui->ID_facture->text().toInt();
   QDate Date_Facture=ui->dateEdit_facture->date();
   QString Client=ui->client_facture->text();
   QString Paiement=ui->payement_facture->text();
   float montant=ui->montant_facture->text().toFloat();


Facture F(ID_facture,Date_Facture,Paiement,Client,montant);
bool test = F.ajouter();
if(test)
{


    QMessageBox::information(this,QObject::tr("ok"),
    QObject::tr("Ajout effectuée\nClick OK to exit."),QMessageBox::Ok);
}

else
{
QMessageBox::information(this, tr("Not OK"), tr("Ajout was not successful. Click OK to exit."), QMessageBox::Ok);
}
ui->table_facture->setModel(f.afficher());
QLayoutItem* item;
    while ((item = ui->verticalLayout->takeAt(0)) != nullptr) {
        QWidget* widget = item->widget();
        if (widget) {
            delete widget;  // delete the widget
        }
        delete item;  // delete the layout item
    }
ui->verticalLayout->addWidget(f.stat_factures());
}
void MainWindow::on_button_sup_facture_clicked()
{
    Facture F;
       int REFERENCE_Facture_to_delete = ui->ID_facture->text().toInt();
       bool test = F.supprimer(REFERENCE_Facture_to_delete);
       if(test)
       {
           QMessageBox::information(this,QObject::tr("ok"),
           QObject::tr("suppression effectuée\nClick OK to exit."),QMessageBox::Ok);
       }

       else
       {
       QMessageBox::information(this, tr("Not OK"), tr("Deletion was not successful. Click OK to exit."), QMessageBox::Ok);
}
       ui->table_facture->setModel(f.afficher());
       ui->table_fact->setModel(f.afficher());
       QLayoutItem* item;
           while ((item = ui->verticalLayout->takeAt(0)) != nullptr) {
               QWidget* widget = item->widget();
               if (widget) {
                   delete widget;  // delete the widget
               }
               delete item;  // delete the layout item
           }
       ui->verticalLayout->addWidget(f.stat_factures());
}
void MainWindow::on_buttonajout_3_facture_clicked()
{
    int ID_facture=ui->ID_facture->text().toInt();
    QDate Date_Facture=ui->dateEdit_facture->date();
    QString Client=ui->client_facture->text();
    QString Paiement=ui->payement_facture->text();
    float montant=ui->montant_facture->text().toFloat();
 Facture F(ID_facture,Date_Facture,Client,Paiement,montant);
 if(F.modifier(F.getID_facture())){
     QMessageBox::information(this,QObject::tr("ok"),
     QObject::tr("Modification effectuée\nClick OK to exit."),QMessageBox::Ok);
 }
 else
     QMessageBox::information(this, tr("Not OK"), tr("Modification was not successful. Click OK to exit."), QMessageBox::Ok);
 QLayoutItem* item;
     while ((item = ui->verticalLayout->takeAt(0)) != nullptr) {
         QWidget* widget = item->widget();
         if (widget) {
             delete widget;  // delete the widget
         }
         delete item;  // delete the layout item
     }
     ui->verticalLayout->addWidget(f.stat_factures());
     ui->table_facture->setModel(f.afficher());
     ui->table_fact->setModel(f.afficher());
}
void MainWindow::on_rechercher_2_facture_clicked()
{
    Facture p;
    QString choix=ui->comboBox_facture->currentText();
    qDebug()<<"Hello";

    if (choix=="ID_facture")
    {
        QString ID_facture= ui->rech->text();
        ui->table_fact->setModel(p.rechercher(ID_facture));
        qDebug()<<"Hello";
    }
    if (choix=="Date_facture")
    {
        QDate Date_facture = ui->dateEdit_2->date();
        ui->table_fact->setModel(p.rechercherdate(Date_facture));
    }
}
void MainWindow::on_PDF_facture_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Exporter le tableau au format PDF", "", "Fichiers PDF (*.pdf)");

        if (filePath.isEmpty())
        {
            path=filePath;
            return;
        }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(filePath);
        printer.setPageSize(QPrinter::A2);

        QPainter painter(&printer);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setRenderHint(QPainter::TextAntialiasing);
        painter.setRenderHint(QPainter::HighQualityAntialiasing);
        painter.setRenderHint(QPainter::SmoothPixmapTransform);

        QAbstractItemModel* originalModel = ui->table_facture->model();
        QString originalStylesheet = ui->table_facture->styleSheet();
        QSize originalSize = ui->table_facture->size();

        QStandardItemModel model;
        model.setHorizontalHeaderLabels({"id", "mark", "registration_sign", "colour", "date_of_purchase"});

        int rowCount = originalModel->rowCount();
        int columnCount = originalModel->columnCount();
        for (int row = 0; row < rowCount; ++row)
        {
            QList<QStandardItem*> rowData;
            for (int col = 0; col < columnCount; ++col)
            {
                QStandardItem* item;

                // Extracting data from the original model
                if (col == 4) // Assuming the date_of_purchase is in the 5th column (0-based index)
                {
                    QDateTime date = originalModel->data(originalModel->index(row, col)).toDateTime();
                    QString dateString = date.toString("yyyy-MM-dd"); // Customize the date format as needed
                    item = new QStandardItem(dateString);
                }
                else
                {
                    item = new QStandardItem(originalModel->data(originalModel->index(row, col)).toString());
                }

                rowData.append(item);
            }
            model.appendRow(rowData);
        }

        ui->table_facture->setModel(&model);
        ui->table_facture->resizeColumnsToContents(); // Resize columns to fit content

        ui->table_facture->resize(printer.width(), printer.height());

        ui->table_facture->render(&painter);

        ui->table_facture->setModel(originalModel);
        ui->table_facture->setStyleSheet(originalStylesheet);
        ui->table_facture->resize(originalSize);
}
void MainWindow::on_table_facture_clicked(const QModelIndex &index)
{
    int i;
        QString qrCode;
    i=index.row();
    QModelIndex in=index.sibling(i,0);
    QString val=ui->table_facture->model()->data(in).toString();


        QSqlQuery qry;
        qry.prepare("select ID_facture,DATE_FACTURE,PAIEMENT,CLIENT,MONTANT from Facture where ID_Facture='" +val+ "' " );


        if(qry.exec())
        {
            while(qry.next())
            {
                        ui->ID_facture->setText(qry.value(0).toString());
                        ui->dateEdit_facture->setDate(qry.value(1).toDate());
                        ui->client_facture->setText(qry.value(2).toString());
                        ui->payement_facture->setText(qry.value(3).toString());
                        ui->montant_facture->setText(qry.value(4).toString());

                        qrCode = "ID_FACTURE: " + qry.value(0).toString() +
                                     " | DATE_FACTURE: " + qry.value(1).toDate().toString("dd-MM-yyyy") +
                                     " | CLIENT: " + qry.value(2).toString() +
                                     " | Paiement: " + qry.value(3).toString() +
                                     " | MONTANT: " + qry.value(4).toString();

                        qDebug() << "Generated QR Code: " << qrCode;
                      // "select from Facture";

                    }
                }

    //

       //QR CODE
        using namespace QrCodegen;
        // Create the QR Code object
          QrCode qr = QrCode::encodeText( qrCode.toUtf8().data(), QrCode::Ecc::MEDIUM );
          // Obtenir la taille du QR Code
          qint32 sz = qr.getSize();
          // Créer une image avec la taille du QR Code
          QImage im(sz,sz, QImage::Format_RGB32);

          QRgb black = qRgb(  0,  0,  0);
          QRgb white = qRgb(255,255,255);
       for (int y = 0; y < sz; y++)
            for (int x = 0; x < sz; x++)
                 im.setPixel(x,y,qr.getModule(x, y) ? black : white );
       // Afficher l'image du QR Code dans un QLabel
       ui->label_3->setPixmap(QPixmap::fromImage(im.scaled(150, 150, Qt::KeepAspectRatio, Qt::FastTransformation), Qt::MonoOnly));
       qDebug() << "QR Code Image Size: " << im.size();
       qDebug() << "QR Code Pixmap Set.";
}
void MainWindow::on_mensuelle_facture_clicked()
{
    bool ok;
        int year = QInputDialog::getInt(this, tr("Enter Year"), tr("Year:"), 2023, 1900, 2100, 1, &ok);
        if (!ok) return;  // User canceled input

        int month = QInputDialog::getInt(this, tr("Enter Month"), tr("Month:"), 1, 1, 12, 1, &ok);
        if (!ok) return;  // User canceled input

        Facture facture;
        double monthlyGain = facture.calculateMonthlyGain(year, month);

        // Display or use the monthlyGain value as needed
        qDebug() << "Monthly Gain for " << QDate(year, month, 1).toString("MMMM yyyy") << ": " << monthlyGain;

        int rowCount = ui->gain->rowCount();
        ui->gain->insertRow(rowCount);

        QTableWidgetItem *itemDate = new QTableWidgetItem(QDate(year, month, 1).toString("MMMM yyyy"));
        QTableWidgetItem *itemGain = new QTableWidgetItem(QString::number(monthlyGain));

        ui->gain->setItem(rowCount, 0, itemDate);
        ui->gain->setItem(rowCount, 1, itemGain);
}
void MainWindow::on_anuelle_facture_clicked()
{
    bool ok;
       int year = QInputDialog::getInt(this, tr("Enter Year"), tr("Year:"), 2023, 1900, 2100, 1, &ok);
       if (!ok) return;  // User canceled input

       Facture facture;
       double annualgain = facture.calculateAnnualGain(year);

        qDebug() << "Annual Gain for " << year << ": " << annualgain;
       int rowCount = ui->gain->rowCount();
           ui->gain->insertRow(rowCount);

           QTableWidgetItem *itemYear = new QTableWidgetItem(QString::number(year));
           QTableWidgetItem *itemGain = new QTableWidgetItem(QString::number(annualgain));

           ui->gain->setItem(rowCount, 0, itemYear);
           ui->gain->setItem(rowCount, 1, itemGain);
}
void MainWindow::on_pushButton_disconnect_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::on_tab_facture_clicked(const QModelIndex &index)
{
    int selectedRow = index.row();
       QString id_facture = ui->table_facture->model()->data(ui->table_facture->model()->index(selectedRow, 0)).toString();
       QString client_facture = ui->table_facture->model()->data(ui->table_facture->model()->index(selectedRow, 2)).toString();
       QString payement_facture = ui->table_facture->model()->data(ui->table_facture->model()->index(selectedRow, 3)).toString();
       QString montant_facture = ui->table_facture->model()->data(ui->table_facture->model()->index(selectedRow, 4)).toString();


       // Populate line edit widgets with the selected data
       ui->ID_facture->setText(id_facture);
       ui->client_facture->setText(client_facture);
       ui->payement_facture->setText(payement_facture);
       ui->montant_facture->setText(montant_facture);
}


//Trajet
void MainWindow::on_pb_ajouter_trajet_clicked()
{
    Notification N,N1;
    int id_trajet = ui->id_trajet->text().toInt();
    int temps = ui->temps_trajet->text().toInt(); // changer le type de la variable

    // Déterminez si c'est "plus50" ou "moins50"
    QString type_temps = (temps > 50) ? "plus50" : "moins50";

    double distance = ui->distance_trajet->text().toDouble();
    QString emplacement = ui->emplacement_trajet->text();
    Trajets T(id_trajet, type_temps, distance, emplacement);
    double montant_tot = 200 * distance;

    bool test = T.ajouter();

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"),
            QObject::tr("Ajout effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
        QMessageBox::information(nullptr, QObject::tr("Montant Totale"),
            QObject::tr("prix=") + QString::number(montant_tot, 'f', 2), QMessageBox::Cancel);
        ui->tab_trajet->setModel(T.afficher());
    } else {
        QMessageBox::critical(nullptr, QObject::tr(" not ok"),
            QObject::tr("Ajout non effectué.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);
    }
    if(distance> 0 and temps >0)
    {
        N.showNotification();
    }
    else
    {
     N1.showNotification1();
    }
}
void MainWindow::on_supp_trajet_clicked()
{
    Trajets T1;
    T1.setid_trajet(ui->id_trajet->text().toInt());
    bool test=T1.supprimer(T1.getid_trajet());
    QMessageBox msgBox;

    if(test){
        {
              QMessageBox::information(nullptr, QObject::tr("OK"),
                          QObject::tr("Suppression effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                          QObject::tr("Suppression non effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        }
    ui->tab_trajet->setModel(T.afficher());
}
void MainWindow::on_modifier_trajet_clicked()
{
    Notification N ,N1;
    int newid =ui->id_trajet->text().toInt();
        QString newtemps=ui->temps_trajet->text();
        double newdistance=ui->distance_trajet->text().toDouble();
        QString newemplacement=ui->emplacement_trajet->text();

        Trajets T(newid,newtemps,newdistance,newemplacement);
        double montant_tot= 200*newdistance;
        bool test=T.modifier();
        if(test){
            QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
            QMessageBox::information(nullptr, QObject::tr("Montant Totale"),
            QObject::tr("prix=") + QString::number(montant_tot, 'f', 2)
                        , QMessageBox::Cancel);
            ui->tab_trajet->setModel(T.afficher());
        }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);
        }
        if(newdistance > 0 and newtemps >0)
        {
            N.showNotification();
        }
        else
        {
        N1.showNotification1();
        }
}
void MainWindow::on_exporter_trajet_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "Fichiers PDF (*.pdf)");
    if (!fileName.isEmpty()) {
        Trajets T;
        QSqlQueryModel* mod = T.afficher();
        if (T.exporterPDF(fileName, mod)) {
            QMessageBox::information(this, "Exportation PDF", "Les données ont été exportées en PDF avec succès !");
        } else {
            QMessageBox::warning(this, "Exportation PDF", "Échec de l'exportation en PDF.");
        }
    }
}
void MainWindow::on_recherche_trajet_2_clicked()
{
    Trajets T;

          int id_trajet = ui->id_trajet->text().toInt();

          QSqlQueryModel* res = T.recherche(id_trajet);

          if (res->rowCount() > 0) {

              QMessageBox::information(nullptr, QObject::tr("Recherche"),
                                       QObject::tr("trajet existant."), QMessageBox::Ok);
          } else {
              QMessageBox::information(nullptr, QObject::tr("Recherche"),
                                       QObject::tr("Aucun résultat trouvé pour cet email."), QMessageBox::Ok);
          }

}
void MainWindow::on_tri_2_trajet_2_clicked()
{
    Trajets T;
    QSqlQueryModel* result = T.tri();
       ui->tab_trajet->setModel(result);
}
void MainWindow::on_stat_3_trajet_2_clicked()
{
    QSqlQueryModel *model = T.afficher();

    if (!model) {
        qDebug() << "Error: QSqlQueryModel is null.";
        return;
    }

    int rowCount = model->rowCount();
    int plus50 = 0;
    int moins50 = 0;

    int tempsColumnIndex = model->record().indexOf("temps");

    // Count plus50 and moins50 entries
    for (int row = 0; row < rowCount; ++row) {
        int tempsValue = model->data(model->index(row, tempsColumnIndex)).toInt();

        // Assuming 50 is the threshold, adjust this value as needed
        if (tempsValue >= 50) {
            plus50++;
        } else {
            moins50++;
        }
    }

    // Calculate percentages
    double pourcentagePlus50 = (rowCount > 0) ? ((double)plus50 / rowCount) * 100 : 0;
    double pourcentageMoins50 = (rowCount > 0) ? ((double)moins50 / rowCount) * 100 : 0;

    // Create QPieSeries
    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();

    // Add slices
    if (pourcentagePlus50 > 0) {
        QtCharts::QPieSlice *slicePlus50 = new QtCharts::QPieSlice("plus50", pourcentagePlus50);
        slicePlus50->setColor(QColor("#FFA07A")); // Change color to light salmon
        slicePlus50->setLabel(QString("plus50: %1%").arg(pourcentagePlus50));
        series->append(slicePlus50);
    }
/*
        // Add arrow with label above
        QGraphicsSimpleTextItem *labelPlus50 = new QGraphicsSimpleTextItem(
            QString("Plus50: %1%").arg(pourcentagePlus50)
        );
       // labelPlus50->setPos(slicePlus50->labelPosition().toPoint());
        labelPlus50->setZValue(5);  // Place it above the pie chart
        QtCharts::QChart *chart = new QtCharts::QChart();
        QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
        chartView->chart()->scene()->addItem(labelPlus50);
    }
*/
    if (pourcentageMoins50 > 0) {
        QtCharts::QPieSlice *sliceMoins50 = new QtCharts::QPieSlice("moins50", pourcentageMoins50);
        sliceMoins50->setColor(QColor("#87CEFA")); // Change color to light sky blue
        sliceMoins50->setLabel(QString("moins50: %1%").arg(pourcentageMoins50));
        series->append(sliceMoins50);
    }
/*
        // Add arrow with label above
        QGraphicsSimpleTextItem *labelMoins50 = new QGraphicsSimpleTextItem(
            QString("Moins50: %1%").arg(pourcentageMoins50)
        );
      //  labelMoins50->setPos(sliceMoins50->labelPosition().toPoint());
        labelMoins50->setZValue(5);  // Place it above the pie chart
        QtCharts::QChart *chart = new QtCharts::QChart();
        QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
        chartView->chart()->scene()->addItem(labelMoins50);
    }*/

    // Create QChart
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique plus50, moins50");

    // Customize legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Create QChartView
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Add rotation animation
    QPropertyAnimation *animation = new QPropertyAnimation(series, "slicesAngle");
    animation->setStartValue(0.0);
    animation->setEndValue(360.0);
    animation->setDuration(2000); // Animation duration in milliseconds

    // Set chart animation
    chart->setAnimationOptions(QChart::AllAnimations);
    chartView->setChart(chart);

    // Create QDialog
    QDialog *chartDialog = new QDialog(this);
    chartDialog->setFixedSize(800, 600);
    QVBoxLayout *layout = new QVBoxLayout(chartDialog);
    layout->addWidget(chartView);

    // Close button
    QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
    connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::close);
    layout->addWidget(closeButton);

    // Display the window
    chartDialog->exec();

    // Deallocate memory
    delete chartDialog;
}
void MainWindow::on_arduino_trajet_2_clicked()
{
    // Simulate movement detection
           bool movementDetected = true; // Replace this with actual logic

           if (movementDetected) {
               // Get current time
               QDateTime currentDateTime = QDateTime::currentDateTime();
               QString currentTime = currentDateTime.toString("yyyy-MM-dd HH:mm");  // Adjusted the format

               // Save the time to the database
               QSqlQuery query;
               query.prepare("INSERT INTO ButtonClicks (ClickTime) VALUES (TO_DATE(:time, 'YYYY-MM-DD HH24:MI'))");
               query.bindValue(":time", currentTime);

               if (!query.exec()) {
                   qDebug() << "Error: Failed to insert button click time into the database.";
                   qDebug() << "Query error: " << query.lastError().text();
               }

               // Display the time on the label
               //ui->labelTime_trajet_2->setText("Movement Detected at " + currentTime);
               QString messa = "Movement Detected at " + currentTime;
               ui->labelTime_trajet_2->setText(messa);
               ui->labelTime_trajet_2->setTextFormat(Qt::RichText);

               // Start the timer to gradually change the text color and size
               QTimer *timer = new QTimer(this);

               // Define the color list and other parameters
               const int numColors = 5;
               QColor colorList[numColors] = {
                   QColor(52, 152, 219),   // Blue
                   QColor(41, 21, 60),    // Red
                   QColor(240, 20, 241),   // Green
                   QColor(240, 16, 15),   // Yellow
                   QColor(155, 89, 182)    // Purple
               };

               int colorIndex = 0;
               int fontSize = 14;  // Initial font size
               const int maxFontSize = 20;  // Maximum font size

               connect(timer, &QTimer::timeout, this, [=]() mutable {
                   // Set the text color
                   ui->labelTime_trajet_2->setStyleSheet("color: " + colorList[colorIndex].name() + ";");

                   // Set the text size
                   QFont font = ui->labelTime_trajet_2->font();
                   font.setPointSize(fontSize);
                   ui->labelTime_trajet_2->setFont(font);

                   // Increment the color index and wrap around if necessary
                   colorIndex = (colorIndex + 1) % numColors;

                   // Increase the font size for the next iteration, but stop looping if it exceeds the maximum
                   if (fontSize < maxFontSize) {
                       fontSize += 2;
                   }
               });

               // Set the timer interval and start it
               timer->start(300);  // Change color and size every 300 milliseconds
           }
   }
void MainWindow::on_pushButton_disconnect_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_tab_trajet_clicked(const QModelIndex &index)
{
    int selectedRow = index.row();
       QString id_trajet = ui->tab_trajet->model()->data(ui->tab_trajet->model()->index(selectedRow, 0)).toString();
       QString temps_trajet = ui->tab_trajet->model()->data(ui->tab_trajet->model()->index(selectedRow, 1)).toString();
       QString distance_trajet = ui->tab_trajet->model()->data(ui->tab_trajet->model()->index(selectedRow, 2)).toString();
       QString emplacement_trajet = ui->tab_trajet->model()->data(ui->tab_trajet->model()->index(selectedRow, 3)).toString();


       // Populate line edit widgets with the selected data
       ui->id_trajet->setText(id_trajet);
       ui->temps_trajet->setText(temps_trajet);
       ui->distance_trajet->setText(distance_trajet);
       ui->emplacement_trajet->setText(emplacement_trajet);
}



//Reservation

void MainWindow::on_pb_ajouter_reservations_clicked()
{



       QString code_res=ui->le_code_reservations->text();
    QString date_res=ui->le_date_reservations->text();
    QString heure_res=ui->le_heure_reservations->text();
    QDateTime date_resf=ui->le_date_2_reservations->dateTime();
    int Prix=ui->prix_reservations->text().toInt();
    QString CODE_PROMOTION=ui->code_reservations->text();
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->setIcon(QIcon(":/new/prefix1/ajouter.png"));
   notifyIcon->show();

   QSqlQuery query;

       /*query.prepare("SELECT * FROM GS_PROMTION WHERE CODE = :code");

       query.bindValue(":code", CODE_PROMOTION);
       bool queryExecuted = query.exec();

       if (queryExecuted && query.first()) {
           int pourcentage = query.value("POURCENTAGE").toInt();
           qDebug() << "Pourcentage:" << pourcentage;
           Prix =Prix-(pourcentage*Prix/100);

           // Use pourcentage in Reservations constructor or any other operations*/
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
       }


void MainWindow::on_pb_supprimer_reservations_clicked()
{
    int i;
    QModelIndex index=ui->tab_reservation->currentIndex();
i=index.row();
QModelIndex in=index.sibling(i,0);

QString val=ui->tab_reservation->model()->data(in).toString();
    //int id=ui->lineEdit_idsup->text().toInt();


    Reservations R1;
    bool test=R1.supprimer(val);
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



void MainWindow::on_pb_modify_reservations_clicked()
{
            QString newcode_res =ui->le_code_reservations->text();
            QString newdate_res=ui->le_date_reservations->text();
            QString newheure_res=ui->le_heure_reservations->text();
            QDateTime newdate_resf=ui->le_date_2_reservations->dateTime();
            int Prix=ui->prix_reservations->text().toInt();


            Reservations R(newcode_res,newdate_res,newdate_resf,newheure_res,Prix);
            bool test=R.modifier();
            if(test){
                QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
                ui->tab_reservation->setModel(R.afficher());


            }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

            }

}

void MainWindow::on_pushButton_stat_reservations_clicked()
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

void MainWindow::on_pushButton_2_reservations_clicked()
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
        query.prepare("SELECT * FROM RESERVATIONS");
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



void MainWindow::on_pushButton_7_reservations_clicked()
{
    QString CODE=ui->codepromor_reservations->text();
    int POURCENTAGE=ui->POURCENTAGE_reservations->text().toInt();


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

void MainWindow::on_pushButton_8_reservations_clicked()
{
    QString CODE=ui->codepromor_reservations->text();
    int POURCENTAGE=ui->POURCENTAGE_reservations->text().toInt();

    Promotions P(CODE, POURCENTAGE);
    bool test=P.modifier(CODE);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->tab_promo->setModel(P.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifier non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }

}

void MainWindow::on_pushButton_9_reservations_clicked()
{
    Promotions P; P.setCode(ui->codepromor_reservations->text());
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





/*
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
*/


//void MainWindow::checkAndSendDataToArduino()
//{
//   occ=1;
//    QDateTime x = QDateTime::currentDateTime();

//    QString x1 = QString::number(x.date().month());
//    QString x2 = QString::number(x.date().day());
//    QString x3 = QString::number(x.date().year());
//    QString x4 = QString::number(x.time().hour());
//    QString x5 = QString::number(x.time().minute());

//    QSqlQuery query;
//    query.prepare("SELECT DATE_RESF FROM RESERVATIONS WHERE "
//                    "(EXTRACT(DAY FROM CAST(DATE_RESF AS TIMESTAMP))='" + x2 + "' "
//                    "AND EXTRACT(MONTH FROM CAST(DATE_RESF AS TIMESTAMP))='" + x1 + "' "
//                    "AND EXTRACT(YEAR FROM CAST(DATE_RESF AS TIMESTAMP))='" + x3 + "' "
//                    "AND EXTRACT(HOUR FROM CAST(DATE_RESF AS TIMESTAMP))='" + x4 + "' "
//                    "AND EXTRACT(MINUTE FROM CAST(DATE_RESF AS TIMESTAMP))='" + x5 + "')");

//    if (query.exec() && query.next()) {
//        QDateTime dbTime = query.value(0).toDateTime(); // Assuming the time_column is of type QDateTime
//        // Compare times as strings
//        if (x.toString("yyyy-MM-dd hh:mm") == dbTime.toString("yyyy-MM-dd hh:mm")) {
//           QString t = "fin de reservation";
//            qDebug ()<< t;

//            QByteArray tt = t.toUtf8();
//         //   A.write_to_arduino(tt);  //output
//            // Send data to Arduino
//        }

//    }


//}


void MainWindow::on_trie_reservation_currentIndexChanged(const QString &arg1)
{
    Reservations E;

     ui->tab_reservation->setModel(E.trierReservation(arg1));
}

void MainWindow::on_search_reservation_textChanged(const QString &arg1)
{
    Reservations E;
    if(arg1!="")
    {
         ui->tab_reservation->setModel(E.rechercherReservation(arg1));
    }else

ui->tab_reservation->setModel(R.afficher());
}

void MainWindow::on_tab_reservation_clicked(const QModelIndex &index)
{

    int i;
i=index.row();
QModelIndex in=index.sibling(i,0);
QString val=ui->tab_reservation->model()->data(in).toString();


    QSqlQuery qry;
    qry.prepare("select * from RESERVATIONS where code_res='"+val+"' " );


    if(qry.exec())
    {
        while(qry.next())
        {
            ui->le_code_reservations->setText(qry.value(0).toString());
            ui->le_date_reservations->setDate(qry.value(1).toDate());
            ui->le_heure_reservations->setTime(qry.value(2).toTime());
            ui->le_date_2_reservations->setDateTime(qry.value(4).toDateTime());
    ui->prix_reservations->setText(qry.value(3).toString());


        }
}
}








bool MainWindow::controlSaisie()
{
    // Check if any of the required fields is empty
    if (ui->NM_CHASSIS->text().isEmpty() ||
        ui->DATE_CIR->selectedDate().isNull() ||
        ui->TYPE->currentText().isEmpty() ||
        ui->MODELE->currentText().isEmpty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void MainWindow::on_ajouter_employe_clicked()
{
    QMessageBox msgBox;

    if (controlSaisie())
    {
        int NM_CHASSIS = ui->NM_CHASSIS->text().toInt();

        // Check if a record with the specified NM_CHASSIS already exists
        QSqlQueryModel* existingRecord = fl.findByNM_CHASSIS(NM_CHASSIS);

        if (existingRecord->rowCount() > 0) {
            // Record with the specified NM_CHASSIS already exists
            QMessageBox::warning(nullptr, QObject::tr("Duplicate NM_CHASSIS"),
                                 QObject::tr("A record with the specified NM_CHASSIS already exists."),
                                 QMessageBox::Cancel);
        } else {
            // Record with the specified NM_CHASSIS does not exist, proceed to add
            QDate DATE_CIR = ui->DATE_CIR->selectedDate();
            QString TYPE = ui->TYPE->currentText();
            QString MODELE = ui->MODELE->currentText();

            // Create an instance of the 'GESTION_DE_FLOTTE' class
            flotee newFlotee(NM_CHASSIS, DATE_CIR, TYPE, MODELE);

            // Attempt to add the new record to the database
            bool test = newFlotee.ADD();

            if (test)
            {
                msgBox.setText("Added successfully.");
            }
            else
            {
                msgBox.setText("Addition failed!!");
            }

            msgBox.exec();

            // Update the table with the latest data
            ui->table_flotee->setModel(fl.GETALL());
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Please fill all fields. There are EMPTY or INCORRECT fields."),
                              QMessageBox::Cancel);
    }
}

void MainWindow::on_modifier_employe_clicked()
{
    if (controlSaisie())
    {
        int NM_CHASSIS = ui->NM_CHASSIS->text().toInt();

        // Check if a record with the specified NM_CHASSIS exists
        QSqlQueryModel* existingRecord = fl.findByNM_CHASSIS(NM_CHASSIS);

        if (existingRecord->rowCount() == 0) {
            // Record with the specified NM_CHASSIS does not exist
            QMessageBox::warning(nullptr, QObject::tr("Record Not Found"),
                                 QObject::tr("A record with the specified NM_CHASSIS does not exist."),
                                 QMessageBox::Cancel);
        } else {
            // Record with the specified NM_CHASSIS exists, proceed to modify
            QDate DATE_CIR = ui->DATE_CIR->selectedDate();
            QString TYPE = ui->TYPE->currentText();
            QString MODELE = ui->MODELE->currentText();

            // Create an instance of the 'GESTION_DE_FLOTTE' class
            flotee modifiedFlotee(NM_CHASSIS, DATE_CIR, TYPE, MODELE);

            // Attempt to update the record in the database
            bool test = modifiedFlotee.UPDATE();

            QMessageBox msgBox;

            if (test)
            {
                // Update the table with the latest data
                ui->table_flotee->setModel(fl.GETALL());
                msgBox.setText("Modification successful.");
            }
            else
            {
                msgBox.setText("Modification failed!!");
            }

            msgBox.exec();
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Please fill all fields. There are EMPTY or INCORRECT fields."),
                              QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_supprimer_clicked()
{

    int i;
    QModelIndex index=ui->table_flotee->currentIndex();
i=index.row();
QModelIndex in=index.sibling(i,0);

int NM_CHASSIS=ui->table_flotee->model()->data(in).toInt();








    // Check if a record with the specified NM_CHASSIS exists
    QSqlQueryModel* existingRecord = fl.findByNM_CHASSIS(NM_CHASSIS);

    if (existingRecord->rowCount() == 0) {
        // Record with the specified NM_CHASSIS does not exist
        QMessageBox::warning(nullptr, QObject::tr("Record Not Found"),
                             QObject::tr("A record with the specified NM_CHASSIS does not exist."),
                             QMessageBox::Cancel);
    } else {
        // Record with the specified NM_CHASSIS exists, proceed to delete
        flotee fl;
        fl.set_NM_CHASSIS(NM_CHASSIS);

        // Get the data to be deleted
        QString deletedData = QString("%1,%2,%3,%4\n")
                                  .arg(NM_CHASSIS)
                                  .arg(existingRecord->record(0).value("DATE_CIR").toString())
                                  .arg(existingRecord->record(0).value("TYPE").toString())
                                  .arg(existingRecord->record(0).value("MODELE").toString());

        // Append the data to a .txt file
        QFile file("deleted_data.txt");
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << deletedData;
            file.close();
        }

        // Proceed with deletion
        bool test = fl.DELETEE(fl.get_NM_CHASSIS());
        QMessageBox msgBox;

        if (test)
        {
            msgBox.setText("Deletion successful.");

            // Display a button to open the file
            QPushButton *openFileButton = new QPushButton("Open Deleted Data File", this);
            openFileButton->setGeometry(10, 10, 200, 30);
            connect(openFileButton, &QPushButton::clicked, [this]() {
                QDesktopServices::openUrl(QUrl::fromLocalFile("deleted_data.txt"));
            });
            openFileButton->show();

            ui->table_flotee->setModel(fl.GETALL());
        }
        else
        {
            msgBox.setText("!! Deletion failed !!");
        }

        msgBox.exec();
    }
}

void MainWindow::on_table_flotee_activated(const QModelIndex &index)
{
    ui-> table_flotee->setModel(fl.GETALL());

}

void MainWindow::on_pb_supprimer_2_clicked()
{
    QChartView *chartView = fl.stat();
        chartView->show();
}

void MainWindow::on_recherhce_id_textChanged(const QString &arg1)
{
     ui->table_flotee->setModel(fl.rechercherParNM_CHASSIS(arg1.toInt()));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString nmChassis = ui->recherhce_id->text();

    if (nmChassis.isEmpty()) {
        // Add a control to check if NM_CHASSIS is empty
        QMessageBox::warning(this, "Empty NM_CHASSIS", "Please enter NM_CHASSIS before generating the PDF.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM GESTION_DE_FLOTTE WHERE NM_CHASSIS = :nmChassis");
    query.bindValue(":nmChassis", nmChassis);

    if (query.exec())
    {
        if (query.next())
        {
            QPdfWriter pdfWriter("flotte.pdf");
            QPainter painter(&pdfWriter);
            QTextDocument doc;

            QString report = "<p style='font-size:250pt;'>Fiche technique de la flotte :</p>";

            // Retrieve values from the query result
            QString dateCir = query.value("DATE_CIR").toDate().toString("yyyy-MM-dd");
            QString type = query.value("TYPE").toString();
            QString modele = query.value("MODELE").toString();

            // Add attributes to the report
            report += "<p style='font-size:250pt;'>><strong>NM_CHASSIS:</strong> " + nmChassis + "</p>";
            report += "<p style='font-size:250pt;'>><strong>DATE_CIR:</strong> " + dateCir + "</p>";
            report += "<p style='font-size:250pt;'>><strong>TYPE:</strong> " + type + "</p>";
            report += "<p style='font-size:250pt;'>><strong>MODELE:</strong> " + modele + "</p>";

            doc.setHtml(report);
            doc.drawContents(&painter);

            // Add a button to open the PDF
            QPushButton *openPdfButton = new QPushButton("Open PDF", this);
            openPdfButton->setGeometry(10, 10, 100, 30);
            connect(openPdfButton, &QPushButton::clicked, [this]() {
                QDesktopServices::openUrl(QUrl::fromLocalFile("flotte.pdf"));
            });

            // Ensure the button is visible
            openPdfButton->show();
        }
        else
        {
            // Add a control to handle the case when no record is found
            QMessageBox::warning(this, "No Record Found", "No record found with the specified NM_CHASSIS.");
        }
    }
    else
    {
        qDebug() << "Error querying GESTION_DE_FLOTTE table: " << query.lastError();
    }
}

void MainWindow::on_asc_clicked()
{
    if(ui->triebox->currentText() != "Choisir")
        ui-> table_flotee->setModel(fl.trie("ASC", ui->triebox->currentText()));
   else
        ui-> table_flotee->setModel(fl.GETALL());
}

void MainWindow::on_deso_clicked()
{
    if(ui->triebox->currentText() != "Choisir")
        ui-> table_flotee->setModel(fl.trie("DESC", ui->triebox->currentText()));
   else
        ui-> table_flotee->setModel(fl.GETALL());
}

void MainWindow::on_table_flotee_clicked(const QModelIndex &index)
{
    int i;
i=index.row();
QModelIndex in=index.sibling(i,0);
QString val=ui->table_flotee->model()->data(in).toString();


    QSqlQuery qry;
    qry.prepare("select * from GESTION_DE_FLOTTE where NM_CHASSIS='"+val+"' " );


    if(qry.exec())
    {
        while(qry.next())
        {
            ui->NM_CHASSIS->setText(qry.value(0).toString());
            ui->DATE_CIR->setSelectedDate(qry.value(1).toDate());
            ui->TYPE->setCurrentText(qry.value(2).toString());
            ui->MODELE->setCurrentText(qry.value(3).toString());


        }
}
}
