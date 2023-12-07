#include "flotee.h"

flotee::flotee( )
{

}

flotee::flotee(int nm_chassis, QDate date_cir, QString type, QString modele)
{
    this->nm_chassis = nm_chassis;
    this->date_cir = date_cir;
    this->type = type;
    this->modele = modele;
}

QSqlQueryModel* flotee::rechercherParNM_CHASSIS(int nm_chassis)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    // Using prepared statements to prevent SQL injection
    QString queryStr = "SELECT * FROM GESTION_DE_FLOTTE WHERE NM_CHASSIS = :nm_chassis";

    QSqlQuery query;
    query.prepare(queryStr);
    query.bindValue(":nm_chassis", nm_chassis);

    if (query.exec()) {
        model->setQuery(query);
    } else {
        qDebug() << "Error in SQL Query: " << query.lastError().text();
        delete model;  // Clean up the model in case of an error
        return nullptr;
    }

    return model;
}


bool flotee::UPDATE()
{
    QSqlQuery query;
    query.prepare("UPDATE GESTION_DE_FLOTTE SET date_cir=:date_cir, type=:type, modele=:modele WHERE NM_CHASSIS=:nm_chassis");
    query.bindValue(":nm_chassis", nm_chassis);
    query.bindValue(":date_cir", date_cir);
    query.bindValue(":type", type);
    query.bindValue(":modele", modele);

    return query.exec();
}






bool flotee::ADD()
{
    QSqlQuery query;
    query.prepare("INSERT INTO GESTION_DE_FLOTTE (NM_CHASSIS, date_cir, type, modele) "
                   "VALUES (:nm_chassis, :date_cir, :type, :modele)");
    query.bindValue(":nm_chassis", nm_chassis);
    query.bindValue(":date_cir", date_cir);
    query.bindValue(":type", type);
    query.bindValue(":modele", modele);

    return query.exec();
}


bool flotee::DELETEE(int nm_chassis)
{
    QSqlQuery query;
    query.prepare("DELETE FROM GESTION_DE_FLOTTE WHERE NM_CHASSIS = :nm_chassis");
    query.bindValue(":nm_chassis", nm_chassis);
    return query.exec();
}

QSqlQueryModel* flotee::GETALL()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT NM_CHASSIS, date_cir, type, modele FROM GESTION_DE_FLOTTE");

    if (model->lastError().isValid()) {
        qDebug() << "Error in SQL Query: " << model->lastError().text();
        return nullptr;
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NM_CHASSIS"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_cir"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("modele"));

    return model;
}


QSqlQueryModel* flotee::findByNM_CHASSIS(int nm_chassis)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString queryString = QString("SELECT NM_CHASSIS, date_cir, type, modele FROM GESTION_DE_FLOTTE WHERE NM_CHASSIS = :nm_chassis");

    QSqlQuery query;
    query.prepare(queryString);
    query.bindValue(":nm_chassis", nm_chassis);

    query.exec();
    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "Error in SQL Query: " << model->lastError().text();
        return nullptr;
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NM_CHASSIS"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_cir"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("modele"));

    return model;
}

QSqlQueryModel* flotee::trie(QString croissance, QString critere)
{
    QSqlQueryModel* modal = new QSqlQueryModel();

    QString queryString;

    if (croissance == "ASC" || croissance == "DESC")
    {
        queryString = "SELECT * FROM GESTION_DE_FLOTTE ORDER BY " + critere + " " + croissance;

        QSqlQuery query;
        query.prepare(queryString);

        query.exec();
        modal->setQuery(query);

        if (query.lastError().isValid()) {
            qDebug() << "Error in SQL Query: " << query.lastError().text();
            delete modal; // Release memory in case of an error
            return nullptr;
        }

        // You can add additional code here if needed
    }
    else
    {
        // Handle invalid croissance
        qDebug() << "Invalid croissance value. Please use ASC or DESC.";
        delete modal; // Release memory in case of an error
        return nullptr;
    }

    return modal;
}
QChartView* flotee::stat()
{
    int countSedan = 0; // Count of entries with type "Sedan"
    int countSuv = 0; // Count of entries with type "Suv"
    int countTruck = 0; // Count of entries with type "Truck"

    QSqlQuery query;

    // Adjust the SQL queries to count entries based on their type
    query.prepare("SELECT * FROM GESTION_DE_FLOTTE WHERE TYPE = 'Sedan'");
    query.exec();
    while (query.next())
        countSedan++;

    query.prepare("SELECT * FROM GESTION_DE_FLOTTE WHERE TYPE = 'Suv'");
    query.exec();
    while (query.next())
        countSuv++;

    query.prepare("SELECT * FROM GESTION_DE_FLOTTE WHERE TYPE = 'Truck'");
    query.exec();
    while (query.next())
        countTruck++;

    qDebug() << countSedan << countSuv << countTruck;

    QPieSeries *series = new QPieSeries();
    series->append("Sedan", countSedan);
    series->append("SUV", countSuv);
    series->append("Truck", countTruck);

    QPieSlice *slice = series->slices().at(0);
    slice->setExploded(true);
    slice->setColor("#f37b78");

    QPieSlice *slice2 = series->slices().at(1);
    slice2->setColor("#663333");

    QPieSlice *slice3 = series->slices().at(2);
    slice3->setColor("#336699");

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistics on GESTION_DE_FLOTTE");

    series->setLabelsVisible();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setAnimationOptions(QChart::AllAnimations);
    chartView->chart()->legend()->hide();
    chartView->resize(1000, 500);

    return chartView;
}

//--------------
// Setters
void flotee::set_NM_CHASSIS(int nm_chassis)
{
    this->nm_chassis = nm_chassis;
}

void flotee::set_date_cir(QDate date_cir)
{
    this->date_cir = date_cir;
}

void flotee::set_type(QString type)
{
    this->type = type;
}

void flotee::set_modele(QString modele)
{
    this->modele = modele;
}

// Getters
int flotee::get_NM_CHASSIS() const
{
    return nm_chassis;
}

QDate flotee::get_date_cir() const
{
    return date_cir;
}

QString flotee::get_type() const
{
    return type;
}

QString flotee::get_modele() const
{
    return modele;
}


