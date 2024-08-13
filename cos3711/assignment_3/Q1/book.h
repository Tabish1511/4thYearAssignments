#ifndef BOOK_H
#define BOOK_H

#include <QObject>
#include <QDate>

class Book
{
public:
    Book(QWidget *parent = nullptr);
    Book(QString t, QStringList a, QString i, QDate p);

    void setTitle(QString t);
    void setAuthors(QStringList a);
    void setIsbn(QString i);
    void setPublicationDate(QDate p);

    QString getTitle();
    QStringList getAuthors();
    QString getIsbn();
    QDate getPublicationDate();

    QString obtainBookInfo();
    void saveBook(Book& b);


private:
    QString title;
    QStringList authors;
    QString isbn;
    QDate publicationDate;
};

#endif // BOOK_H
