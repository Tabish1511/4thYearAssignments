#include "mainwindow.h"
#include <iostream>
#include <string>
// #include <QDebug>

using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
