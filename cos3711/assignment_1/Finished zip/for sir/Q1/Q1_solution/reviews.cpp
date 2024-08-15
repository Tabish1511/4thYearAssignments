#include "reviews.h"

Reviews::Reviews()
{

}

void Reviews::addToList(Software *softwareP)
{
    softwareList.append(softwareP);
}

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
