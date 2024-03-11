#ifndef REVIEWS_H
#define REVIEWS_H
#include <QList>
#include <QObject>
#include "software.h"

class Reviews : public QObject
{
    Q_OBJECT
public:
    // explicit Reviews(QObject *parent = nullptr);
    Reviews();
    void addToList(Software *softwareP);
    void getList();
    void clearList();
private:
    QList <Software*> softwareList;
signals:
};

#endif // REVIEWS_H
