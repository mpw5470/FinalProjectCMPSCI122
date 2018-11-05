#ifndef BUDGET_H
#define BUDGET_H
#include "Expenses.h"
#include "Income.h"
#include "ExpenseRevenueQueue.h"
#include<string>
#include<iostream>
using namespace std;
 class Budget 
{
protected:
	Income obj;
	Expenses obj2;
	double monthIncome;
	double weeklyMoney;
	int weeksinYear = 52;
	double yearlyExpenses; //finds the yearly fixed expenses
	double weeklyPay; //allows the user to enter their weekly pay if salary is not known
	double leftOverMonthlyMoney; //will find the surplus of money the user has after they pay monthly bills
	double yearlyLeftOverMoney; //stores the money the user has left each year
	double shortTermGoals; //will  allow the user to enter short term goals (weekly)
	double monthlyGoals; //will allow user to enter monthly goals ( > 4 weeks)
	double longTermGoals; //yearly goals 


public:
	Budget(Income o)
	{
		obj = o;

	}
	Budget(Expenses e)
	{
		obj2 = e;
	}
	//mutators
	void setMonthlyIncome()
	{
		monthIncome = obj.getIncome() / 12;
	}
	void setweeklyMoneyMade()
	{
		weeklyMoney = obj.getIncome() / 52;
	}
	void yearlyFixedExpense()
	{
		yearlyExpenses = obj2.getFixedExpenses() * 12;

	}
	void setMoneyLeftAfterExpenses() //subtracts monthly expenses from monthly income
	{
		leftOverMonthlyMoney = monthIncome - obj2.getFixedExpenses();
	}
	void setYearlyLeftOverMoney()
	{
		yearlyLeftOverMoney = leftOverMonthlyMoney * 12;
	}
	void setShortTermGoals(double week)
	{
		shortTermGoals = week;
	}
	//accessors
	double getMonthlyIncome()
	{
		return monthIncome;
	}
	double getweeklyMoneyMade()
	{
		return weeklyMoney;
	}
	double getYearlyExpenses()
	{
		return yearlyExpenses;
	}
	double getMoneyLeftAfterExpenses()
	{
		return leftOverMonthlyMoney;
	}
	double getYearlyLeftOverMonthly()
	{
		return yearlyLeftOverMoney;
	}
	double getShortTermGoal()
	{
		return shortTermGoals;
	}
};
	








#endif 