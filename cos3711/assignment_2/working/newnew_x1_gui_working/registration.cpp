#include "registration.h"

Registration::Registration(QObject *parent)
    : QObject{parent}
{}

Registration::Registration(Person *a)
{
    m_Attendee = a;
}

Person *Registration::getAttendee() const
{
    return m_Attendee;
}
