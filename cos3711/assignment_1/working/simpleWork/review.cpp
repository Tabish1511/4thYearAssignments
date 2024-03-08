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

void Review::getName()
{
    std::cout << "The name was set: " << name.toStdString() << "\n";
}
