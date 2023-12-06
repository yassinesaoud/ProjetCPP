#include "ventevehicule.h"
#include<QSqlQuery>
#include<QtDebug>
#include <iostream>
#include<QObject>
#include<QSqlQuery>
#include<QtDebug>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDate>
#include <QStandardItemModel>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QtSql>
#include <QMap>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries> // Inclure cette ligne
#include <QtCharts/QChart>
bool queryResult;
#include <QFile>
#include <QTextStream>
#include <QDialog>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QMessageBox>

using namespace std;

Ventevehicule::Ventevehicule()
{
    id_vehicule=0;
    nom_beneficaire="";
    type="";
    model="";
    num_chassis=0;
    prix_vente=0;
}
Ventevehicule::Ventevehicule(int id_vehicule,QString nom_beneficaire,QString type ,QString model,int num_chassis,int prix_vente)
{
this->id_vehicule=id_vehicule;this->nom_beneficaire=nom_beneficaire; this->type=type;this->model=model;this->num_chassis=num_chassis;this->prix_vente=prix_vente;}
int Ventevehicule::getid_vehicule(){return id_vehicule;}
QString Ventevehicule::getnom_beneficaire(){return nom_beneficaire ;}
QString Ventevehicule::gettype(){return type ;}
QString Ventevehicule::getmodel(){return model ;}
int Ventevehicule::getnum_chassis(){return num_chassis ;}
int Ventevehicule::getprix_vente(){return prix_vente ;}
void Ventevehicule::setid_vehicule(int id_vehicule){this->id_vehicule=id_vehicule;}
void Ventevehicule::setnom_beneficaire(QString nom_beneficiaire){this->nom_beneficaire=nom_beneficiaire;}
void Ventevehicule::settype(QString type){this->type=type;}
void Ventevehicule::setnum_chassis(int num_chassis){this->num_chassis=num_chassis;}
bool Ventevehicule::ajouter() {
    QSqlQuery query;
    QString id_vehicule_string = QString::number(id_vehicule);
    QString num_chassis_string = QString::number(num_chassis);
    QString prix_vente_string = QString::number(prix_vente);

    query.prepare("INSERT INTO GS_VENTE (id_vehicule, nom_beneficaire, type, model, num_chassis, prix_vente) "
                  "VALUES (:id_vehicule, :nom_beneficaire, :type, :model, :num_chassis, :prix_vente)");

    query.bindValue(":id_vehicule", id_vehicule);
    query.bindValue(":nom_beneficaire", nom_beneficaire);
    query.bindValue(":type", type);
    query.bindValue(":model", model);
    query.bindValue(":num_chassis", num_chassis);
    query.bindValue(":prix_vente", prix_vente);


    bool queryResult = query.exec();

    QFile file("C:\Projet2A\historique.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        // Gérer l'échec d'ouverture du fichier
        return false;
    }

    QTextStream cout(&file);
    QString d_info = QDateTime::currentDateTime().toString();
    QString message = d_info + " - Une véhicule a été ajoutée avec l'id " + QString::number(id_vehicule) + "\n";
    cout << message;

    file.close();

    return queryResult;
}



bool Ventevehicule::supprimer(int id_vehicule) {
   /* QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM GS_VENTE WHERE id_vehicule = :id_vehicule");
    checkQuery.bindValue(":id_vehicule", id_vehicule);
    checkQuery.exec();

    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        // L'enregistrement avec l'ID spécifié existe, on peut le supprimer
        QSqlQuery deleteQuery;
        deleteQuery.prepare("DELETE FROM VENTEVEHICULE WHERE id_vehicule = :id_vehicule");
        deleteQuery.bindValue(":id_vehicule", id_vehicule);

        bool queryResult = deleteQuery.exec();

        QFile file("C:\\Projet2A\\historique.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            return false; // Impossible d'ouvrir le fichier de journal, renvoie false
        }

        QTextStream cout(&file);
        QString d_info = QDateTime::currentDateTime().toString();
        QString message = d_info + " - Un véhicule avec l'id " + QString::number(id_vehicule) + " a été supprimé\n";
        cout << message;

        file.close();

        return queryResult;
    } else {
        // L'enregistrement avec l'ID spécifié n'a pas été trouvé
        QFile file("C:\\Projet2A\\historique.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            return false; // Impossible d'ouvrir le fichier de journal, renvoie false
        }

        QTextStream cout(&file);
        QString d_info = QDateTime::currentDateTime().toString();
        QString message = d_info + " - Tentative de suppression d'un véhicule avec l'id " + QString::number(id_vehicule) + " qui n'existe pas\n";
        cout << message;

        file.close();

        return false; // Indique que la suppression a échoué car l'ID n'a pas été trouvé
    }*/    QSqlQuery query;
    query.prepare("DELETE FROM gs_vente WHERE id_vehicule = :id_vehicule");
    query.bindValue(":id_vehicule", id_vehicule);
    return query.exec();
}

