#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include<QDebug>
#include <QtDebug>
#include<QSqlQuery>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;
    bool test = c.createconnect();

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("Database is open"),
            QObject::tr("Connection successful."), QMessageBox::Cancel);

        // Connexion réussie, affichage de la fenêtre principale
        w.show();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
            QObject::tr("Connection failed."), QMessageBox::Cancel);
    }

    return a.exec();
}
