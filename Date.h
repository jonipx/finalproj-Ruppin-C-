#ifndef DATE_H
#define DATE_H
#define CURRENT_YEAR 2022
#include <iostream>
using namespace std;
// Date - used for Date Of Birth(DOB) or for Date Of Publication(DOP)
class Date
{
	int day;
	char* month;
	int year;
public:
	Date(int day, char* month, int year = CURRENT_YEAR);//full contructor with default year value, need to contruct place for the char* part.
	Date();//empty contructor,we'll use for contructing place for the char* value.
	~Date();//destructor,we'll use for destructing the place char* value used.
	Date(const Date& other);//duplicating contructor/
	const Date& operator=(const Date& other);//implenting inside new Date object/
	//virtual void show() const;
	//setters
	void setDate(int day, char* month, int year); //set the full date using other methods(setDay,setMonth,setYear)
	void setDay(int day);
	void setMonth(char* month);
	void setYear(int year);
	friend ostream& operator<<(ostream& out, const Date& p); //given operator
	//friend istream& operator>>(istream& in, Date& p); //given operator
	//getters
	int getDay() const { return day; }
	char* getMonth() const { return month; }
	int getYear() const { return year; }
	bool isLeap(int year); //added method we use inside another method(isValidDate)
	bool isValidDate(int d, char* m, int y); //added method to check if the date inserted is valid or not
	bool operator > (const Date& other) const; //given operator
	bool operator== (const Date& other) const; //given operator, we'll use it with friend relations
};
#endif
