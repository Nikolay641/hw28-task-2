#pragma once
#include "Book.h"
#include "Recording.h"
class Talking_book : public Book, public Recording
{
	int tapes;

public:
	Talking_book();
	Talking_book(int tapes, Book book, Recording recording);

	void setTapes(int tapes);
	int getTapes()const;

	void showInfo()const;
};

