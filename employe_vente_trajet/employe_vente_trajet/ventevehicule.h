#ifndef VENTEVEHICULE_H
#define VENTEVEHICULE_H
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include <QKeyEvent>
#include <QStandardItemModel>
#include <QMap>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>
class Ventevehicule
{
public:
    Ventevehicule();
    Ventevehicule(int,QString,QString,QString,int,int);
    int getid_vehicule();
    QString getnom_beneficaire();
    QString gettype();
    QString getmodel();
    int getnum_chassis();
    int getprix_vente();
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
    bool exporterPDF(const QString &fileName, QSqlQueryModel *model);
    QSqlQueryModel* recherche(int id_vehicule);
    QSqlQueryModel * tri();
    void afficherHistorique();




private:
  int id_vehicule;
  QString nom_beneficaire;
  QString type;
  QString model;
  int num_chassis;
  int prix_vente;



};

#endif // VENTEVEHICULE_H
