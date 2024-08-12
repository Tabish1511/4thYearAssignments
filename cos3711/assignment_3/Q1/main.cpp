#include "book.h"
#include "bookwriter.h"
#include <QApplication>
#include <QDebug>
#include <QDate>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Book book1("title1", QStringList{"tabish"}, "123", QDate::fromString("2024-08-12", "yyyy-MM-dd"));

    // qDebug() << book1.obtainBookInfo();

    BookWriter writer(&book1);

    writer.saveBook();

    return a.exec();
}
