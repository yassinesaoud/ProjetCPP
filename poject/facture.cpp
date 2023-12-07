#include "facture.h"
#include <QSqlQuery>
#include <QDebug>
#include<QObject>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include<QString>
#include <QSqlQueryModel>
#include<QDate>
#include<QDateTime>
#include <QImage>
#include <QPainter>
#include <QFile>

Facture::Facture()
{
ID_facture=0;Client="";Paiement="",montant=0;
}
Facture::Facture(int ID_facture,QDate Date_Facture,QString Client,QString Paiement,float montant ){
    this->ID_facture=ID_facture;this->Date_Facture=Date_Facture;this->Client=Client;this->Paiement=Paiement;this->montant=montant;}
int Facture::getID_facture(){return ID_facture;}
QDate Facture::getDate_Facture(){return Date_Facture;}
QString Facture::getClient(){return Client;}
QString Facture::getPaiement(){return  Paiement;}
float Facture::getmontant(){return  montant;}
void Facture::setID_facture(int ID_facture){this->ID_facture=ID_facture;}
void Facture::getDate_Facture(QDate Date_Facture){this->Date_Facture=Date_Facture;}
void Facture::getClient(QString Client){this->Client=Client;}
void Facture::getPaiement(QString Paiement){this->Paiement=Paiement;}
void Facture::getmontant(float montant){this->montant=montant;}
bool Facture::ajouter(){
    bool test=false;
    QSqlQuery query;
    QString ID=QString::number(ID_facture);
    QString mont=QString::number(montant);
         query.prepare("INSERT INTO GS_FACTURE (ID_facture,Date_facture,Paiement,Client,montant) "
                       "VALUES (:id_facture, :date_facture, :client,:paiement,:montant)");
         query.bindValue(":id_facture", ID);
         query.bindValue(":date_facture",Date_Facture);
         query.bindValue(":paiement",Paiement);
         query.bindValue(":client",Client );
         query.bindValue(":montant",mont);

         if(query.exec()){
             test=true;
         }
         else{
             qDebug()<<"ERROR"<<query.lastError().text();
         }
    return test;
}

bool Facture::supprimer(int ID_facture)
{
    QSqlQuery query;
        query.prepare("SELECT * FROM GS_FACTURE WHERE ID_facture = :ID_facture");
        query.bindValue(":ID_facture",ID_facture);

        if (query.exec() && query.next()) {
            query.prepare("DELETE FROM GS_FACTURE WHERE ID_facture = :ID_facture");
            query.bindValue(":ID_facture",ID_facture);
            if (query.exec()) {
                return true; // Deletion was successful
            } else {
                qDebug() << "Error during deletion:" << query.lastError().text();
                return false;
            }
        } else {
            return false;
        }
    }
QSqlQueryModel* Facture ::afficher()
{

  QSqlQueryModel* model=new QSqlQueryModel();


     model->setQuery("SELECT * FROM GS_FACTURE");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_facture"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date_Facture"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Client"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Paiement"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("montant"));

     qDebug() << "Updating table view";
  return model;

}
bool Facture::modifier(int ID_fac)
{
    bool test = false;
    QSqlQuery query;
    QString ID_Fact = QString::number(ID_fac);
    QString mont = QString::number(montant);

    query.prepare("UPDATE GS_FACTURE SET DATE_FACTURE = :Date_Facture, CLIENT = :Client, PAIEMENT = :paiement,montant=:montant WHERE id_facture = :id_facture");
    query.bindValue(":id_facture", ID_Fact);
    query.bindValue(":Date_Facture", Date_Facture);
    query.bindValue(":Client", Client);
    query.bindValue(":paiement", Paiement);
    query.bindValue(":montant", mont);

    if (query.exec()) {
        test = true;
    } else {
        qDebug() << "Error: " << query.lastError().text();
    }

    return test;
}



QSqlQueryModel *Facture::tri(QString critere,QString croissance)
{
    QSqlQueryModel *model=new QSqlQueryModel();

    if(critere == "ID_facture" && croissance == "ASC")
        model->setQuery("select * from GS_FACTURE order by ID_facture ASC ");
    else if(critere == "ID_facture" && croissance == "DESC")
        model->setQuery("select * from GS_FACTURE order by ID_facture DESC ");
    else if(critere == "Date_facture" && croissance == "ASC")
        model->setQuery("select * from GS_FACTURE order by Date_facture ASC ");
    else if(critere == "Date_facture" && croissance == "DESC")
        model->setQuery("select * from GS_FACTURE order by Date_facture DESC ");
    return  model;
}




bool Facture::rech(int x)
{
    QSqlQuery query;
    query.prepare("select * from GS_FACTURE where ID_facture=:ID_facture;");
    query.bindValue(":ID_facture",x);
    return query.exec();
}

QSqlQueryModel* Facture::rechercher(QString a)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from GS_FACTURE where id_facture='"+a+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_facture"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date_Facture"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Paiement"));
    return model;
}




bool Facture::rechdate(QString x)
{
    QSqlQuery query;
    query.prepare("select * from GS_FACTURE where  Date_facture= :Date_facture;");
    query.bindValue(":Date_facture", x);
    return query.exec();
}

