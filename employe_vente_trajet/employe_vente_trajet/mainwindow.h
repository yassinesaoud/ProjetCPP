#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"employe.h"
#include "arduino.h"
#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts>
#include "ventevehicule.h"
#include <QTimer>
#include <QTableWidget>
#include"trajets.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

   void on_pushButton_ajouter_employe_clicked();
   void on_pushButton_supp_employe_clicked();
   void on_pushButton_modifier_employe_clicked();
   void on_pushButton_tri_id_employe_clicked();
   void on_pushButton_tri_age_employe_clicked();
   void on_pushButton_chercher_employe_clicked();
   void on_pushButton_rechercher_employe_clicked();
   void on_pushButton_PDF_clicked();
   void on_pushButton_employe_de_moit_employe_clicked();
   void on_pushButton_statstique_employe_clicked();
   void on_pushButton_chat_employe_clicked();
   void on_pushButton_OuvrirBlocNote_employe_clicked();
   void on_pushButton_age_statistique_employe_clicked();
   void on_pushButton_abs_statistique_employe_clicked();
   void on_pushButton_Word_clicked();
   void on_pushButton_heure_statistique_employe_clicked();
   void on_pushButton_tri_nom_employe_clicked();
   void on_pushButton_tri_prenom_employe_clicked();
   void on_pushButton_calculer_prime_employe_clicked();
   void on_pushButton_showQuestions_employe_clicked();
   void on_pushButton_conn_2_clicked();
   void on_pushButton_disconnect_clicked();
   void input();
   void on_table_employe_clicked(const QModelIndex &index);

   //vente
   void on_pushButton_disconnect_2_clicked();
    void on_pb_ajouter_vente_clicked();
    void on_modifier_vente_clicked();
    void on_rechercher_vente_clicked();
    void on_exporte_vente_clicked();
    void on_tri_2_vente_clicked();
    void on_historique_vente_clicked();
    void on_stat_vente_clicked();
    void on_arduino_2_vente_clicked();
    void on_supprimer_vente_clicked();
    void on_tab_vente_clicked(const QModelIndex &index);

    //Trajet
    void on_pb_ajouter_trajet_clicked();
    void on_supp_trajet_clicked();
    void on_modifier_trajet_clicked();
    void on_exporter_trajet_2_clicked();
    void on_recherche_trajet_2_clicked();
    void on_tri_2_trajet_2_clicked();
    void on_stat_3_trajet_2_clicked();
    void on_arduino_trajet_2_clicked();
    void on_tab_trajet_clicked(const QModelIndex &index);
    void on_pushButton_disconnect_4_clicked();

private:
   QString ref;
       Ui::MainWindow *ui;
       employe e;
       QDialog *chartDialog;
       QStackedWidget *stackedWidget;
        QLabel *labelMessageSexe;
        QSqlQueryModel *model;
        Arduino a;
        int ret;
         QByteArray data;
         Ventevehicule V;
         Trajets T;

};
#endif // MAINWINDOW_H
