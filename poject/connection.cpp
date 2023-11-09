#include "mainwindow.h"
#include"connection.h"
#include<QApplication>
#include <QMessageBox>
#include "employe.h"


connection::connection()
{

}


bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");
db.setUserName("Amine");//inserer nom de l'utilisateur
db.setPassword("azer");//inserer mot de passe de cet utilisateur

if (db.open()) test=true;
return  test;
}
