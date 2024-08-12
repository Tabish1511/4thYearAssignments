#include "book.h"
#include "./ui_book.h"

// Constructor with QWidget parent
Book::Book(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Book)  // Initialize ui member
{
    ui->setupUi(this);
}

// Constructor with title, authors, isbn, and publication date
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

// void Book::obtainBookInfo()
// {
//     // Display title
//     qDebug() << "Title: " << title;

//     // Display ISBN
//     qDebug() << "ISBN: " << isbn;

//     // Display publication date
//     qDebug() << "Publication Date: " << publicationDate.toString("yyyy-MM-dd");

//     // Display authors (each author on a new line)
//     qDebug() << "Authors: ";
//     for(const QString &author : authors) {
//         qDebug() << "  -" << author;
//     }
// }

QString Book::obtainBookInfo()
{
    return QString("Title: %1\nISBN: %2\nPublication Date: %3\nAuthors: %4")
        .arg(title)
        .arg(isbn)
        .arg(publicationDate.toString("yyyy-MM-dd"))
        .arg(authors.join(", "));
}


// Destructor
Book::~Book()
{
    delete ui; // Ensure proper cleanup of ui if it was initialized
}
