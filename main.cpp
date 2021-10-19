#include "mainwindow.h"
#include <QApplication>
//test commit 1
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
