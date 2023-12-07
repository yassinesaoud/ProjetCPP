#ifndef FACTURE_H
#define FACTURE_H
#include <QString>
#include<iostream>
#include <QSqlQueryModel>
#include <QDate>
#include <QtCharts/QChartView>
#include<QPieSeries>
#include<QImage>


using namespace QtCharts;

class Facture
{
public:
    Facture();
    Facture(int,QDate,QString,QString,float);
    int getID_facture();
    QDate getDate_Facture();
    QString getClient();
    QString getPaiement();
    float getmontant();
    void getmontant(float);
    void setID_facture(int);
    void getDate_Facture(QDate);
    void getClient(QString);
    void getPaiement(QString);
    void setDateFacture(QDate);
    void setClient(QString);
    void setPaiement(QString);
    void setMontant(float);
    bool ajouter();
    bool supprimer(int ID_facture);
    bool modifier(int ID_facture);
    QSqlQueryModel* afficher();
    QSqlQueryModel *tri(QString,QString);
    bool rech(int);
    QSqlQueryModel* rechercher(QString);

    bool rechdate(QString);
    QSqlQueryModel* rechercherdate(QDate);
    QChartView * stat_factures();
    void generateQRCode(QString, QString);
    double calculateAnnualGain(int);
    double calculateMonthlyGain(int,int);
private:
    int ID_facture;
    QString Client,Paiement;
    QDate Date_Facture;
    float montant;

};

#endif // FACTURE_H

