#include "Talking_book.h"

Talking_book::Talking_book()
{
    tapes = 0;
}

Talking_book::Talking_book(int tapes, Book book, Recording recording) : Book(book), Recording(recording)
{
    this->tapes = tapes;
}

void Talking_book::setTapes(int tapes)
{
    this->tapes = tapes;
}

int Talking_book::getTapes() const
{
    return tapes;
}

void Talking_book::showInfo() const
{
    cout << "All info:\n";
    Book::showInfo();
    Recording::showInfo();
    cout << "Amount of tapes: " << tapes << endl;
}
