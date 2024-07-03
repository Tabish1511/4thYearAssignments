#include "registrationfactory.h"
#include "studentregistration.h"
#include "guestregistration.h"

RegistrationFactory::RegistrationFactory(QObject *parent)
    : QObject{parent}
{}

Registration *RegistrationFactory::create(QString n, QString a, QString e)
{

    Person *personPtr = new Person(n, a, e);

    if(a == "student" || a == "Student"){
        return new StudentRegistration(personPtr, "Bachelors");
    }else if(a == "guest" || a == "Guest"){
        return new GuestRegistration(personPtr, "VIP");
    }else {
        return new Registration(personPtr);
    }
}
