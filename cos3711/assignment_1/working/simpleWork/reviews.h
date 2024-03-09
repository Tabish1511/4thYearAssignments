#ifndef REVIEWS_H
#define REVIEWS_H
#include <QList>
#include "review.h"

#include <QObject>

class Reviews : public QObject
{
    Q_OBJECT
public:
    explicit Reviews(QObject *parent = nullptr);
    Reviews();
    void addToList(Review *reviewP);
    QString getList();
private:
    QList<Review*> reviewList;
};

#endif // REVIEWS_H
