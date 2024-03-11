#include "reviews.h"

// Reviews::Reviews(QObject *parent)
//     : QObject{parent}
// {}

Reviews::Reviews()
{

}

void Reviews::addToList(Software *softwareP)
{
    softwareList.append(softwareP);
}

// void Reviews::getList()
// {
//     QString output = "";
//     for(int i = 0; i < softwareList.size(); i++){
//         output += softwareList[i]->getSoftware();
//         output += "\n";
//         output += "\n";
//     }

//     qDebug() << output;
// }

// void Reviews::getList()
// {
//     for(int i = 0; i < softwareList.size(); i++){
//         qDebug() << softwareList[i]->getSoftware();
//         qDebug() << "\n";
//     }
// }

void Reviews::getList()
{
    for(int i = 0; i < softwareList.size(); i++){
        softwareList[i]->getSoftware();
        qDebug() << "\n";
    }
}

void Reviews::clearList()
{
    softwareList.clear();
}
