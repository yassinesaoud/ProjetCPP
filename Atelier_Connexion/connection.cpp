#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_Projet2A");
db.setUserName("Yassine");//inserer nom de l'utilisateur
db.setPassword("yassine123");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

