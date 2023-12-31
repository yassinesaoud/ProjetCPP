#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::setclient(client c)
{
    ui->lineEdit_cinD->setText(c.get_cin());
    ui->lineEdit_nomD->setText(c.get_nom());
    ui->lineEdit_prenomD->setText(c.get_preom());
}
