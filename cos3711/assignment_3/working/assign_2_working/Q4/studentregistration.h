#ifndef STUDENTREGISTRATION_H
#define STUDENTREGISTRATION_H

#include "registration.h"

class StudentRegistration : public Registration
{
public:
    explicit StudentRegistration(QObject *parent = nullptr);
    StudentRegistration(Person *a, QString q):Registration(a), m_Qualification(q){};
    double calculateFee();
    QString toString() const override;

private:
    QString m_Qualification;
};

#endif // STUDENTREGISTRATION_H
