#include "Date.h"
#include"Exceptions.h"


const int MAX_VALID_YR = 9999;//maximum value
const int MIN_VALID_YR = 1;

Date::Date() : Date(0, 0)//intializing date values to (0,0,2022)
{
}

Date::Date(int day, char* month, int year)
{
	Date::day = day;
	Date::month = month;
	Date::year = year;
}

void Date::setDay(int day)
{
	day = day;
}

void Date::setMonth(char* month)
{
	month = month;
}

void Date::setYear(int year)
{
	year = year;
}

void Date::setDate(int day, char* month, int year)//setter for the date using other setters, checking if date values are valid and if not to throw an exception
{
	setDay(day);
	setMonth(month);
	setYear(year);
	/*try {
		isValidDate(day, month, year);
	}
	catch (DateException& e) {cout << e.what() << '\n';}*/
}

bool Date::operator==(const Date& other)const//opertor for checking if date values are equal
{
	return ((this->day == other.day) && (this->month == other.month) && (this->year == other.year));
}


bool Date::operator>(const Date& other)const//opertor for checking which date is bigger
{
	if (this->year < other.year)
		return false;
	else if (this->year > other.year)
		return true;
	if ((this->year == other.year) && (this->month < other.month))
		return false;
	else if ((this->year == other.year) && (this->month > other.month))
		return true;
	else
		return (this->day > other.day);
}


ostream& operator<<(ostream& out, const Date& tmp)
{
	out << tmp.day << "." << tmp.month << "." << tmp.year << endl;
	return out; // for multiple << operators
}

// Returns true if given year is valid.
// Return true if year is a multiple of 4 and not multiple of 100 OR year is multiple of 400.
bool Date::isLeap(int year) { return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)); }

// Returns true if given year is valid or not.
bool Date::isValidDate(int d, char* m, int y)
{
	int month = atoi(m);
	// If year, month and day are not in given range
	if (y > MAX_VALID_YR || y < MIN_VALID_YR)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (d < 1 || d > 31)
		return false;
	// Handle February month with leap year
	if (month == 2) {
		if (isLeap(y))
			return (d <= 29);
		else
			return (d <= 28);
	}
	// Months of April,June,Sept and Nov must have number of days less than or equal to 30.
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return (d <= 30);
	return true;
}
