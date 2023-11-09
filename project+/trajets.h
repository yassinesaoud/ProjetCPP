#ifndef TRAJETS_H
#define TRAJETS_H
#include<QString>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Trajets
{

public:
    Trajets();
    Trajets(int,QString,double,QString,float);
    int getid_trajet();
    QString gettemps();
    double getdistance();
    QString getemplacement();
    float getprix();
    /*....*/
    void setid_trajet(int);
    void settemps(QString);
    void setdistance(double);
    void setemplacement(QString);
    void setprix(float);
    ~Trajets(){};
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
private:
    int id_trajet;
    QString temps;
    double distance;
    QString emplacement;
    float prix;

};

#endif // TRAJETS_H
