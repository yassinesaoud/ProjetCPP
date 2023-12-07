#include "promotions.h"
#include <QDebug>
#include <QSqlError>

Promotions::Promotions() {
    CODE = "";
    POURCENTAGE = 0;
}

Promotions::Promotions(QString code,int pourcentage) {
    CODE = code;
    POURCENTAGE = pourcentage;
}

QString Promotions::getCode() const {
    return CODE;
}


int Promotions::getPourcentage() const {
    return POURCENTAGE;
}

void Promotions::setCode(const QString &code) {
    CODE = code;
}


void Promotions::setPourcentage(int pourcentage) {
    POURCENTAGE = pourcentage;
}

bool Promotions::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO PROMOTIONS (CODE, POURCENTAGE) "
                  "VALUES (:code, :pourcentage)");
    query.bindValue(":code", CODE);

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

bool Promotions::modifier(QString CODE) {
    QSqlQuery query;
    query.prepare("UPDATE RESERVATIONS SET CODE= :CODE, POURCENTAGE = :POURCENTAGE WHERE CODE= :CODE");
    query.bindValue(":CODE", CODE);
    query.bindValue(":POURCENTAGE", POURCENTAGE);

    return query.exec();
}
