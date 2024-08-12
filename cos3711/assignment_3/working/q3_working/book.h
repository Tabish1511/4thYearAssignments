#ifndef BOOK_H
#define BOOK_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui {
class Book;
}
QT_END_NAMESPACE

class Book : public QMainWindow
{
    Q_OBJECT

public:
    // Constructors
    Book(QWidget *parent = nullptr);
    Book(QString t, QStringList a, QString i, QDate p);

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
    // void obtainBookInfo();
    QString obtainBookInfo();
    void saveBook(Book& b);

    // Destructor
    ~Book();

private:
    Ui::Book *ui;
    QString title;
    QStringList authors;
    QString isbn;
    QDate publicationDate;
};

#endif // BOOK_H
