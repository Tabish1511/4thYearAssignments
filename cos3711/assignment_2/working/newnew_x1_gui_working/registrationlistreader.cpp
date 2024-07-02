#include "registrationlistreader.h"
#include <QFile>
#include <QXmlStreamReader>

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

    QXmlStreamReader xmlReader(&file);

    while (!xmlReader.atEnd() && !xmlReader.hasError()) {
        QXmlStreamReader::TokenType token = xmlReader.readNext();

        if (token == QXmlStreamReader::StartElement && xmlReader.name() == QString("registration")) {
            Registration *registration = new Registration();

            // Parse attributes or child elements as needed
            QXmlStreamAttributes attributes = xmlReader.attributes();
            if (attributes.hasAttribute("type")) {
                QString type = attributes.value("type").toString();
                // Handle different types if necessary
            }

            // Example: Parse child elements
            while (!(xmlReader.tokenType() == QXmlStreamReader::EndElement && xmlReader.name() == QString("registration"))) {
                if (xmlReader.tokenType() == QXmlStreamReader::StartElement) {
                    if (xmlReader.name() == QString("attendee")) {
                        // Parse attendee details
                        // Example: QString name = xmlReader.readElementText();
                    } else if (xmlReader.name() == QString("bookingdate")) {
                        // Parse booking date
                    } else if (xmlReader.name() == QString("registrationfee")) {
                        // Parse registration fee
                    }
                    // Add more parsing logic as needed
                }
                xmlReader.readNext();
            }

            registrations.append(registration);
        }
    }

    if (xmlReader.hasError()) {
        qDebug() << "XML Error: " << xmlReader.errorString();
    }

    file.close();

    return registrations;
}
