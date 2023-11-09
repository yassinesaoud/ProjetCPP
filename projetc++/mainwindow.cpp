#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ventevehicule.h"
#include <QIntValidator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->le_id_vehicule->setValidator(new QIntValidator(0, 999999, this));
     ui->tab_vente->setModel(V.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
    int id_vehicule=ui->le_id_vehicule->text().toInt();
    QString nom_beneficaire=ui->le_nom_beneficiaire->text();
    QString type=ui->le_type->text();
    QString model=ui->le_model->text();
    int num_chassis=ui->le_type->text().toInt();
    double prix_vente=ui->le_prix_vente->text().toDouble();
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
      /*ui->le_tab->setModel(v.afficher());
      ui->comboBox->setModel(v.tester());
      ui->comboBox_2->setModel(v.tester());*/
      }


void MainWindow::on_pb_supprimer_clicked()
{
  Ventevehicule V1; V1.setid_vehicule(ui->le_id_supp->text().toInt());
  bool test=V1.supprimer(V1.getid_vehicule());
  if(test)
  {
      QMessageBox::information(nullptr, QObject::tr("OK"),
                  QObject::tr("Suppression effectué.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
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
           int newid_vehicule=ui->id_modif->text().toInt();
            QString newNOM_BENEFICAIRE=ui->beni_modif->text();
            QString newtype=ui->type_modif->text();
            QString newmodel=ui->model_modif->text();
            int newnum_chassis=ui->num_modif->text().toInt();
            double newprix_vente=ui->prix_modif->text().toDouble();
            Ventevehicule V(newid_vehicule,newNOM_BENEFICAIRE,newtype,newmodel,newnum_chassis,newprix_vente);
            bool test=V.modifier();
            if(test){
                QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("modifier effectue\n""Clicke Cancel to exite"), QMessageBox::Cancel);
                ui->tab_vente->setModel(V.afficher());


            }else{ QMessageBox::critical(nullptr , QObject::tr("Not Ok "),QObject::tr("modifize non effectie.\n""click cancel  ."),QMessageBox::Cancel);

            }
}
