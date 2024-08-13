#include "bookwriter.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStandardPaths>

BookWriter::BookWriter(QObject *parent)
    : QObject{parent}
{}

BookWriter::BookWriter(Book *b) : m_Book(b) {}

void BookWriter::saveBook()
{
    const QMetaObject *metaObject = m_Book->metaObject();
    int propertyCount = metaObject->propertyCount();

    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);

    QString filePath = desktopPath + "/book.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Could not open file" << filePath << "for writing";
        return;
    }

    QTextStream out(&file);

    QString bookInfo = m_Book->obtainBookInfo();
    out << bookInfo;

    qDebug() << "Book information saved to" << filePath;
}
