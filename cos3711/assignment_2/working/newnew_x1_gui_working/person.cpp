#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{}

Person::Person(QString n, QString a, QString e)
{
    m_Name = n;
    if(a == ""){
        m_Affiliation = "standard";
    }else{
        m_Affiliation = a;
    }
    m_Email = e;
}

QString Person::getName()
{
    return m_Name;
}

QString Person::getAffiliation()
{
    return m_Affiliation;
}

QString Person::getEmail()
{
    return m_Email;
}

QString Person::toString()
{
    return QString("Name: %1, Affiliation: %2, Email: %3")
        .arg(m_Name)
        .arg(m_Affiliation)
        .arg(m_Email);
}
