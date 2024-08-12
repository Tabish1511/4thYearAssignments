#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "person.h"
#include <QObject>
#include <QDate>

class Registration : public QObject
{
    Q_OBJECT
public:
    explicit Registration(QObject *parent = nullptr);
    Registration(Person *a);
    Person *getAttendee() const;
    virtual QString toString() const;
    QDate getBookingDate() const;
    double calculateFee() const;

    static const double STANDARD_FEE;

private:
    Person *m_Attendee;
    QDate m_BookingDate;

signals:
};

#endif // REGISTRATION_H