QSqlQueryModel* Ventevehicule::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM GS_VENTE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_vehicule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_beneficiaire"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("model"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("num_chassis"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix_vente"));
    return model;
    QFile file("C:\Projet2A\historique.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {

    }

    QTextStream cout(&file);
    QString d_info = QDateTime::currentDateTime().toString();
    QString message = d_info + " - Affichage des données de la table VENTEVEHICULE\n";
    cout << message;

    file.close();

    return model;
}




bool Ventevehicule::modifier() {
    QSqlQuery query;
    query.prepare("UPDATE GS_VENTE SET ID_VEHICULE = :id_vehicule, NOM_BENEFICAIRE = :nom_beneficaire, TYPE = :type, MODEL = :model, NUM_CHASSIS = :num_chassis, PRIX_VENTE = :prix_vente WHERE ID_VEHICULE = :id_vehicule");
    query.bindValue(":id_vehicule", id_vehicule);
    query.bindValue(":nom_beneficaire", nom_beneficaire);
    query.bindValue(":type", type);
    query.bindValue(":model", model);
    query.bindValue(":num_chassis", num_chassis);
    query.bindValue(":prix_vente", prix_vente);


    bool queryResult = query.exec();


    QFile file("C:\Projet2A\historique.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        // Gérer l'échec d'ouverture du fichier
        return queryResult;
    }

    QTextStream cout(&file);
    QString d_info = QDateTime::currentDateTime().toString();
    QString message = d_info + " - Modification d'une entrée dans la table VENTEVEHICULE avec l'ID " + QString::number(id_vehicule) + "\n";
    cout << message;

    file.close();

    return queryResult;
}


bool Ventevehicule::exporterPDF(const QString &fileName, QSqlQueryModel *model) {
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);


        for (int row = 0; row < model->rowCount(); ++row) {
            for (int column = 0; column < model->columnCount(); ++column) {
                stream << model->data(model->index(row, column)).toString() << "\t";
            }
            stream << "\n";
        }

        file.close();


        QFile historyFile("C:\Projet2A\historique.txt");
        if (historyFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            QTextStream cout(&historyFile);
            QString d_info = QDateTime::currentDateTime().toString();
            QString message = d_info + " - Exportation des données vers un fichier PDF : " + fileName + "\n";
            cout << message;

            historyFile.close();
        } else {
            QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier d'historique pour l'enregistrement PDF.");
        }

        return true;
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier pour l'exportation PDF.");
        return false;
    }
}
QSqlQueryModel* Ventevehicule::recherche(int id_vehicule) {
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM GS_VENTE WHERE id_vehicule = :ID_VEHICULE");
    query.bindValue(":ID_VEHICULE", id_vehicule);
    query.exec();

    model->setQuery(query);


    QFile historyFile("C:\Projet2A\historique.txt");
    if (historyFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream cout(&historyFile);
        QString d_info = QDateTime::currentDateTime().toString();
        QString message = d_info + " - Recherche des données dans la table GS_VENTE avec l'ID " + QString::number(id_vehicule) + "\n";
        cout << message;

        historyFile.close();
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier d'historique pour l'enregistrement de la recherche.");
    }

    return model;
}
QSqlQueryModel* Ventevehicule::tri() {
    QSqlQuery *q = new QSqlQuery();
    QSqlQueryModel *model = new QSqlQueryModel();
    q->prepare("SELECT * FROM GS_VENTE ORDER BY ID_VEHICULE");
    q->exec();
    model->setQuery(*q);


    QFile historyFile("C:\Projet2A\historique.txt");
    if (historyFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream cout(&historyFile);
        QString d_info = QDateTime::currentDateTime().toString();
        QString message = d_info + " - Tri des données dans la table GS_VENTE par ID_VEHICULE\n";
        cout << message;

        historyFile.close();
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier d'historique pour l'enregistrement du tri.");
    }

    return model;
}
void Ventevehicule::afficherHistorique() {

    QFile historyFile("C:\Projet2A\historique.txt");
    if (historyFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&historyFile);
        QString historiqueContenu = in.readAll();
        historyFile.close();


        QDialog* historiqueDialog = new QDialog(nullptr);
        historiqueDialog->setWindowTitle("Historique");
        historiqueDialog->setMinimumSize(400, 300);

        QTextEdit* textEdit = new QTextEdit(historiqueDialog);
        textEdit->setPlainText(historiqueContenu);
        textEdit->setReadOnly(true);

        QVBoxLayout* layout = new QVBoxLayout(historiqueDialog);
        layout->addWidget(textEdit);

        historiqueDialog->exec();
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'ouvrir le fichier d'historique pour la lecture.");
    }
}
