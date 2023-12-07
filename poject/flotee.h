#ifndef FLOTEE_H
#define FLOTEE_H

#include <QString>
#include <QDate>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlError>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QGridLayout>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include <QPieSlice>

class flotee
{
private:
    int nm_chassis;
    QDate date_cir;
    QString type;
    QString modele;

public:
    flotee();
    flotee(int nm_chassis, QDate date_cir, QString type, QString modele);

    void set_NM_CHASSIS(int nm_chassis);
    void set_date_cir(QDate date_cir);
    void set_type(QString type);
    void set_modele(QString modele);

    int get_NM_CHASSIS() const;
    QDate get_date_cir() const;
    QString get_type() const;
    QString get_modele() const;

    bool ADD();
    bool UPDATE();
    bool DELETEE(int id);
    QSqlQueryModel* GETALL();
    QSqlQueryModel* findByNM_CHASSIS(int nm_chassis);
    QSqlQueryModel* trie(QString croissance, QString critere);
    QSqlQueryModel* rechercherParNM_CHASSIS(int nm_chassis);
    QChartView *stat();
    int  getAccess(const QString &nom, const QString &email);
};

#endif // FLOTEE_H