QSqlQueryModel* Facture::rechercherdate(QDate a)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM GS_FACTURE WHERE Date_facture = :date");
    query.bindValue(":date", a);

    if (query.exec())
    {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_facture"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date_Facture"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Client"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Paiement"));
    }
    else
    {
        qDebug() << "Error executing query: " << query.lastError().text();
    }

    return model;
}

QChartView *Facture::stat_factures()
{
    double totalMontant = 0.0;
    int nombreFacturesTranche1 = 0;
    int nombreFacturesTranche2 = 0;
    int nombreFacturesTranche3 = 0;

    QSqlQuery query;
    query.prepare("SELECT * FROM GS_FACTURE WHERE montant >= 0 AND montant <= 100");
    query.exec();

    while(query.next())
    {
        totalMontant += query.value("montant").toDouble();
        nombreFacturesTranche1++;
    }

    query.prepare("SELECT * FROM GS_FACTURE WHERE montant > 100 AND montant <= 500");
    query.exec();

    while(query.next())
    {
        totalMontant += query.value("montant").toDouble();
        nombreFacturesTranche2++;
    }

    query.prepare("SELECT * FROM GS_FACTURE WHERE montant > 500");
    query.exec();

    while(query.next())
    {
        totalMontant += query.value("montant").toDouble();
        nombreFacturesTranche3++;
    }

    qDebug() << "Total Montant : " << totalMontant;
    qDebug() << "Nombre Factures Tranche 1 : " << nombreFacturesTranche1;
    qDebug() << "Nombre Factures Tranche 2 : " << nombreFacturesTranche2;
    qDebug() << "Nombre Factures Tranche 3 : " << nombreFacturesTranche3;

    QPieSeries *series = new QPieSeries();
    series->append("0-100", nombreFacturesTranche1);
    series->append("101-500", nombreFacturesTranche2);
    series->append("501+", nombreFacturesTranche3);

    QPieSlice *slice1 = series->slices().at(0);
    slice1->setExploded(true);
    slice1->setColor("#092cdb");
    QPieSlice *slice2 = series->slices().at(1);
    slice2->setColor("#4360f0");
    QPieSlice *slice3 = series->slices().at(2);
    slice3->setColor("#303a6e");

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique des Factures");
    series->setLabelsVisible();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setAnimationOptions(QChart::AllAnimations);
    chartView->chart()->legend()->hide();

    return chartView;
}

void Facture::setDateFacture(QDate date) {
    Date_Facture = date;
}
void Facture::setClient(QString client) {
   Client = client;
}

// Implement the setPaiement method
void Facture::setPaiement(const QString paiement) {
    Paiement = paiement;
}

// Implement the setMontant method
void Facture::setMontant(float montant1) {
    montant = montant1;
}

double Facture::calculateAnnualGain(int year)
{
    QSqlQuery query;
     query.prepare("SELECT SUM(MONTANT) FROM GS_FACTURE WHERE EXTRACT(YEAR FROM DATE_FACTURE) = :year");
    query.bindValue(":year", year);

    if (query.exec() && query.next()) {
        double totalIncome = query.value(0).toDouble();
         qDebug() << "Total Income for year " << year << ": " << totalIncome;
        query.prepare("SELECT SUM(amount) FROM depenses "
                      "JOIN Facture ON depenses.ID_facture = Facture.ID_facture "
                      "WHERE EXTRACT (YEAR FROM GS_FACTURE.DATE_FACTURE) = :year");
        query.bindValue(":year", year);

        if (query.exec() && query.next()) {
            double totalExpenses = query.value(0).toDouble();
            return totalIncome - totalExpenses;
        } else {
            qDebug() << "Error calculating total expenses for the year " << year;
        }
    } else {
        qDebug() << "Error executing query: " << query.lastError().text();
        qDebug() << "Error calculating total income for the year " << year;
    }

    return 0.0;  // Return 0 in case of errors
}

double Facture::calculateMonthlyGain(int year, int month)
    {
        QSqlQuery query;
        query.prepare("SELECT SUM(MONTANT) FROM GS_FACTURE WHERE EXTRACT(YEAR FROM DATE_FACTURE) = :year AND EXTRACT(MONTH FROM DATE_FACTURE) = :month");
        query.bindValue(":year", year);
        query.bindValue(":month", month);

        if (query.exec() && query.next()) {
            double totalIncome = query.value(0).toDouble();
            qDebug() << "Total Income for " << QDate(year, month, 1).toString("MMMM yyyy") << ": " << totalIncome;

            query.prepare("SELECT SUM(amount) FROM depenses "
                          "JOIN GS_FACTURE ON depenses.ID_facture = GS_FACTURE.ID_facture "
                          "WHERE EXTRACT(YEAR FROM GS_FACTURE.DATE_FACTURE) = :year AND EXTRACT(MONTH FROM GS_FACTURE.DATE_FACTURE) = :month");
            query.bindValue(":year", year);
            query.bindValue(":month", month);

            if (query.exec() && query.next()) {
                double totalExpenses = query.value(0).toDouble();
                return totalIncome - totalExpenses;
            } else {
                qDebug() << "Error calculating total expenses for " << QDate(year, month, 1).toString("MMMM yyyy");
            }
        } else {
            qDebug() << "Error calculating total income for " << QDate(year, month, 1).toString("MMMM yyyy");
        }

        return 0.0;  // Return 0 in case of errors
    }


