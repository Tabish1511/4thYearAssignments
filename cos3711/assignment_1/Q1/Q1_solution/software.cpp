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

// QString Software::getSoftware() {
//     QString info;
//     // Formulate the string containing information about the software
//     info.append("Name: ").append(name).append("\n");
//     info.append("Date: ").append(date.toString("yyyy-MM-dd")).append("\n");
//     info.append("Recommend: ").append(recommend ? "True" : "False").append("\n");
//     return info;
// }

void Software::getSoftware() {
    qDebug() << "Name: " << name;
    qDebug() << "Date: " << date.toString("yyyy-MM-dd");
    qDebug() << "Recommend: " << recommend;
}

