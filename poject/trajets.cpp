#include "trajets.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QString>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDate>
#include <QStandardItemModel>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QtSql>
#include <QMap>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
Trajets::Trajets()
{
id_trajet=0;
temps="";
distance=0;
emplacement="";

}

/****/
Trajets::Trajets(int id_trajet,QString temps,double distance,QString emplacement)
{this->id_trajet=id_trajet;this->temps=temps;this->distance=distance;this->emplacement=emplacement;}
int Trajets::getid_trajet(){return id_trajet;}
QString Trajets::gettemps(){return temps;}
double Trajets::getdistance(){return distance;}
QString Trajets::getemplacement(){return emplacement;}
//float Trajets::getprix(){return prix;}
/*....*/
void Trajets::setid_trajet(int id_trajet){this->id_trajet=id_trajet;}
void Trajets::settemps(QString temps){this->temps=temps;}
void Trajets::setdistance(double distance){this->distance=distance;}
void Trajets::setemplacement(QString epmlacement){this->emplacement=emplacement;}
//void Trajets::setprix(float prix){this->prix=prix;}
bool Trajets::ajouter()
{
    QSqlQuery query;
    QString id_string= QString::number(id_trajet);
        query.prepare("INSERT INTO GS_TRAJETS (id_trajet, temps, distance,emplacement) "
                      "VALUES (:id_trajet, :temps, :distance, :emplacement)");
        query.bindValue(":id_trajet", id_string);
        query.bindValue(":temps", temps);
        query.bindValue(":distance", distance);
        query.bindValue(":emplacement", emplacement);
        //query.bindValue(":prix", prix);
        return query.exec();

}
bool Trajets::supprimer(int id_trajet)
{
    QSqlQuery query;
        query.prepare("Delete from GS_TRAJETS where id_trajet=:id_trajet");
        query.bindValue(0, id_trajet);
        return query.exec();

}
QSqlQueryModel* Trajets::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT * FROM GS_TRAJETS");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_trajet"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("temps"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("distance"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("emplacement"));
         //model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));


    return model;
}

bool Trajets::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE GS_TRAJETS SET ID_TRAJET= :id_trajet, TEMPS = :temps, DISTANCE = :distance, EMPLACEMENT = :emplacement  WHERE ID_TRAJET = :id_trajet");
    query.bindValue(":id_trajet", id_trajet);
    query.bindValue(":temps", temps);
    query.bindValue(":distance", distance);
    query.bindValue(":emplacement", emplacement);
    //query.bindValue(":prix", prix);

    return query.exec();

}

/****************/
bool Trajets::exporterPDF(const QString &fileName, QSqlQueryModel *model) {
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);

        for (int row = 0; row < model->rowCount(); ++row) {
            for (int column = 0; column < model->columnCount(); ++column) {
                stream << model->data(model->index(row, column)).toString() << "\t";
            }
            stream << "\n";
        }

        file.close();
        return true;
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier pour l'exportation PDF.");
        return false;
    }
}

/****/


QSqlQueryModel* Trajets::recherche(int id_trajet) {
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM GS_TRAJETS WHERE id_trajet = :ID_TRAJET");
    query.bindValue(":ID_TRAJET", id_trajet);
    query.exec();

    model->setQuery(query);
    return model;
}

/********************/

QSqlQueryModel* Trajets::tri()
         {
             QSqlQueryModel * model= new QSqlQueryModel();
             model->setQuery("SELECT * FROM GS_TRAJETS ORDER BY id_trajet");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_trajet"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("temps"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("distance"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("emplacement"));
             //model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

             return model;
}
/**********STAT***************/

