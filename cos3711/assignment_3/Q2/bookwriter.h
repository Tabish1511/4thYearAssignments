#ifndef BOOKWRITER_H
#define BOOKWRITER_H
#include "book.h"
#include <QObject>

class BookWriter : public QObject
{
    Q_OBJECT
public:
    explicit BookWriter(QObject *parent = nullptr);
    BookWriter(Book *b);
    void saveBook();
private:
    Book *m_Book;
signals:
};

#endif // BOOKWRITER_H
