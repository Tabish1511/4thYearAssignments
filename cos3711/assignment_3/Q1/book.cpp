#include "book.h"

Book::Book(QString t, QStringList a, QString i, QDate p) :title(t), authors(a), isbn(i), publicationDate(p)
{
}

QString Book::getTitle()
{
    return title;
}

QStringList Book::getAuthors()
{
    return authors;
}

QString Book::getIsbn()
{
    return isbn;
}

QDate Book::getPublicationDate()
{
    return publicationDate;
}

QString Book::obtainBookInfo()
{
    return QString("Title: %1\nISBN: %2\nPublication Date: %3\nAuthors: %4")
        .arg(title)
        .arg(isbn)
        .arg(publicationDate.toString("yyyy-MM-dd"))
        .arg(authors.join(", "));
}
