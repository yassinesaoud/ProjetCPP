#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class employe
{
public:
    employe();
    employe(int,QString,QString,int,QString);
        ~employe();

        int getcin() ;
        void Setcin(int);
        QString Getnom();
        void Setnom(QString);
        QString Getprenom();
        void Setprenom(QString);
        int Getage() ;
        void Setage(int);
        QString Getsante() ;
        void Setsante(QString);
        //les Fonction
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
        bool modifier();
        bool chercher(int n);
        QSqlQueryModel * rechercher();


    protected:

    private:
        int cin;
        QString nom;
        QString prenom;
        int age;
        QString sante;
};

#endif // EMPLOYE_H
