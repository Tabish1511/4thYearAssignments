#include "registrationlist.h"

RegistrationList::RegistrationList(QObject *parent)
    : QObject{parent}
{}

bool RegistrationList::addRegistration(Registration *r)
{
    if (r != nullptr) {
        m_AttendeeList.append(r);
        return true;
    }
    return false;
}

int RegistrationList::totalRegistrations()
{
    return m_AttendeeList.size();
}

QList<Registration *> RegistrationList::getAllRegistrations() const
{
    return m_AttendeeList;
}

double RegistrationList::totaltFee(QString t)
{
    if(t == "standard"){
        return 100.00;
    }else if(t == "student"){
        return 50.00;
    }else{
        return 10.00;
    }
}
