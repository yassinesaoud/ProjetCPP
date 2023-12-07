#ifndef RESERVATIONS_H
#define RESERVATIONS_H
#include <QString>
#include <QDate>
#include <QTime>
#include <QtDebug>
#include<QSqlQuery>
#include <QSqlQueryModel>
#include "arduino.h"
class Reservations
{
public:
    Reservations();
    Reservations(QString,QString,QDateTime,QString,int);
    QString getcode_res();
    QString getdate_res();
    QDateTime getdate_resf();
    QString getheure_res();
    int getPrix();
    void setcode_res(QString);
    void setdate_res(QString);
    void setdate_resf(QDateTime);
    void setheure_res(QString);
    void setPrix(int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel * trierReservation(QString test);
    QSqlQueryModel * rechercherReservation(QString chaine);
    QSqlQueryModel * displayClause(QString);





private:
    QString code_res;
    QString date_res;
    QDateTime date_resf;
    QString heure_res;
    int Prix;


};

#endif // RESERVATIONS_H
