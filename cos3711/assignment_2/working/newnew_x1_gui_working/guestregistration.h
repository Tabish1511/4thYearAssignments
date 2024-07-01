#ifndef GUESTREGISTRATION_H
#define GUESTREGISTRATION_H

#include "registration.h"

class GuestRegistration : public Registration
{
public:
    explicit GuestRegistration(QObject *parent = nullptr);
    GuestRegistration(Person *a, QString q):Registration(a), m_Category(q){};
    double calculateFee();


private:
    QString m_Category;
};

#endif // GUESTREGISTRATION_H
