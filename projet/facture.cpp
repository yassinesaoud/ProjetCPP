#include "facture.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include<QString>
#include <QSqlQueryModel>
#include<QDate>
#include<QDateTime>
Facture::Facture()
{
ID_facture=0;Date_Facture="";Client="";Paiement="";
}
Facture::Facture(int ID_facture,QString Date_Facture,QString Client,QString Paiement){
    this->ID_facture=ID_facture;this->Date_Facture=Date_Facture;this->Client=Client;this->Paiement=Paiement;}
int Facture::getID_facture(){return ID_facture;}
QString Facture::getDate_Facture(){return Date_Facture;}
QString Facture::getClient(){return Client;}
QString Facture::getPaiement(){return  Paiement;}
void Facture::setID_facture(int ID_facture){this->ID_facture=ID_facture;}
void Facture::getDate_Facture(QString Date_Facture){this->Date_Facture=Date_Facture;}
void Facture::getClient(QString Client){this->Client=Client;}
void Facture::getPaiement(QString Paiement){this->Paiement=Paiement;}
bool Facture::ajouter(){
    bool test=false;
    QSqlQuery query;
    QString ID=QString::number(ID_facture);
         query.prepare("INSERT INTO Facture (ID_facture,Date_facture,Paiement,Client) "
                       "VALUES (:id, :date, :client,:paiement)");
         query.bindValue(":id", ID);
         query.bindValue(":date", Date_Facture);
         query.bindValue(":paiement",Paiement);
         query.bindValue(":client",Client );

         if(query.exec()){
             test=true;
         }
         else{
             qDebug()<<"ERROR"<<query.lastError().text();
         }
    return test;
}

bool Facture::supprimer(int ID_facture)
{
    QSqlQuery query;
        query.prepare("SELECT * FROM Facture WHERE ID_facture = :ID_facture");
        query.bindValue(":ID_facture",ID_facture);

        if (query.exec() && query.next()) {
            query.prepare("DELETE FROM Facture WHERE ID_facture = :ID_facture");
            query.bindValue(":ID_facture",ID_facture);
            if (query.exec()) {
                return true; // Deletion was successful
            } else {
                qDebug() << "Error during deletion:" << query.lastError().text();
                return false;
            }
        } else {
            return false;
        }
    }
QSqlQueryModel* Facture ::afficher()
{

  QSqlQueryModel* model=new QSqlQueryModel();


     model->setQuery("SELECT * FROM facture");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_facture"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date_Facture"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Client"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Paiement"));

     qDebug() << "Updating table view";
  return model;

}
bool Facture::modifier(int ID_fac)
{
    bool test = false;
    QSqlQuery query;
    QString ID_Fact = QString::number(ID_fac);

    query.prepare("UPDATE facture SET DATE_FACTURE = :Date_Facture, CLIENT = :Client, PAIEMENT = :paiement WHERE id_facture = :id_facture");
    query.bindValue(":id_facture", ID_Fact);
    query.bindValue(":Date_Facture", Date_Facture);
    query.bindValue(":Client", Client);
    query.bindValue(":paiement", Paiement);

    if (query.exec()) {
        test = true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
    }

    return test;
}





