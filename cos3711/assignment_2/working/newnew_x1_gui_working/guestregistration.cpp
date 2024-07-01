#include "guestregistration.h"

GuestRegistration::GuestRegistration(QObject *parent)
    : Registration{parent}
{}

double GuestRegistration::calculateFee()
{
    return STANDARD_FEE*0.10;
}

QString GuestRegistration::toString() const
{
    return getAttendee()->toString() + "Qualification: " + m_Category;
}
