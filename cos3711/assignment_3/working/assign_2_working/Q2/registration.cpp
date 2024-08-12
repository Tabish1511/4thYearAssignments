#include "registration.h"

const double Registration::STANDARD_FEE = 100.00;

Registration::Registration(QObject *parent)
    : QObject{parent}
{}

Registration::Registration(Person *a)
{
    m_Attendee = a;
    m_BookingDate = QDate::currentDate();
}

Person *Registration::getAttendee() const
{
    return m_Attendee;
}

QString Registration::toString() const
{
    return m_Attendee->toString();
}

QDate Registration::getBookingDate() const
{
    return m_BookingDate;
}

double Registration::calculateFee() const
{
    return STANDARD_FEE;
}
