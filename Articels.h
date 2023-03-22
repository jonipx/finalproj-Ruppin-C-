#ifndef ARTICALS_H
#define ARTICALS_H
#include "Document.h"
#include "Date.h"
#include "Author.h"
#include <list>//list library for the authors inside each artical
using namespace std;

//class artical derived from Document
class Articals :protected Document
{
	std::list<Author> AuthorList;//list of authors inside each artical
	float price;//price for each artical
	Date DOP;//DOP-Date Of Publication

};
#endif