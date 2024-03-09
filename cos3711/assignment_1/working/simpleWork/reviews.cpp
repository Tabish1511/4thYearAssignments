#include "reviews.h"

Reviews::Reviews(QObject *parent)
    : QObject{parent}
{}

Reviews::Reviews()
{
    reviewList = QList<Review*>();
}

void Reviews::addToList(Review *reviewP)
{
    reviewList.append(reviewP);
}

QString Reviews::getList()
{
    QString output = "";
    for(int i = 0; i < reviewList.size(); i++){
        output += reviewList[i]->getName();
        output += "\n";
    }

    return output;
}

