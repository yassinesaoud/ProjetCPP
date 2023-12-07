#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reservations.h"
#include <QtPrintSupport/QPrinter>
#include <QLabel>
#include "promotions.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modify_clicked();


   void on_pushButton_2_clicked();


    void on_le_recherche_textChanged();

    void on_pushButton_clicked();
    void on_pushButton_stat_clicked();


    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void message();
    void checkAndSendDataToArduino();


private:
    Ui::MainWindow *ui;
    Reservations R;
    Promotions P;
    Arduino A;
    QByteArray data;
    QString test;


};
class YourClass : public QObject {
    Q_OBJECT

public slots:
    void on_pb_trier_clicked() {

        // Use the sorted model in your application, for example, set it to a view or do further processing
    }

    // ... Other class members and functions

private:
    // ... Other private members and functions
};

#endif // MAINWINDOW_H
