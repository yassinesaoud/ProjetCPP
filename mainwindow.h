#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"employe.h"

#include <QMainWindow>

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
    void on_pushButton_ajouter_clicked();

    void on_pushButton_supp_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_chercher_clicked();

private:
    Ui::MainWindow *ui;
    employe e;
    employe E;
};
#endif // MAINWINDOW_H
