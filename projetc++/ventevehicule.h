#ifndef VENTEVEHICULE_H
#define VENTEVEHICULE_H
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
class Ventevehicule
{
public:
    Ventevehicule();
    Ventevehicule(int,QString,QString,QString,int,double);
    int getid_vehicule();
    QString getnom_beneficaire();
    QString gettype();
    QString getmodel();
    int getnum_chassis();
    double getprix_vente();
    void setid_vehicule(int);
    void setnom_beneficaire(QString);
    void settype(QString);
    void setmodel(QString);
    void setnum_chassis(int);
    ~Ventevehicule(){};
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer (int);
    bool modifier();




private:
  int id_vehicule;
  QString nom_beneficaire;
  QString type;
  QString model;
  int num_chassis;
  double prix_vente;



};

#endif // VENTEVEHICULE_H
