#include "mainwindow.h"
#include <iostream>
#include <string>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    // qDebug() << "Hello Tabish!";

    return a.exec();
}
