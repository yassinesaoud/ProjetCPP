#include "ventevehicule.h"
#include<QSqlQuery>
#include<QtDebug>
#include <iostream>
#include<QObject>
using namespace std;

Ventevehicule::Ventevehicule()
{
    id_vehicule=0;
    nom_beneficaire="";
    type="";
    model="";
    num_chassis=0;
    prix_vente=0;
}
Ventevehicule::Ventevehicule(int id_vehicule,QString nom_beneficaire,QString type ,QString model,int num_chassis,double prix_vente)
{
this->id_vehicule=id_vehicule;this->nom_beneficaire=nom_beneficaire; this->type=type;this->model=model;this->num_chassis=num_chassis;this->prix_vente=prix_vente;}
int Ventevehicule::getid_vehicule(){return id_vehicule;}
QString Ventevehicule::getnom_beneficaire(){return nom_beneficaire ;}
QString Ventevehicule::gettype(){return type ;}
QString Ventevehicule::getmodel(){return model ;}
int Ventevehicule::getnum_chassis(){return num_chassis ;}
double Ventevehicule::getprix_vente(){return prix_vente ;}
void Ventevehicule::setid_vehicule(int id_vehicule){this->id_vehicule=id_vehicule;}
void Ventevehicule::setnom_beneficaire(QString nom_beneficiaire){this->nom_beneficaire=nom_beneficiaire;}
void Ventevehicule::settype(QString type){this->type=type;}
void Ventevehicule::setnum_chassis(int num_chassis){this->num_chassis=num_chassis;}
bool Ventevehicule::ajouter(){

    QSqlQuery query;
          query.prepare("INSERT INTO VENTEVEHICULE (id_vehicule,nom_beneficaire,type,model,num_chassis,prix_vente ) "
                        "VALUES (:id_vehicule, :nom_beneficaire, :type, :model, :num_chassis, :prix_vente)");
          query.bindValue(":id_vehicule", id_vehicule);
          query.bindValue(":nom_beneficaire",nom_beneficaire );
          query.bindValue(":type",type );
          query.bindValue(":model",model );
          query.bindValue(":num_chassis",num_chassis );
          query.bindValue(":prix_vente",prix_vente );
           return query.exec();







}
bool Ventevehicule::supprimer(int id_vehicule)
{
    QSqlQuery query;
    QString id_vehicule_string= QString::number(id_vehicule);
     QString num_chassis_string= QString::number(num_chassis);
    QString prix_vente_string= QString::number(prix_vente);
          query.prepare(" Delete from VENTEVEHICULE where id_vehicule=:id_vehicule");
          query.bindValue(0, id_vehicule);

          return query.exec();


}
QSqlQueryModel* Ventevehicule::afficher(){

 QSqlQueryModel* model=new QSqlQueryModel();

     model->setQuery("SELECT * FROM VENTEVEHICULE ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_vehicule"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_beneficiaire"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("model"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("num_chassis"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix_vente"));




return model;
}



bool Ventevehicule::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE VENTEVEHICULE SET ID_VEHICULE= :id_vehicule, NOM_BENEFICAIRE = :nom_beneficaire, TYPE = :type, MODEL = :model,NUM_CHASSIS = num_chassis ,PRIX_VENTE= :prix_vente WHERE ID_VEHICULE = :id_vehicule");
    query.bindValue(":id_vehicule", id_vehicule);
    query.bindValue(":nom_beneficaire", nom_beneficaire);
    query.bindValue(":type", type);
    query.bindValue(":model", model);
    query.bindValue(":num_chassis", num_chassis);
    query.bindValue(":prix_vente", prix_vente);

    return query.exec();

}

