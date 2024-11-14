
#pragma once
class Date
{
public: 
	// default constructor 
	Date(); 

	// specific constructor 
    Date(int mmonth, int dday, int yyear);

	// Mutators or Setters
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setMDY(int, int, int); 

	// Accessor or Getters
	int getDay() const; 
	int getMonth() const; 
	int getYear() const; 

	// print method 
	void print() const; 

	// overloading the operators 
	bool operator==(const Date& otherDate) const; 
	bool operator!=(const Date& otherDate) const;
	bool operator<=(const Date& otherDate) const;
	bool operator<(const Date& otherDate) const;
	bool operator>=(const Date& otherDate) const;
	bool operator>(const Date& otherDate) const;



private: 
	int day; 
	int month; 
	int year; 


};

