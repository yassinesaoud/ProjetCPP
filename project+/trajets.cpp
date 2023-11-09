#include "trajets.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
Trajets::Trajets()
{
id_trajet=0;
temps="";
distance=0;
emplacement="";
prix=0;
}

/****/
Trajets::Trajets(int id_trajet,QString temps,double distance,QString emplacement,float prix)
{this->id_trajet=id_trajet;this->temps=temps;this->distance=distance;this->emplacement=emplacement;this->prix=prix;}
int Trajets::getid_trajet(){return id_trajet;}
QString Trajets::gettemps(){return temps;}
double Trajets::getdistance(){return distance;}
QString Trajets::getemplacement(){return emplacement;}
float Trajets::getprix(){return prix;}
/*....*/
void Trajets::setid_trajet(int id_trajet){this->id_trajet=id_trajet;}
void Trajets::settemps(QString temps){this->temps=temps;}
void Trajets::setdistance(double distance){this->distance=distance;}
void Trajets::setemplacement(QString epmlacement){this->emplacement=emplacement;}
void Trajets::setprix(float prix){this->prix=prix;}
bool Trajets::ajouter()
{
    bool test=false;
    QSqlQuery query;
    QString id_string= QString::number(id_trajet);
        query.prepare("INSERT INTO TRAJETS (id_trajet, temps, distance,emplacement,prix) "
                      "VALUES (:id_trajet, :temps, :distance, :emplacement, :prix)");
        query.bindValue(":id_trajet", id_string);
        query.bindValue(":temps", temps);
        query.bindValue(":distance", distance);
        query.bindValue(":emplacement", emplacement);
        query.bindValue(":prix", prix);
        return query.exec();

}
bool Trajets::supprimer(int id_trajet)
{
    QSqlQuery query;
        query.prepare("Delete from TRAJETS where id_trajet=:id_trajet");
        query.bindValue(0, id_trajet);
        return query.exec();

}
QSqlQueryModel* Trajets::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT * FROM TRAJETS");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_trajet"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("temps"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("distance"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("emplacement"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));


    return model;
}

bool Trajets::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE TRAJETS SET ID_TRAJET= :id_trajet, TEMPS = :temps, DISTANCE = :distance, EMPLACEMENT = :emplacement ,PRIX= :prix WHERE ID_TRAJET = :id_trajet");
    query.bindValue(":id_trajet", id_trajet);
    query.bindValue(":temps", temps);
    query.bindValue(":distance", distance);
    query.bindValue(":emplacement", emplacement);
    query.bindValue(":prix", prix);

    return query.exec();

}
