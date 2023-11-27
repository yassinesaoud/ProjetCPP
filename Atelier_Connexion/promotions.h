#ifndef PROMOTIONS_H
#define PROMOTIONS_H

#include <QString>
#include <QDate>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Promotions
{
public:
    Promotions();
    Promotions(QString, QString, int);
    QString getCode() const; // Function names adjusted to follow conventional naming
    QString getDate() const; // Also, added 'const' to indicate these functions don't modify the object's state
    int getPourcentage() const;
    void setCode(const QString &); // Parameters passed by const reference to avoid unnecessary copies
    void setDate(const QString &);
    void setPourcentage(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier(QString);

private:
    QString CODE;
    QString DATE;
    int POURCENTAGE; // Corrected the datatype to int for percentage
};

#endif // PROMOTIONS_H
