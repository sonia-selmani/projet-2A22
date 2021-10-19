#include "dialog2.h"
#include "ui_dialog2.h"
#include "mainwindow.h"
#include <QDebug>
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{

    ui->setupUi(this);


}


Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::setnom(QString n)
{
    ui->lineEdit_nom->setText(n);
}

void Dialog2::setprenom(QString n)
{
    ui->lineEdit_prenom->setText(n);
}
void Dialog2::setcin(QString n)
{
ui->lineEdit_cin->setText(n);
}
