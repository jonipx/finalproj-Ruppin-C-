#ifndef __DOCUMENT_H
#define __DOCUMENT_H
#include <iostream>
using namespace std;
class Document //abstract
{
protected:
	char *name;  // name document
	static long id; // seriel number
	int words; // number of pages
public:
	Document();
	Document(char* name, long id, int words);
	Document(const Document & other);
	~Document();
	const Document & operator=(const Document &other);
	friend ostream& operator<<(ostream& out, const Document& d);
	virtual void show() const = 0;
	bool operator==(Document & other);
	Document & operator+(const Document &o);
	char* getName() const { return name; }
	long getID() const { return id; }
	int getWords() const { return words; }
	void setName(char* name);
	void setWords(int words);
	bool Long(); //length over 1000 words
};
#endif