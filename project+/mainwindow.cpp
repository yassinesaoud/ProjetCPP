#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trajets.h"
#include <QMessageBox>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->id_trajet->setValidator(new QIntValidator(0,9999999,this));
    ui->tab_trajet->setModel(T.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
    int id_trajet=ui->id_trajet->text().toInt();
    QString temps=ui->temps->text();
    double distance = ui->distance->text().toDouble();
    QString emplacement=ui->emplacement->text();
    float prix=ui->prix->text().toFloat();
    Trajets T(id_trajet,temps,distance,emplacement,prix);

        bool test=T.ajouter();

        if(test)
        {
            {QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Ajout effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tab_trajet->setModel(T.afficher());}

        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                        QObject::tr("Ajout non effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }



/****/

void MainWindow::on_supp_clicked()
{
    Trajets T1;T1.setid_trajet(ui->le_id_supp->text().toInt());
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

}

void MainWindow::on_modifier_clicked()
{
    int newid =ui->id_modif->text().toInt();
        QString newtemps=ui->temps_modif->text();
        double newdistance=ui->distance_modif->text().toDouble();
        QString newemplacement=ui->emplacement_modif->text();
        float newprix=ui->prix_modif->text().toFloat();
        Trajets T(newid,newtemps,newdistance,newemplacement,newprix);
        bool test=T.modifier();
        if(test){
            QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
            ui->tab_trajet->setModel(T.afficher());


        }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

        }
}
