#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>
#include<QObject>
#include "employe.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     ui->lineEdit_cin->setValidator(new QIntValidator(0,9999999,this));//cs
     ui->lineEdit_cin_modif->setValidator(new QIntValidator(0,9999999,this));//cs
     ui->table_employe->setModel(e.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    int cin =ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    int age=ui->lineEdit_age->text().toInt();
    QString sante=ui->lineEdit_sante->text();
    employe e(cin,nom,prenom,age,sante);
    bool test=e.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Ajout effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("ajouter non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_supp_clicked()
{
    int id=ui->lineEdit_cin_supp->text().toInt();
    bool test=e.supprimer(id);
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("supprimer effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel); ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("supprimer non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}
void MainWindow::on_pushButton_modifier_clicked()
{
    int newcin =ui->lineEdit_cin_modif->text().toInt();
    QString newnom=ui->lineEdit_nom_modif->text();
    QString newprenom=ui->lineEdit_prenom_modif->text();
    int newage=ui->lineEdit_age_modif->text().toInt();
    QString newsante=ui->lineEdit_sante_modif->text();
    employe E(newcin,newnom,newprenom,newage,newsante);
    bool test=E.modifier();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->table_employe->setModel(e.afficher());


    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }
}

void MainWindow::on_pushButton_chercher_clicked()
{
    int id=ui->lineEdit_cin_chercher->text().toInt();
    bool test=E.chercher(id);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("chercher effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
        ui->table_employe_chercher->setModel(e.rechercher());
    }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("chercher non effectie.\n""click cancel  ."),QMessageBox::Cancel);

    }

}
