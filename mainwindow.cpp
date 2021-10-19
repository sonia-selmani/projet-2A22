#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_cin->setValidator( new QIntValidator(0, 99999999, this) );
   // ui->lineEdit_cin->setMaxLength(8);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_affich_clicked()
{


    Dialog2 d;
      d.setnom(ui->lineEdit_nom->text());
      d.setprenom(ui->lineEdit_prenom->text());
      d.setcin(ui->lineEdit_cin->text());

    d.exec();
}
