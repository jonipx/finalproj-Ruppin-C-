#include <iostream>
#include <exception>
using namespace std;

//class Exceptions derived from public library <exception> class exception
//destined to be an alert of warnings while running
class Exceptions :public exception
{
	//our exceptions:
	virtual const char* Date_Exception() const throw()//if the date check will fail we'll throw Date_Exception error
	{
		return "Date exception happened";
	}
	//we will also have name and long documents exceptions also
};