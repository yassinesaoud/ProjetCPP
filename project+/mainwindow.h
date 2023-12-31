#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void on_pb_ajouter_clicked();

    void on_supp_clicked();


    void on_modifier_clicked();

private:
    Ui::MainWindow *ui;
    Trajets T;
};

#endif // MAINWINDOW_H
