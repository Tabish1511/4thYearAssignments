#ifndef REGISTRATIONFACTORY_H
#define REGISTRATIONFACTORY_H
#include "registration.h"

#include <QObject>

class RegistrationFactory : public QObject
{
    Q_OBJECT
public:
    explicit RegistrationFactory(QObject *parent = nullptr);
    Registration* create(QString n, QString a, QString e);

signals:
};

#endif // REGISTRATIONFACTORY_H
