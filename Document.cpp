#include "Document.h"

Document::Document() // empty constructor and define name as NULL
{
	name = NULL;
}

long Document::id = 0; // reset the static id


Document::Document(char * t_name, long t_id, int t_words) :name(t_name),words(t_words) //constructor 
{
	id = id++;
}

Document::Document(const Document & tmp)//copy constructor
{
	*this = tmp;
}
 
Document::~Document() //distructor and subtract the static id
{
	delete[] name;
	id = id--;
}

const Document & Document::operator=(const Document & tmp) // define new documents with operator =
{
	if (this != &tmp)
	{
		setName(tmp.name);
		setWords(tmp.words);
	}
	return *this;
}


bool Document::operator==(Document & tmp) // to compare between 2 Documents
{
	return ((name == tmp.name) && (id == tmp.id) && (words == tmp.words));
}

Document & Document::operator+(const Document & o)
{
}

void Document::setName(char * Tname)// set aname to the documents
{
	delete[] this->name;
	this->name = new char[strlen(Tname) + 1];
	strcpy_s(this->name, strlen(Tname) + 1, Tname);
}

void Document::setWords(int Twords) //define the number of pages
{
	this->words = Twords;
}

bool Document::Long()// to check if there is above 1000 pages
{
	if(words>1000)
	return true;
	return false;
}


ostream & operator<<(ostream & out, const Document & print)// print all the variable in document
{
	out << "\nName: " << print.name << endl;	out << " id: " << print.id << endl;	out << " amount of words: " << print.words << endl;	return out;
}

