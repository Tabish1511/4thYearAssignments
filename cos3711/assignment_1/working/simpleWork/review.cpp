#include "review.h"
#include <iostream>

Review::Review(QObject *parent)
    : QObject{parent}
{}

Review::Review(QString nameP)
{
    name = nameP;
    // std::cout << "The is the review constructor!";
}

QString Review::getName()
{
    return "The name was set: " + name + "\n";
}

