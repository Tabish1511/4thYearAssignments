#ifndef REGISTRATIONLISTREADER_H
#define REGISTRATIONLISTREADER_H

#include <QObject>
#include <QList>
#include "registration.h"

class RegistrationListReader : public QObject
{
    Q_OBJECT
public:
    explicit RegistrationListReader(QObject *parent = nullptr);
    QList<Registration*> readRegistrations(const QString &filePath);

signals:

};

#endif // REGISTRATIONLISTREADER_H
