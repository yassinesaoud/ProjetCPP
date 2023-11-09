#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "facture.h"
#include "iostream"
#include <QMessageBox>
#include <QIntValidator>
#include <QObject>
#include <QtDebug>
#include <QTabWidget>
#include<QSqlQuery>
#include <QDate>
#include <QDateEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Facture f;
    ui->setupUi(this);
    //QPixmap image("DESKTOP\\pic1.png"); // Replace with the path to your image
    //ui->label->setPixmap(image);
    //ui->tableView->setModel(f.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
    //ui->tableView->setModel(f.afficher());

}

void MainWindow::showEvent(QShowEvent *event) {
    QMainWindow::showEvent(event);

    ui->tableView->setModel(f.afficher());
}


void MainWindow::on_buttonajout_clicked()
{
   int ID_facture=ui->ID->text().toInt();
   QString Date_Facture=ui->date->text();
   QString Client=ui->client->text();
   QString Paiement=ui->payement->text();


Facture F(ID_facture,Date_Facture,Paiement,Client);
if(F.ajouter()){
    std::cout<<"Facture Ajoutee"<<std::endl;

}
else
    std::cout<<"Facture non Ajoutee"<<std::endl;

ui->tableView->setModel(f.afficher());
}


void MainWindow::on_button_sup_clicked()
{
    Facture F;
       int REFERENCE_Facture_to_delete = ui->ID_4->text().toInt();
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
       ui->tableView->setModel(f.afficher());
}

void MainWindow::on_buttonajout_3_clicked()
{
    int ID_facture=ui->ID_10->text().toInt();
    QString Date_Facture=ui->date_6->text();
    QString Client=ui->client_6->text();
    QString Paiement=ui->payement_6->text();


 Facture F(ID_facture,Date_Facture,Client,Paiement);
 if(F.modifier(F.getID_facture())){
     std::cout<<"Facture modifiée"<<std::endl;

 }
 else
     std::cout<<"Facture non modifiée"<<std::endl;

 ui->tableView->setModel(f.afficher());

}
