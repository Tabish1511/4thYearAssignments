#ifndef BOOKWRITER_H
#define BOOKWRITER_H
#include "book.h"

class BookWriter
{
public:
    BookWriter(Book *b);
    void saveBook();

private:
    Book *m_Book;
};

#endif // BOOKWRITER_H
