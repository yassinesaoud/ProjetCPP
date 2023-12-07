#include "employe.h"
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
#include <QPdfWriter>
#include <QTextDocument>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTextDocumentWriter>
#include <memory>
using namespace std;
employe::employe()
{
    cin=0;
    nom="";
    prenom="";
    age=0;
    sante="";
    heure=0;
    sexe="";
    abs=0;
    rfid="";
}
employe::employe(int cin,QString nom,QString prenom,int age,QString sante,int heure,QString sexe,int abs,QString rfid)
{
    this->cin=cin;
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;
    this->sante=sante;
    this->heure=heure;
    this->sexe=sexe;
    this->abs=abs;
    this->rfid=rfid;


}
employe::~employe()
{}
int employe::Getcin() {return cin;}
void employe::Setcin(int cin){this->cin=cin;}
QString employe::Getnom(){return nom;}
void employe::Setnom(QString nom){this->nom=nom;}
QString employe::Getprenom(){return prenom;}
void employe::Setprenom(QString prenom) {this->prenom=prenom;}
int employe::Getage(){return age;}
void employe::Setage(int age){this->age=age;}
QString employe::Getsante(){return sante;}
void employe::Setsante(QString sante) {this->sante=sante;}
int employe::Getheure() {return heure;}
void employe::Setheure(int heure){this->heure=heure;}
QString employe::Getsexe(){return sexe;}
void employe::Setsexe(QString sexe) {this->sexe=sexe;}
int employe::Getabs() {return abs;}
void employe::Setabs(int abs){this->abs=abs;}
QString employe::Getrfid(){return rfid;}
void employe::Setrfid(QString rfid){this->rfid=rfid;}
bool employe::ajouter() {
    QSqlQuery query;
    QString res = QString::number(cin);

    query.prepare("INSERT INTO GS_EMPLOYE (cin, nom, prenom, age, sante, heure, sexe, abs, rfid) "
                  "VALUES (:cin, :nom, :prenom, :age, :sante, :heure, :sexe, :abs, :rfid)"); // Correction de la syntaxe
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":age", age);
    query.bindValue(":sante", sante); // Fix here, change :sante to :poste
    query.bindValue(":heure", heure);
    query.bindValue(":sexe", sexe);
    query.bindValue(":abs", abs);
    query.bindValue(":rfid", rfid);
    return query.exec();
}
bool employe::supprimer(int cin)
{
    QSqlQuery query;
    query.prepare("DELETE FROM gs_employe WHERE CIN = :cin");
    query.bindValue(":cin", cin);
    return query.exec();
}
QSqlQueryModel* employe::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT * FROM gs_employe");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("sante"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("heure"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr("sexe"));
         model->setHeaderData(7, Qt::Horizontal, QObject::tr("abs"));
         model->setHeaderData(8, Qt::Horizontal, QObject::tr("rfid"));



    return model;
}
bool employe::modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE GS_EMPLOYE SET NOM = :nom, PRENOM = :prenom, AGE = :age, SANTE = :sante, HEURE = :heure, SEXE = :sexe , rfid= :rfid WHERE CIN = :cin");
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":age", age);
    query.bindValue(":sante", sante);
    query.bindValue(":heure",heure);
    query.bindValue(":sexe",sexe);
    query.bindValue(":abs",abs);
    query.bindValue(":rfid",rfid);
    return query.exec();


}
QSqlQueryModel * employe::tri_cin()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from GS_EMPLOYE order by cin");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sante"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("heure"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("abs"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("rfid"));

    return model;


}
QSqlQueryModel * employe::tri_age()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from GS_EMPLOYE order by age");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sante"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("heure"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("abs"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("rfid"));




    return model;


}
QSqlQueryModel * employe::tri_nom()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM GS_EMPLOYE ORDER BY nom");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sante"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("heure"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("abs"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("rfid"));

    return model;
}
QSqlQueryModel * employe::tri_prenom()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM GS_EMPLOYE ORDER BY prenom");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sante"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("heure"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("abs"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("rfid"));

    return model;
}
QSqlQueryModel * employe::rechercher(int cin)
{
    QSqlQueryModel* model = new QSqlQueryModel();

        QSqlQuery query;
        query.prepare("SELECT * FROM GS_EMPLOYE WHERE CIN = :cin");
        query.bindValue(":cin", cin);
        query.exec();

        model->setQuery(query);
        return model;
}
bool employe::exporterPDF(const QString &fileName, QSqlQueryModel *model) {
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    if (!printer.isValid()) {
        QMessageBox::warning(nullptr, "Erreur", "Impossible d'initialiser l'imprimante PDF.");
        return false;
    }

    QTextDocument doc;
    QTextCursor cursor(&doc);

    // Écrire les données du modèle dans le document
    int rowCount = model->rowCount();
    int colCount = model->columnCount();

    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < colCount; ++col) {
            QString data = model->data(model->index(row, col)).toString();
            cursor.insertText(data + "\t");
        }
        cursor.insertText("\n");
    }

    // Print the document to the PDF file
    doc.print(&printer);

    return true;
}
employe employe::employe_du_mois()
{
   QSqlQuery query;
          query.prepare("SELECT * FROM GS_EMPLOYE ORDER BY abs, heure DESC");

          if (!query.exec()) {
              qDebug() << "Erreur :" << query.lastError().text();
              return employe(); // Retourne un employé par défaut
          }

          if (query.next()) {
              int cin = query.value(0).toInt();
              QString nom = query.value(1).toString();
              QString prenom = query.value(2).toString();
              int age = query.value(3).toInt();
              QString sante = query.value(4).toString();
              int heure = query.value(5).toInt();
              QString sexe = query.value(6).toString();
              int abs = query.value(7).toInt();
              QString rfid = query.value(8).toString();
              employe emp(cin, nom, prenom,age,sante,heure,sexe,abs,rfid);

              return emp;
          } else {
              qDebug() << "Aucun employé trouvé.";

              return employe();
          }
}
double employe::calculerPrime()
{
    const int heuresNormales = 40;
    const double tauxHoraireSupplementaire = 3;

    // Logique de calcul du prime
    int heuresTravaillees = Getheure(); // Supposons que getHeure() renvoie le nombre total d'heures travaillées

    // Calcul des heures supplémentaires
    int heuresSupplementaires = qMax(heuresTravaillees - heuresNormales, 0);

    // Calcul du prime
    double prime = heuresSupplementaires * tauxHoraireSupplementaire;

    return prime;
}
QString employe::chatBotResponse(const QString &question)
{
    QSqlQuery query;

    if (question.contains("bonjour", Qt::CaseInsensitive)) {
        return "Bonjour ! Comment puis-je vous aider ?";
    } else if (question.contains("comment ça va", Qt::CaseInsensitive)) {
        return "Je suis un programme, je n'ai pas de sentiments, mais merci de demander !";
    } else if (question.contains("aide", Qt::CaseInsensitive)) {
        return "En quoi puis-je vous assister aujourd'hui ?";
    } else if (question.contains("disponibilité d'une voiture", Qt::CaseInsensitive)) {
        return "Oui, nous avons des voitures disponibles. Veuillez spécifier la date et l'heure de prise en charge.";
    } else if (question.contains("tarifs de location", Qt::CaseInsensitive)) {
        return "Les tarifs de location dépendent du type de voiture et de la durée de location. Pouvez-vous préciser vos besoins ?";
    } else if (question.contains("entretien des véhicules", Qt::CaseInsensitive)) {
        return "Nos véhicules sont régulièrement entretenus pour assurer leur bon fonctionnement et votre sécurité.";
    } else if (question.contains("comment réserver", Qt::CaseInsensitive)) {
        return "Vous pouvez réserver une voiture en ligne sur notre site web ou en nous appelant au numéro xxx-xxxx.";
    } else if (question.contains("suivi de réservation", Qt::CaseInsensitive)) {
        return "Vous pouvez suivre l'état de votre réservation en ligne sur notre site web ou en nous appelant.";
    } else if (question.contains("les heures de travail", Qt::CaseInsensitive)) {
        return "De 07:00 à 17:00";
    } else if (question.contains("modèles de voitures disponibles", Qt::CaseInsensitive)) {
        return "Nous proposons une variété de modèles, y compris des économiques, des familiales et des voitures de luxe. Consultez notre site web pour la liste complète.";
    } else if (question.contains("combien il y a d'employes", Qt::CaseInsensitive)) {
        if (query.exec("SELECT COUNT(*) FROM gs_employe")) {
            query.next();
            int nombreEmployes = query.value(0).toInt();
            return "Il y a " + QString::number(nombreEmployes) + " employés dans l'entreprise.";
        } else {
            return "Erreur lors de la récupération des informations sur les employés.";
        }
    } else if (question.contains("combien de femmes", Qt::CaseInsensitive)) {
        if (query.exec("SELECT COUNT(*) FROM gs_employe WHERE sexe = 'femme'")) {
            query.next();
            int nombreFemmes = query.value(0).toInt();
            return "Il y a " + QString::number(nombreFemmes) + " femmes dans l'entreprise.";
        } else {
            return "Erreur lors de la récupération des informations sur les femmes.";
        }
    } else if (question.contains("combien d'hommes", Qt::CaseInsensitive)) {
        if (query.exec("SELECT COUNT(*) FROM gs_employe WHERE sexe = 'homme'")) {
            query.next();
            int nombreHommes = query.value(0).toInt();
            return "Il y a " + QString::number(nombreHommes) + " hommes dans l'entreprise.";
        } else {
            return "Erreur lors de la récupération des informations sur les hommes.";
        }
    } else if (question.contains("combien d'employés de plus de 25 ans", Qt::CaseInsensitive)) {
        if (query.exec("SELECT COUNT(*) FROM gs_employe WHERE age > 25")) {
            query.next();
            int nombreEmployes25Plus = query.value(0).toInt();
            return "Il y a " + QString::number(nombreEmployes25Plus) + " employés de plus de 25 ans dans l'entreprise.";
        } else {
            return "Erreur lors de la récupération des informations sur les employés de plus de 25 ans.";
        }
    } else if (question.contains("informations sur l'employé avec le cin", Qt::CaseInsensitive)) {
        // Extract the cin from the question
        QRegularExpression cinRegex("(\\d+)");
        QRegularExpressionMatch match = cinRegex.match(question);

        if (match.hasMatch()) {
            int targetCIN = match.captured(1).toInt();

            // Query to find information about the employee with the specified CIN
            if (query.exec(QString("SELECT * FROM gs_employe WHERE cin = %1").arg(targetCIN))) {
                if (query.next()) {
                    int cin = query.value("cin").toInt();
                    QString nom = query.value("nom").toString();
                    QString prenom = query.value("prenom").toString();
                    int age = query.value("age").toInt();
                    QString poste = query.value("poste").toString();
                    int heure = query.value("heure").toInt();
                    QString sexe = query.value("sexe").toString();
                    int abs = query.value("abs").toInt();
                    int mdp = query.value("mdp").toInt();
                    int rfid = query.value("rfid").toInt();

                    // Construct the response message
                    QString employeeInfo = "Informations sur l'employé avec le CIN " + QString::number(cin) + " :\n"
                                           "No m: " + nom + "\n"
                                           "Prénom : " + prenom + "\n"
                                           "Âge: " + QString::number(age) + " ans\n"
                                           "Heure de travail ce mois : " + QString::number(heure) + " heures\n"
                                           "Sexe: " + sexe + "\n"
                                           "Jour Absences : " + QString::number(abs);
                      "mdp : " + QString::number(mdp);
                    "rfid : " + QString::number(rfid);

                    return employeeInfo;
                } else {
                    return "Aucun employé trouvé avec le CIN " + QString::number(targetCIN) + ".";
                }
            } else {
                return "Erreur lors de la récupération des informations sur l'employé.";
            }
        } else {
            return "Désolé, je n'ai pas pu extraire le CIN de votre question.";
        }
    } else if (question.contains("quels employés ont l'âge", Qt::CaseInsensitive)) {
        // Extract the age from the question
        QRegularExpression ageRegex("(\\d+)");
        QRegularExpressionMatch match = ageRegex.match(question);

        if (match.hasMatch()) {
            int targetAge = match.captured(1).toInt();

            // Query to find employees with the specified age
            if (query.exec(QString("SELECT nom, prenom FROM gs_employe WHERE age = %1").arg(targetAge))) {
                            QStringList employeeList;
                            while (query.next()) {
                                QString nom = query.value("nom").toString();
                                QString prenom = query.value("prenom").toString();
                                employeeList << prenom + " " + nom;
                            }
                            if (!employeeList.isEmpty()) {
                                return "Les employés ayant l'âge de " + QString::number(targetAge) + " ans sont : " + employeeList.join(", ");
                            } else {
                                return "Aucun employé trouvé avec l'âge de " + QString::number(targetAge) + " ans.";
                            }
                        } else {
                            return "Erreur lors de la récupération des informations sur les employés.";
                        }
                    } else {
                        return "Désolé, je n'ai pas pu extraire l'âge de votre question.";
                    }
                } else if (question.contains("employé du mois", Qt::CaseInsensitive)) {
                    employe employeeOfTheMonth = employe::employe_du_mois();

                    // Check if the employee of the month is valid (not default)
                    if (employeeOfTheMonth.Getcin() != 0) {
                        QString nom = employeeOfTheMonth.Getnom();
                        QString prenom = employeeOfTheMonth.Getprenom();
                        int cin = employeeOfTheMonth.Getcin();

                        return "L'employé du mois est : " + prenom + " " + nom + " (CIN: " + QString::number(cin) + ").";
                    } else {
                        return "Aucun employé du mois trouvé.";
                    }
                } else {
                    return "Désolé, je ne comprends pas. Pouvez-vous reformuler votre question ou spécifier un sujet lié à la gestion de flotte de véhicules ?";
                }
            }
bool employe::exporterWord(const QString &fileName, QSqlQueryModel *model) {
    QTextDocument doc;

    // Write the data from the model to the document
    int rowCount = model->rowCount();
    int colCount = model->columnCount();

    QTextCursor cursor(&doc);

    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < colCount; ++col) {
            QString data = model->data(model->index(row, col)).toString();
            cursor.insertText(data + "\t");
        }
        cursor.insertText("\n");
    }

    // Write the document to the Word file
    QTextDocumentWriter writer(fileName);
    writer.setFormat("odt");  // Use "odt" for OpenDocument Text format

    if (writer.write(&doc)) {
        return true;
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Échec de l'exportation en document Word.");
        return false;
    }
}
