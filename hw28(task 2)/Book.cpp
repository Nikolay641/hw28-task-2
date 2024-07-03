#include "Book.h"

Book::Book()
{
    author = "Empty";
    edition = "Empty";
    publicationDate = Date();
    isbn = 0;
}

Book::Book(string author, string edition, Date publicationDate, long isbn)
{
    this->author = author;
    this->edition = edition;
    this->publicationDate = publicationDate;
    this->isbn = isbn;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::setEdition(string edition)
{
    this->edition = edition;
}

void Book::setPublicationDate(Date publicationDate)
{
    this->publicationDate = publicationDate;
}

void Book::setIsbn(long isbn)
{
    this->isbn = isbn;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getEdition() const
{
    return edition;
}

Date Book::getPublicationDate() const
{
    return publicationDate;
}

long Book::getIsbn() const
{
    return isbn;
}

void Book::showInfo() const
{
    cout << "Author: " << author << endl;
    cout << "Edition: " << edition << endl;
    cout << "Publication date: " << publicationDate << endl;
    cout << "ISBN: " << isbn << endl;
}
