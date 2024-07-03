#include "registrationlistreader.h"
#include "studentregistration.h"
#include "guestregistration.h"
#include "registrationfactory.h"
#include <QFile>
#include <QXmlStreamReader>
#include <QDomDocument>

RegistrationListReader::RegistrationListReader(QObject *parent) : QObject(parent)
{}

QList<Registration*> RegistrationListReader::readRegistrations(const QString &filePath)
{
    QList<Registration*> registrations;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading: " << file.errorString();
        return registrations;
    }

    QDomDocument doc;
    doc.setContent(&file);
    QDomElement root = doc.documentElement();
    QDomNodeList registrationsDom = root.elementsByTagName("registration");



    for(int i = 0; i < registrationsDom.count(); i++){
        QDomNode registrationNode = registrationsDom.at(i);
        QDomElement registrationElement = registrationNode.toElement();
        QDomNodeList attendeeList = registrationElement.elementsByTagName("attendee");

        QDomNode attendeeNode = attendeeList.at(0);
        QDomElement attendeeElement = attendeeNode.toElement();

        QString name = attendeeElement.elementsByTagName("name").at(0).toElement().text();
        QString affiliation = attendeeElement.elementsByTagName("affiliation").at(0).toElement().text();
        QString email = attendeeElement.elementsByTagName("email").at(0).toElement().text();


        RegistrationFactory f;

        // Person *personPtr = new Person(name, affiliation, email);

        // Registration *registrationPtr;

        // if(affiliation == "student" || affiliation == "Student"){
        //     registrationPtr = new StudentRegistration(personPtr, "Bachelors");
        // }else if(affiliation == "guest" || affiliation == "Guest"){
        //     registrationPtr = new GuestRegistration(personPtr, "VIP");
        // }else {
        //     registrationPtr = new Registration(personPtr);
        // }

        registrations.append(f.create(name, affiliation, email));

    }

    return registrations;

}
