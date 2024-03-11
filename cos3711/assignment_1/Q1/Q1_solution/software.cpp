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

QString Software::getSoftware()
{
    QString info;
    // Formulate the string containing information about the software
    info += "Name: " + name;
    info += "Date: " + date.toString("yyyy-MM-dd");
    info += "Recommend: " + QString(recommend ? "True" : "False");
    return info;
}
