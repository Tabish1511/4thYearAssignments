#include "studentregistration.h"

StudentRegistration::StudentRegistration(QObject *parent)
    : Registration{parent}
{}

double StudentRegistration::calculateFee()
{
    return STANDARD_FEE*0.50;
}

QString StudentRegistration::toString() const
{
    return getAttendee()->toString() + ", Qualification: " + m_Qualification;
}
