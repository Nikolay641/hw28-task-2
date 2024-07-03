#pragma once
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

class Book
{
	string author;
	string edition;
	Date publicationDate;
	long isbn;
public:
	Book();
	Book(string author, string edition, Date publicationDate, long isbn);

	void setAuthor(string author);
	void setEdition(string edition);
	void setPublicationDate(Date publicationDate);
	void setIsbn(long isbn);

	string getAuthor()const;
	string getEdition()const;
	Date getPublicationDate()const;
	long getIsbn()const;

	void showInfo()const;
};

