
#include "Income.h"
#include "Budget.h"
#include "ExpenseRevenueQueue.h"
#include "Expenses.h"
#include<iostream>
#include<string>


int main()
{
	int choice = 1;
	double expense; //temp storage to for mutator in Budget class
	double income; //temp storage for income mutator in Budget class
	string name; //temp storage for name mutator in Budget class
	Expenses bills; //object o budget class
	Income salary;
	ExpenseRevenueQueue<Expenses> Expense;
	ExpenseRevenueQueue<Income> Incomes;
	cout << "Enter your fixed monthly expenses: ";
	while (choice != 0) //allows user to enter the name of their bills and 
	{
		cout << "\nName of Expense: ";		//should allow user to enter label like "rent" "car insurance" then enter how much each
		getline(cin, name); 
		bills.setNameExpense(name);
		cout << "Amount of expense: $"; //expense is. could save to queue
		cin >> expense;
		cin.ignore(); //cin.ignore() place after cin not before
		bills.setFixedExpenses(expense);
		Expense.enqueue(bills);
		cout << "Do you wish to enter more bills? ";
		cin >> choice;
		cin.ignore();
	}
	choice = 1;
	cout << "Enter your fixed income:\n ";
	while (choice != 0) //allows user to enter the name of their Revenues and 
	{
		cout << "Name of Income: ";		//should allow user to enter label like "rent" "car insurance" then enter how much each
		getline(cin, name);
		salary.setNameIncome(name);
		cout << "Amount of income: $"; //expense is. could save to queue
		cin >> income;
		cin.ignore();
		salary.setIncome(income);
		Expense.enqueue(bills);
		cout << "Do you wish to enter more incomes? ";
		cin >> choice;
		cin.ignore();
	}
	/*Expense.dequeue(bills);
	cout << "\tExpenses\n" << bills.getNameExpense() << ": " << bills.getFixedExpenses();*/
	cout << "Money left over each month: ";
	return 0;
}
//split income and expense into two different classes so that I can queue
//them seperately and it would then not require me to get the expense if I were to dequeue the Income queue