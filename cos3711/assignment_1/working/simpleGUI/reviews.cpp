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

void Reviews::displayReviews() {
    // Loop through each software item in the list
    for (Software *software : softwareList) {
        const QMetaObject *metaObj = software->metaObject();
        qDebug() << "Review Data:";
        // Loop through each property of the Software object
        for (int i = 1; i < metaObj->propertyCount(); ++i) {
            QMetaProperty property = metaObj->property(i);
            const char *name = property.name();
            QVariant value = property.read(software);
            qDebug() << value.toString();
        }
    }

    // for(Software *software: softwareList){
    // const QMetaObject *metaObj = software->metaObject();
    // qDebug() << "Review data: ";
    // qDebug() << metaObj->propertyCount();
    // QMetaProperty property = metaObj->property(4);
    // // qDebug() << property.name();
    // const char *name = property.name();
    // // qDebug() << name;
    // QVariant value = property.read(software);
    // // qDebug() << value;
    // qDebug() << value.toString();
    // }
}

















