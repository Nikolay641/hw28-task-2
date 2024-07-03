#include "Book.h";
#include "Recording.h"
#include "Talking_book.h"

int main()
{
    Book a("Vasya", "Some edition", Date(2006, 1, 5), 1234567890);
    Recording b("Alex", 180, Date(2001, 11, 29));
    Talking_book c(3, a, b);
    c.showInfo();
}