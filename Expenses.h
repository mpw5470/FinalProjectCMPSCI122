#ifndef EXPENSES_H
#define EXPENSES_H
#include<string>
#include<iostream>
using namespace std;
 class Expenses
{
protected:
	double totalExpenses; //will add other expensesand fixed expenses together
	double fixedExpenses; //will store rent/car insurance and other monthly fixed expenses
	string nameOfExpense; //store name of fixed expenses
	double otherExpenses; //will store expenses like gas and unecessary expenses
	string nameOfOtherExpenses; //will store the name of these expenses


public:
	Expenses()
	{
		totalExpenses = 0.0;
		nameOfExpense = "";
		fixedExpenses = 0.0;
		otherExpenses = 0.0;
		nameOfOtherExpenses = "";
	}
	//accessprs
	string getNameExpense() { return nameOfExpense; } 
	double getFixedExpenses() { return fixedExpenses; }
	double getDoubleExpenses() { return totalExpenses; }

	//mutators
	void setFixedExpenses(double e) { fixedExpenses = e; }
	void setNameExpense(string exp) { nameOfExpense = exp; }
	void addOtherExpense()
	{
		totalExpenses = fixedExpenses + otherExpenses;
	}
	string setNameOfOtherExpense(string o)
	{
		nameOfOtherExpenses = o;
	}
};


#endif