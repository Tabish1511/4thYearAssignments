#include "software.h"

Software::Software(QObject *parent)
    : QObject{parent}
{}

Software::Software(QString nameP, QDate dateP, bool recommendP)
{
    name = nameP;
    date = dateP;
    recommend = recommendP;
}

void Software::getSoftware() {
    qDebug() << "Name: " << name;
    qDebug() << "Date: " << date.toString("yyyy-MM-dd");
    qDebug() << "Recommend: " << recommend;
}

