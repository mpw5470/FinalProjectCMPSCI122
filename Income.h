#ifndef Income_H
#define Income_H
#include<string>
#include<iostream>
using namespace std;
class Income
{
protected:
	double income;
	string nameOfIncome;
public:
	Income()
	{
		nameOfIncome = "";
		income = 0.0;
	}
	string getNameIncome() { return nameOfIncome; }
	double getIncome() { return income; }
	void setIncome(double i) { income = i; }
	void setNameIncome(string ni) { nameOfIncome = ni; }

};

#endif