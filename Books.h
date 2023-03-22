#ifndef BOOKS_H
#define BOOKS_H
#include "Document.h"
#include "Author.h"
//class Books is derived from class Documents
class Books :protected Document
{
	Author details;//name and date of birth
	float price;//price of the book
	Date DOP;//DOP-Date Of Publication

	Books() {};//empty contructor
	Books(Author details, float price, Date DOP);//full contructor
	Author getDetails()const { return details; }
	float getPrice()const { return price; }
	Date getDate()const { return DOP; }
	void setPrice(float price);//set price
	void setDetail(Author details);//set author details using method from author object
	void setDOP(Date DOP);//set DOP using setDate method from Date object



};
#endif