#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "facture.h"
#include <QTimer>


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
    void on_buttonajout_clicked();

    void on_button_sup_clicked();
    void showEvent(QShowEvent *event);

    void on_buttonajout_3_clicked();

private:
    Ui::MainWindow *ui;
    Facture f;
    QTimer *timer;
    QTimer *updateTimer;
};
#endif // MAINWINDOW_H
