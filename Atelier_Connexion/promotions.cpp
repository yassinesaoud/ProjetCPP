#include "promotions.h"
#include <QDebug>
#include <QSqlError>

Promotions::Promotions() {
    CODE = "";
    DATE = "";
    POURCENTAGE = 0;
}

Promotions::Promotions(QString code, QString date, int pourcentage) {
    CODE = code;
    DATE = date;
    POURCENTAGE = pourcentage;
}

QString Promotions::getCode() const {
    return CODE;
}

QString Promotions::getDate() const {
    return DATE;
}

int Promotions::getPourcentage() const {
    return POURCENTAGE;
}

void Promotions::setCode(const QString &code) {
    CODE = code;
}

void Promotions::setDate(const QString &date) {
    DATE = date;
}

void Promotions::setPourcentage(int pourcentage) {
    POURCENTAGE = pourcentage;
}

bool Promotions::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO PROMOTIONS (CODE, DATEE, POURCENTAGE) "
                  "VALUES (:code, :date, :pourcentage)");
    query.bindValue(":code", CODE);
    query.bindValue(":date", DATE);
    query.bindValue(":pourcentage", POURCENTAGE);

    return query.exec();
}

QSqlQueryModel* Promotions::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PROMOTIONS");
    return model;
}

bool Promotions::supprimer(QString code) {
    QSqlQuery query;
    query.prepare("DELETE FROM PROMOTIONS WHERE CODE = :code");
    query.bindValue(":code", code);

    return query.exec();
}

bool Promotions::modifier(QString code) {
    QSqlQuery query;
    query.prepare("UPDATE PROMOTIONS SET DATEE=:date, POURCENTAGE=:pourcentage WHERE CODE=:code");
    query.bindValue(":date", DATE);
    query.bindValue(":pourcentage", POURCENTAGE);
    query.bindValue(":code", code);

    return query.exec();
}
