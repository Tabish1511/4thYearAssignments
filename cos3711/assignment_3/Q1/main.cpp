#include "book.h"
#include "bookwriter.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDate>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
