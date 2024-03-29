#include "reviews.h"

Reviews::Reviews()
{

}

void Reviews::addToList(Software *softwareP)
{
    softwareList.append(softwareP);
}

void Reviews::getList()
{
    for(int i = 0; i < softwareList.size(); i++){
        softwareList[i]->getSoftware();
        qDebug() << "\n";
    }
}

void Reviews::clearList()
{
    softwareList.clear();
}

QString Reviews::displayReviews() {
    QString output;
    output += "Review Data:\n";
    // Loop through each software item in the list
    for (Software *software : softwareList) {
        const QMetaObject *metaObj = software->metaObject();
        output += "\n";
        // Loop through each property of the Software object
        for (int i = 1; i < metaObj->propertyCount(); ++i) {
            QMetaProperty property = metaObj->property(i);
            const char *name = property.name();
            QVariant value = property.read(software);
            output += QString("%1: %2\n").arg(name).arg(value.toString());
        }
    }
    return output;
}
