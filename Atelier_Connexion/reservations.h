#ifndef RESERVATIONS_H
#define RESERVATIONS_H
#include <QString>
#include <QDate>
#include <QTime>
#include <QtDebug>
#include<QSqlQuery>
#include <QSqlQueryModel>

class Reservations
{
public:
    Reservations();
    Reservations(QString,QString,QString);
    QString getcode_res();
    QString getdate_res();
    QString getheure_res();
    void setcode_res(QString);
    void setdate_res(QString);
    void setheure_res(QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel * recherche();
    QSqlQueryModel * tri_id();
    QSqlQueryModel * displayClause(QString);




private:
    QString code_res;
    QString date_res;
    QString heure_res;

};

#endif // RESERVATIONS_H
