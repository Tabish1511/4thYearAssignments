#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "person.h"
#include <QObject>

class Registration : public QObject
{
    Q_OBJECT
public:
    explicit Registration(QObject *parent = nullptr);
    Registration(Person *a);
    Person *getAttendee() const;
    QString toString();

private:
    Person *m_Attendee;

signals:
};

#endif // REGISTRATION_H
