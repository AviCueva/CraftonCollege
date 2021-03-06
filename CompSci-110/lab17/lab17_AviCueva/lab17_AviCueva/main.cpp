// lab17_AviCueva.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

int main() {
	//BankAccount Person;
	BankAccount Person("1234-1234","John Doe", 10000);

	cout << "Printing Default Constructor Values" << endl;
	Person.Print();

	// Commented out for Part 2
	////Initialize the account
	//Person.Initialize("ABC1234", "Scrooge McDuck", 10000);
	//// Print initial values;
	//Person.Print();


	// Changing Initial Name
	cout << endl << "Changing name" << endl;
	Person.SetHolderName("Avi Cueva");
	// Test values for account information 
	cout << "Expected: Avi Cueva" << endl;
	Person.Print();

	//Increasing Balance
	cout << "Increased the balance by 999" << endl;
	Person.IncreaseBalance(999);
	Person.Print();

	// Decreasing the Balance
	cout << "Decreasing the balance by 1000" << endl;
	Person.DecreaseBalance(100);
	Person.Print();

	//Deactivating user
	cout << "Deactivating acount" << endl;
	Person.Deactivate();
	Person.Print();

	//Printing Just the ID
	cout << "Printing Customer's ID:" << endl;
	Person.GetID();

	//Printing Balance
	cout << "Printing Customer's Balance" << endl;
	Person.GetBalance();

	// Adding Daily Interest
	cout << "Adding Daily Interest" << endl;
	Person.addDailyInterest(Person.GetBalance());
	Person.Print();

	return 0;
}



/* structs in final*/