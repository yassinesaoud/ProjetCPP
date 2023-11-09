#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("arwa");//inserer nom de l'utilisateur
db.setPassword("esprit23");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;



    return  test;
}
