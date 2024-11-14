#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std; 


// default constructor 
Time::Time()
{
	hours = -1; 
	minutes = -1; 
	seconds = -1; 
}

// specific constructor 
Time::Time(int hhour, int mminute, int ssecond)
{
	hours = hhour; 
	minutes = mminute; 
	seconds = ssecond; 
}

// Mutators or Setters
void Time::setHours(int hhour)
{
	hours = hhour; 
}

void Time::setMinutes(int mminute)
{
	minutes = mminute; 
}

void Time::setSeconds(int sseconds)
{
	seconds = sseconds; 
}

void Time::setHMS(int hhours, int mminutes, int sseconds)
{
	hours = hhours; 
	minutes = mminutes; 
	seconds = sseconds; 
}

// Accessor or Getters
int Time::getHours() const
{
	return hours; 
}

int Time::getMinutes() const
{
	return minutes; 
}

int Time::getSeconds() const
{
	return seconds; 
}


// print method 
void Time::print() const
{
	cout << "Time - " << right << setw(2) << hours << ":" << minutes << ":" << seconds << " || ";
}


bool Time::operator==(const Time& otherTime) const
{
	if (hours == otherTime.hours && minutes == otherTime.minutes
		&& seconds == otherTime.seconds)
		return true;
	else
		return false; 
}

bool Time::operator!=(const Time& otherTime) const
{
	return !(*this == otherTime); 
}

bool Time::operator<(const Time& otherTime) const
{
	if ((hours < otherTime.hours) ||
		(hours == otherTime.hours && minutes < otherTime.minutes) ||
		(hours == otherTime.hours && minutes == otherTime.minutes
			&& seconds < otherTime.minutes))
		return true;
	else
		return false; 
}


bool Time::operator<=(const Time& otherTime) const
{
	return (*this < otherTime || *this == otherTime); 
}


bool Time::operator>=(const Time& otherTime) const
{
	return !(*this < otherTime); 
}

bool Time::operator>(const Time& otherTime) const
{
	return !(*this <= otherTime); 
}

