#include "Author.h"

Author::Author()//empty contuctor and defin name as NULL
{
	name = NULL;
}

Author::Author(char* t_name, Date t_DOB) :name(t_name), DOB(t_DOB)//constractor and define the variabels
{
}

Author::Author(const Author & tmp)//copy constractor
{
	*this = tmp;
}
Author::~Author() //distractor
{
	delete[] name;
}

bool Author::operator==(Author & other)//compare if all the variables are match   we will use the operato == from Date with friend relation
{
	return ((name == other.name) && (DOB.getDay() == other.DOB.getDay()) && (DOB.getMonth() == other.DOB.getMonth()) && (DOB.getYear() == other.DOB.getYear()));
	return false;
}

void Author::setName(char * Tname)//define name
{
	delete[] this->name;
	this->name = new char[strlen(Tname) + 1];
	strcpy_s(this->name, strlen(Tname) + 1, Tname);
}

ostream & operator<<(ostream & out, const Author & print) //print operator for name and print the date
{
	out << "\nName: " << print.name << endl;	out << "Date:: " << print.DOB << endl;	return out;
}
