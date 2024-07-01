#ifndef GUESTREGISTRATION_H
#define GUESTREGISTRATION_H

#include "registration.h"

class GuestRegistration : public Registration
{
public:
    explicit GuestRegistration(QObject *parent = nullptr);
};

#endif // GUESTREGISTRATION_H
