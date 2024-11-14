#pragma once
#include <iostream>
//#include "Date.hpp"
//#include "Time.hpp"
#include "Date.h"
#include "Time.h"

using namespace std;

class AirQuality
{
public:
	// Default constructor
	AirQuality();

	// Specific constructor - with compostion of class of Date and Time
	AirQuality(int mmonth, int dday, int yyear, int hhour, int mminute, int ssecond, double ttemp, double aabsHumidity, double rrelHumidity);

	// Mutators or Setters
	void setDate(Date);
	void setTime(Time);
	void setTemp(double);
	void setAbsHumidity(double);
	void setRelHumitity(double);
	void setDTTAR(int mmonth, int dday, int yyear, int hhour, int mminute, int ssecond, double ttemp, double aabsHumidity, double rrelHumidity);

	// Accessor or Getter
	Date getDate() const; // ??
	Time getTime() const; // ??
	double getTemp() const;
	double getAbsHumidity() const;
	double getRelHumidity() const;

	// print method
	void print() const;



private:
	Date D1;
	Time T1;
	double temp;
	double absHumidity;
	double relHumidity;



};

