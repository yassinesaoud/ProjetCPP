#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservations.h"
#include<QString>
#include <QtDebug>
#include<QSqlQuery>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_code->setValidator(new QIntValidator(100, 9999999, this));
    ui->tab_reservation->setModel(R.afficher());

    Reservations R; // Crée une instance de la classe Reservations

    // Assurez-vous que la connexion à la base de données est ouverte avec succès
    QSqlDatabase db = QSqlDatabase::database(); // Récupère l'objet de la base de données
    bool database_opened_successfully = db.isOpen();

    if (database_opened_successfully) {
        ui->tab_reservation->setModel(R.afficher());
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
    QString code_res=ui->le_newcode_res->text();
    QString date_res=ui->le_newdate_res->text();
    QString heure_res=ui->le_newheure_res->text();
    Reservations r(code_res,date_res,heure_res);
    bool test=r.modifier();
    if(test)
    {
        QMessageBox ::information(nullptr,QObject::tr("ok"),
                QObject::tr("Reservation modified successfully.\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);
        ui->tab_reservation->setModel(R.afficher());
    }
    else
        QMessageBox ::critical(nullptr,QObject::tr("ok"),
                QObject::tr("Failed to modify reservation.q\n"
                            "clickcancel to exist ."),QMessageBox::Cancel);

}
