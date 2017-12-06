// lab17_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
public:
	void Initialize(int accountID, string Holdername, long accountBalance);
	void SetHolderName(string HolderName);
	void IncreaseBalance(long amount);
	void DecreaseBalance(long amount);
	void Deactivate();
	void IsActive();
	void Print() const;
	void GetID();
	void GetBalance();

private:
	int accountID;
	string holderName;
	long accountBalance;
	bool memberStatus;
};

void BankAccount::Initialize(int accountID, string Holdername, long accountBalance) {
	BankAccount::accountID = accountID;
	BankAccount::holderName = Holdername;
	BankAccount::accountBalance = accountBalance;
	BankAccount::memberStatus = true;

	return;
}

void BankAccount::SetHolderName(string Holdername) {
	holderName = Holdername;
	
	return;
}

void BankAccount::IncreaseBalance(long amount) {
	accountBalance = accountBalance + amount;

	return;
}
void BankAccount::DecreaseBalance(long amount) {
	accountBalance = accountBalance - amount;

	return;
}
void BankAccount::Deactivate() {
	memberStatus = false;
	return;
}

void BankAccount::IsActive() {
	if (memberStatus == true) {
		cout << "Active Member " << endl;
	}
	else {
		cout << "Not an Active Member" << endl;
	}

	return;
}

void BankAccount::Print() const {
	string status = "Active";

	cout << "Account Holder: " << holderName << endl;
	cout << "Account ID: " << accountID << endl;
	cout << "Account Balance " << accountBalance << endl;

	if (memberStatus == false) {
		status = "Inactive";
	}
	cout << "Acount Member Status: " << status << endl << endl;
	
	return;
}

void BankAccount::GetID() {
	cout << accountID << endl;

	return;
}

void BankAccount::GetBalance() {
	cout << accountBalance << endl;
	return;
}
int main()
{

	BankAccount Person;
	//Initialize the account
	Person.Initialize(1234, "Scrooge McDuck", 10000);
	// Print initial values;
	Person.Print();


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
	cout << "Decreasing the balance by 10000" << endl;
	Person.DecreaseBalance(10000);
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

	return 0;
}



/* structs in final*/