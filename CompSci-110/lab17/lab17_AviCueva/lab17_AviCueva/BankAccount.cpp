#include "BankAccount.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
//
using namespace std;

//Part 2 Default Constructor
BankAccount::BankAccount() : accountID("00000-00000"), holderName(" "), accountBalance(0) {

	return;
}

BankAccount::BankAccount()
{
	return;
}

BankAccount::BankAccount(string accountID, string Holdername, double AccountBalance)
{
	return;
}

BankAccount::BankAccount(string Holdername = " ", double AccountBalance = 0, string accountID = "0000 - 0000") {
	BankAccount::accountID = accountID;
	BankAccount::holderName = Holdername;
	BankAccount::accountBalance = AccountBalance;
	BankAccount::memberStatus = true;

	return;
}

void BankAccount::Initialize(string accountID, string Holdername, double AccountBalance) {
	BankAccount::accountID = accountID;
	BankAccount::holderName = Holdername;
	BankAccount::accountBalance = AccountBalance;
	BankAccount::memberStatus = true;

	return;
}

void BankAccount::SetHolderName(string Holdername) {
	holderName = Holdername;

	return;
}

void BankAccount::IncreaseBalance(double amount) {
	accountBalance = accountBalance + amount;

	return;
}
void BankAccount::DecreaseBalance(double amount) {
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
	cout << setprecision(2) << fixed;
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

double BankAccount::GetBalance() {
	cout << accountBalance << endl;
	return accountBalance;
}
// Part 2
void BankAccount::addDailyInterest(double Balance) {
	accountBalance = Balance  * (1 + interest / 365);
}
