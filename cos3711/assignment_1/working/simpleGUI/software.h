#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <QObject>
#include <QDate>

class Software : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName)
    Q_PROPERTY(QDate date READ getDate)
    Q_PROPERTY(bool recommend READ isRecommended)

public:
    explicit Software(QObject *parent = nullptr);
    Software(QString nameP, QDate dateP, bool recommendP);

    // Getter functions for properties
    QString getName() const { return name; }
    QDate getDate() const { return date; }
    bool isRecommended() const { return recommend; }

    void getSoftware();

private:
    QString name;
    QDate date;
    bool recommend;
};

#endif // SOFTWARE_H
