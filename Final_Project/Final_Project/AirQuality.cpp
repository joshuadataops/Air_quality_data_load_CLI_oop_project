//#include "AirQuality.hpp"
//#include "Date.hpp"
//#include "Time.hpp"

#include "AirQuality.h"
#include "Date.h"
#include "Time.h"

#include <iostream>
using namespace std;

// Default constructor
AirQuality::AirQuality()
{
	// only have to set the date members specified in the AirQuality Calss
	temp = -1.0;
	absHumidity = -1.0;
	relHumidity = -1.0;
}

// Specific constructor
AirQuality::AirQuality(int mmonth, int dday, int yyear, int hhour, int mminute, int ssecond, double ttemp, double aabsHumidity, double rrelHumidity) :D1(mmonth, dday, yyear), T1(hhour, mminute, ssecond)
{
	//D1 = D1; - automatically calls the constructor:
	//T1 = T1; - automatically calls the constructor:
	temp = ttemp;
	absHumidity = aabsHumidity;
	relHumidity = rrelHumidity;
}

// Mutators or Setters
void AirQuality::setDate(Date dd1)
{
	D1 = dd1;
}

void AirQuality::setTime(Time tt1)
{
	T1 = tt1;
}

void AirQuality::setTemp(double ttemp)
{
	temp = ttemp;
}

void AirQuality::setAbsHumidity(double aabsHumidity)
{
	absHumidity = aabsHumidity;
}

void AirQuality::setRelHumitity(double rrelHumidity)
{
	relHumidity = rrelHumidity;
}

void AirQuality::setDTTAR(int mmonth, int dday, int yyear, int hhour, int mminute, int ssecond, double ttemp, double aabsHumidity, double rrelHumidity)
{
	D1.setMDY(mmonth, dday, yyear);
	T1.setHMS(hhour, mminute, ssecond);
	temp = ttemp;
	absHumidity = aabsHumidity;
	relHumidity = rrelHumidity;
}

// Accessor or Getter
Date AirQuality::getDate() const
{
	return D1;
}

Time AirQuality::getTime() const
{
	return T1;
}

double AirQuality::getTemp() const
{
	return temp;
}

double AirQuality::getAbsHumidity() const
{
	return absHumidity;
}

double AirQuality::getRelHumidity() const
{
	return relHumidity;
}


void AirQuality::print() const
{
	D1.print();
	T1.print();
	cout << "Temperature: " << temp << endl;
	cout << "Relative Humidity: " << relHumidity << endl;
	cout << "Absolute Humitity: " << absHumidity << endl;

}

