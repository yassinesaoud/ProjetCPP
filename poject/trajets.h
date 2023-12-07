#ifndef TRAJETS_H
#define TRAJETS_H
#include <QString>
#include <QSqlQueryModel>
#include <QKeyEvent>
#include <QStandardItemModel>
#include <QMap>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>
#include <QObject>
#include <QDateTime>

class Trajets
{

public:
    Trajets();
    Trajets(int,QString,double,QString);
    int getid_trajet();
    QString gettemps();
    double getdistance();
    QString getemplacement();
    //float getprix();
    /*....*/
    void setid_trajet(int);
    void settemps(QString);
    void setdistance(double);
    void setemplacement(QString);
    //void setprix(float);
    ~Trajets(){};
    bool ajouter();
    /******/
    QSqlQueryModel* afficher();
    bool supprimer(int);

    bool exporterPDF(const QString &fileName, QSqlQueryModel *model);
    QSqlQueryModel* recherche(int idi) ;
    QSqlQueryModel * tri();
     float statistique(QString role);


    bool modifier();
    /********/
    /********/
    /*******stat****/
     /***double dis,float prix)*/
    double calculerMontantTotale(double,float);


private:
    int id_trajet;
    QString temps;
    double distance;
    QString emplacement;
    //float prix=distance*200;


};
/***************/
/******************/
/*******************/




#endif // TRAJETS_H
