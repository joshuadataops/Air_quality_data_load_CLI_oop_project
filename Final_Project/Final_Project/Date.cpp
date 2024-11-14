
#include "Date.h"
#include <iostream>
#include <iomanip>

using namespace std; 


// Constructor - default 
Date::Date()
{
	day = -1; 
	month = -1; 
	year = -1000; 
}

// Constructor - specfic 
Date::Date(int mmonth, int dday, int yyear)
{
	day = dday; 
	month = mmonth; 
	year = yyear; 
}


// Mutators or Setters
void Date::setDay(int dday)
{
	day = dday; 
}

void Date::setMonth(int mmonth)
{
	month = mmonth; 
}
void Date::setYear(int yyear)
{
	year = yyear; 
}

void Date::setMDY(int dday, int mmonth, int yyear)
{
	month = mmonth; 
	day = dday;
	year = yyear; 
}

// Accessor or Getters 
int Date::getDay() const
{
	return day; 
}

int Date::getMonth() const
{
	return month; 
}

int Date::getYear() const
{
	return year; 
}

void Date::print() const
{
	cout << "Date - " << month << "-" << right << setw(2) << day << "-" << year << " || ";
}

bool Date::operator==(const Date& otherDate) const
{
	if (day == otherDate.day && month == otherDate.month
		&& year == otherDate.year)
		return true;
	else
		return false;
}

bool Date::operator!=(const Date& otherDate) const
{
	return !(*this == otherDate);
}

bool Date::operator<(const Date& otherDate) const
{
	if ((year < otherDate.year) ||
		(year == otherDate.year && month < otherDate.month) ||
		(year == otherDate.year && month == otherDate.month
			&& day < otherDate.day))
		return true;
	else
		return false;
}


bool Date::operator<=(const Date& otherDate) const
{
	return (*this < otherDate || *this == otherDate);
}

bool Date::operator>=(const Date& otherDate) const
{
	return !(*this < otherDate);
}

bool Date::operator>(const Date& otherDate) const
{
	return !(*this <= otherDate);
}
