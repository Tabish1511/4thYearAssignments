#include "bookwriter.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStandardPaths>

BookWriter::BookWriter(Book *b) : m_Book(b) {}

void BookWriter::saveBook()
{
    // Get the path to the Desktop directory
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
