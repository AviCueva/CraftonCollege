#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {

public:
	//BankAccount::BankAccount(void);
	BankAccount::BankAccount(); //Part2
	BankAccount::BankAccount(string accountID, string Holdername, double AccountBalance);
	BankAccount::BankAccount(string Holdername, double AccountBalance, string accountID);
	//BankAccount::BankAccount(string Holdername, double AccountBalance, string accountID); //Part 2
	void Initialize(string accountID, string Holdername, double AccountBalance);
	void SetHolderName(string HolderName);
	void IncreaseBalance(double amount);
	void DecreaseBalance(double amount);
	void Deactivate();
	void IsActive();
	void Print() const;
	void GetID();
	double GetBalance();
	void BankAccount::addDailyInterest(double Balance); //Part2

private:
	string accountID;
	string holderName;
	double accountBalance;
	bool memberStatus;
	double interest = .05; // Part 2, Value between 0 and 1 representing daily interest rate.
};