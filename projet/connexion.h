#ifndef CONNEXION_H
#define CONNEXION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connexion
{
    QSqlDatabase db;
public:
    Connexion();
    bool createConnexion();
    void closeConnexion();
};

#endif // CONNEXION_H
