#include "reservations.h"
#include<QString>
#include <QDate>
#include <QtDebug>
#include<QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QSqlError>
Reservations::Reservations()
{
    code_res=" ";
    date_res=" ";
    heure_res=" ";
}
Reservations:: Reservations(QString code_res,QString date_res,QString heure_res)
{
        this->code_res=code_res;
        this->date_res=date_res;
        this->heure_res=heure_res;
}
QString Reservations::getcode_res(){return code_res ;}
QString Reservations::getdate_res(){return date_res;}
QString Reservations::getheure_res(){return heure_res ;}
void Reservations::setcode_res(QString code_res){this->code_res=code_res;}
void Reservations::setdate_res(QString date_res){this->date_res=date_res;}
void Reservations::setheure_res(QString heure_res){this->heure_res=heure_res;}
bool Reservations::ajouter()
{

    QSqlQuery query;
         query.prepare("INSERT INTO reservations (code_res, date_res, heure_res) "
                       "VALUES (:code_res, :date_res, :heure_res)");
         query.bindValue(":code_res", code_res);
         query.bindValue(":date_res", date_res);
         query.bindValue(":heure_res", heure_res);
         return query.exec();
}
bool Reservations::supprimer(QString code_res)
{
    QSqlQuery query;
         query.prepare("Delete from reservations where code_res=:code_res");
         query.bindValue(0, code_res);
         return query.exec();



}


QSqlQueryModel* Reservations::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT * FROM reservations");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_res"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_res"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure_res"));



    return model;
}

bool Reservations::modifier() {
    QSqlQuery query;
    query.prepare("UPDATE reservations SET date_res = :date_res, heure_res = :heure_res WHERE code_res = :code_res");
    query.bindValue(":code_res", code_res);
    query.bindValue(":date_res", date_res);
    query.bindValue(":heure_res", heure_res);

    qDebug() << code_res; // Debugging: Output the value of code_res

    if (query.exec()) {
        qDebug() << "Update successful!";
        return true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
}









