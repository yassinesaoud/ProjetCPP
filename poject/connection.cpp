#include"connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>


connection::connection()
{

}


bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");
db.setUserName("monem");//inserer nom de l'utilisateur
db.setPassword("monem");//inserer mot de passe de cet utilisateur

if (db.open()) test=true;
return  test;
}
