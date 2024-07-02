#include "registrationlistwriter.h"
#include "studentregistration.h"

RegistrationListWriter::RegistrationListWriter(QObject *parent)
    : QObject{parent}
{}

QString RegistrationListWriter::write(const RegistrationList &registrationList)
{
    QDomDocument doc = createXmlDocument(registrationList);
    return doc.toString();
}

QDomDocument RegistrationListWriter::createXmlDocument(const RegistrationList &registrationList)
{
    QDomDocument doc;
    QDomElement root = doc.createElement("registrationlist");
    doc.appendChild(root);

    const QList<Registration*> &registrations = registrationList.getAllRegistrations();
    for (const Registration *registration : registrations) {
        root.appendChild(createRegistrationElement(registration));
    }

    return doc;
}

QDomElement RegistrationListWriter::createRegistrationElement(const Registration *registration)
{
    QDomDocument doc;
    QDomElement regElem = doc.createElement("registration");
    QString type = dynamic_cast<const StudentRegistration*>(registration) ? "StudentRegistration" : "Registration";
    regElem.setAttribute("type", type);

    QDomElement attendeeElem = doc.createElement("attendee");
    QDomElement nameElem = doc.createElement("name");
    nameElem.appendChild(doc.createTextNode(registration->getAttendee()->getName()));
    QDomElement affilElem = doc.createElement("affiliation");
    affilElem.appendChild(doc.createTextNode(registration->getAttendee()->getAffiliation()));
    QDomElement emailElem = doc.createElement("email");
    emailElem.appendChild(doc.createTextNode(registration->getAttendee()->getEmail()));

    attendeeElem.appendChild(nameElem);
    attendeeElem.appendChild(affilElem);
    attendeeElem.appendChild(emailElem);

    regElem.appendChild(attendeeElem);

    QDomElement bookingDateElem = doc.createElement("bookingdate");
    bookingDateElem.appendChild(doc.createTextNode(registration->getBookingDate().toString()));
    regElem.appendChild(bookingDateElem);

    QDomElement regFeeElem = doc.createElement("registrationfee");
    regFeeElem.appendChild(doc.createTextNode(QString::number(registration->calculateFee())));
    regElem.appendChild(regFeeElem);

    return regElem;
}
