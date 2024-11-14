#pragma once
class Time
{
public: 
	// default constructor 
	Time();

	// specific constructor 
	Time(int hhour, int mminute, int ssecond);

	// Mutators or Setters
	void setHours(int);
	void setMinutes(int);
	void setSeconds(int);
	void setHMS(int, int, int);

	// Accessor or Getters
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;

	// print method 
	void print() const;

	// overloading the operators 
	bool operator==(const Time& otherTime) const;
	bool operator!=(const Time& otherTime) const;
	bool operator<=(const Time& otherTime) const;
	bool operator<(const Time& otherTime) const;
	bool operator>=(const Time& otherTime) const;
	bool operator>(const Time& otherTime) const;


private: 
	int hours; 
	int minutes; 
	int seconds; 

};

