#ifndef BOOK_H
#define BOOK_H

#include <QObject>
#include <QDate>

class Book : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title MEMBER title)
    Q_PROPERTY(QStringList authors MEMBER authors)
    Q_PROPERTY(QString isbn MEMBER isbn)
    Q_PROPERTY(QDate publicationDate MEMBER publicationDate)

public:
    // Constructors
    Book(QObject *parent = nullptr);
    Book(QString t, QStringList a, QString i, QDate p, QObject *parent = nullptr);

    // Setters
    void setTitle(QString t);
    void setAuthors(QStringList a);
    void setIsbn(QString i);
    void setPublicationDate(QDate p);

    // Getters
    QString getTitle();
    QStringList getAuthors();
    QString getIsbn();
    QDate getPublicationDate();

    // Other functions
    QString obtainBookInfo();
    void saveBook(Book& b);

private:
    QString title;
    QStringList authors;
    QString isbn;
    QDate publicationDate;
};

#endif // BOOK_H
