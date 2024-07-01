#ifndef REGISTRATIONLIST_H
#define REGISTRATIONLIST_H
#include "registration.h"
#include <QObject>

class RegistrationList : public QObject
{
    Q_OBJECT
public:
    explicit RegistrationList(QObject *parent = nullptr);
    bool addRegistration(Registration *r);
    int totalRegistrations();
    QList<Registration*> getAllRegistrations() const;
    double totaltFee(QString t);

private:
    QList<Registration*> m_AttendeeList;

signals:
};

#endif // REGISTRATIONLIST_H
