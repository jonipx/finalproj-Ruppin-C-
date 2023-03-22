#ifndef __AUTHOR_H
#define __AUTHOR_H
#include <iostream>
#include "Date.h"
using namespace std;
class Author 
{
	char *name; // the name of the author
	Date DOB; // DATE OF BIRTH of the author
public:
	Author(); //empty constractor
	Author(char* t_name, Date t_DOB); //constractor
	~Author();//distractor
	friend ostream& operator<<(ostream& out, const Author& print);//print operator
	bool operator==(Author & other);//comapre operator
	char* getName() const { return name; }//get the name
	Date getDate() const { return DOB; }//get the date of birth of the author
	void setName(char* name);//set the name of the author
};
#endif