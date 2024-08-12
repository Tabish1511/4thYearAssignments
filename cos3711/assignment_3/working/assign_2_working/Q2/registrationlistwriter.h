#ifndef REGISTRATIONLISTWRITER_H
#define REGISTRATIONLISTWRITER_H

#include "registrationlist.h"
#include <QObject>
#include <QDomDocument>

class RegistrationListWriter : public QObject
{
    Q_OBJECT
public:
    explicit RegistrationListWriter(QObject *parent = nullptr);
    QString write(const RegistrationList &registrationList);

private:
    QDomDocument createXmlDocument(const RegistrationList &registrationList);
    QDomElement createRegistrationElement(const Registration *registration);
};

#endif // REGISTRATIONLISTWRITER_H
