#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QKeyEvent>
#include <QStandardItemModel>
#include <QMap>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>



class employe
{
public:
    employe();
    employe(int,QString,QString,int,QString,int,QString,int,QString);
        ~employe();

        int Getcin() ;
        void Setcin(int);
        QString Getnom();
        void Setnom(QString);
        QString Getprenom();
        void Setprenom(QString);
        int Getage() ;
        void Setage(int);
        QString Getsante() ;
        void Setsante(QString);
        int Getheure() ;
        void Setheure(int);
        QString Getsexe();
        void Setsexe(QString);
        int Getabs() ;
        void Setabs(int);
        QString Getrfid();
        void Setrfid(QString);
        //les Fonction
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
        bool modifier();
        QSqlQueryModel * rechercher(int cin);
        QSqlQueryModel * tri_cin();
        QSqlQueryModel * tri_age();
        bool exporterPDF(const QString &fileName, QSqlQueryModel *model);
        employe employe_du_mois();
        QString chatBotResponse(const QString &question);
        bool exporterWord(const QString &fileName, QSqlQueryModel *model);
        QSqlQueryModel * tri_nom();
        QSqlQueryModel * tri_prenom();
        double calculerPrime();


    protected:

    private:
        int cin;
        QString nom;
        QString prenom;
        int age;
        QString sante;
        int heure;
        QString sexe;
        int abs;
        QString rfid;
};

#endif // EMPLOYE_H
