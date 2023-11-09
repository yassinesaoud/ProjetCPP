#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projetcppp");
db.setUserName("farouk1");//inserer nom de l'utilisateur
db.setPassword("farouk1230");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
    return  test;
}
void Connexion::closeConnexion(){db.close();}
