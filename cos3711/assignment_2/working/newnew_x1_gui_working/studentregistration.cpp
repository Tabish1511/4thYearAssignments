#include "studentregistration.h"

StudentRegistration::StudentRegistration(QObject *parent)
    : Registration{parent}
{}

// StudentRegistration::StudentRegistration(Person *a, QString *q)
//     : Registration{a, parent}
// {
//     m_Attendee = a;
//     m_Qualification = q;
// }

double StudentRegistration::calculateFee()
{
    return STANDARD_FEE*0.50;
}

QString StudentRegistration::toString() const
{
    return getAttendee()->toString() + ", Qualification: " + m_Qualification;
}
