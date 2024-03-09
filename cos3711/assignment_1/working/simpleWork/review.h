#ifndef REVIEW_H
#define REVIEW_H

#include <QObject>

class Review : public QObject
{
    Q_OBJECT
public:
    explicit Review(QObject *parent = nullptr);
    Review(QString nameP);
    QString getName();
private:
    QString name;
signals:

};

#endif // REVIEW_H
