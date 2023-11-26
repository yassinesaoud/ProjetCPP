#include "reservations.h"
#include<QString>
#include <QDate>
#include <QtDebug>
#include<QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QSqlError>
#include <QDate>
#include "smtp.h"

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
         bool inserted = query.exec();

             // Vérifie si l'ajout de la réservation s'est fait avec succès
         if (inserted) {
             // Si la réservation a été ajoutée avec succès, envoyez un e-mail de notification
             QString destinataire = "yassin.saoud@esprit.tn"; // Adresse e-mail du destinataire
             QString sujet = "Nouvelle réservation ajoutée";
             QString contenu = "Une nouvelle réservation a été ajoutée.\n"
                               "Code de réservation : " + code_res + "\n"
                               "Date : " + date_res + "\n"
                               "Heure : " + heure_res + "\n";

             // Créez une instance de la classe Smtp en fournissant les informations de connexion SMTP nécessaires
             Smtp *smtp = new Smtp("yassin.saoud@esprit.tn", "Ys25481446", "smtp.gmail.com", 465);

             //qDebug("brevo");
             // Envoyez l'e-mail avec les détails de la réservation
             smtp->sendMail("yassin.saoud@esprit.tn", destinataire, sujet, contenu);
             // Supprimez l'instance de Smtp après avoir terminé l'envoi de l'e-mail

         }

         // Retourne le résultat de l'ajout de la réservation
         return inserted;
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
        query.prepare("UPDATE RESERVATIONS SET CODE_RES= :code_res, DATE_RES = :date_res, HEURE_RES = :heure_res WHERE CODE_RES= :code_res");
        query.bindValue(":code_res", code_res);
        query.bindValue(":date_res", date_res);
        query.bindValue(":heure_res",heure_res);

        return query.exec();

    }

QSqlQueryModel * Reservations::tri_id()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM  Reservations ORDER BY code_res ASC");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_res"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_res"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure_res"));


    return model;
}

QSqlQueryModel * Reservations::recherche()
    {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Reservations " + code_res);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_res"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_res"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure_res"));

    return model;

    }



QSqlQueryModel *Reservations::displayClause(QString cls)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Reservations " + cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_res"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_res"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure_res"));



    return model;
}




