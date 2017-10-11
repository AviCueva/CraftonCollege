// Project1AviCueva.cpp : 
// This is an Awesome Calculator App, it takes items, quantities, and their cost.
// It then calculates total cost, you then give it how much money you paid.
// In then calculates your change.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

double item1UnitPrice, item1Quantity, item2UnitPrice, item2Quantity, item3UnitPrice, item3Quantity;
double tax, taxRate, totalCostPreTax, totalCostPostTax;
double item1TotalPrice, item2TotalPrice, item3TotalPrice;
string item1Name, item2Name, item3Name;

double cashTendered, change;
double numOnes, numFives, numTens, numTwenties, numFifties, numHundreds;
double numPennies, numNickels, numDimes, numQuarters;  // we don't care about half dollars
 
int main()
{
	// Input section
	cout << "---------- My Awesome Store Cashier's Program ----------" << endl;
	cout << " Avi's Program, adding this for purposes of screen shot " << endl;
	cout << "Enter the name of item 1: ";
	getline(cin, item1Name);
	cout << "Enter the price of the "<< item1Name << ": $";
	cin >> item1UnitPrice;
	cout << "Enter the quantity of " << item1Name << ": ";
	cin >> item1Quantity;
	cout << endl;

	cin.ignore(); // needed to clear out buffer

	cout << "Enter the name of item 2: ";
	getline(cin, item2Name);
	cout << "Enter the price of the " << item2Name << ": $";
	cin >> item2UnitPrice;
	cout << "Enter the quantity of " << item2Name << ": ";
	cin >> item2Quantity;
	cout << endl;
	
	cin.ignore();
	
	cout << "Enter the name of item 3: ";
	getline(cin, item3Name);
	cout << "Enter the price of the " << item3Name << ": $";
	cin >> item3UnitPrice;
	cout << "Enter the quantity of " << item3Name << ": ";
	cin >> item3Quantity;
	cout << endl;

	cout << "Enter the tax rate (%): ";
	cin >> taxRate;

	if ((taxRate > 100) || (taxRate < 0)) {
		cout << "Invalid Tax Rate" << endl;
		return 0;
	}
	else {

		//Calculate section

		item1TotalPrice = item1UnitPrice * item1Quantity;
		item2TotalPrice = item2UnitPrice * item2Quantity;
		item3TotalPrice = item3UnitPrice * item3Quantity;
		totalCostPreTax = item1TotalPrice + item2TotalPrice + item3TotalPrice;
		tax = totalCostPreTax * (taxRate / 100.00);
		totalCostPostTax = totalCostPreTax + tax;
		cout << fixed;
		cout << setprecision(2);

		// Display Section

		cout << endl << "-------------------- Cost Summary --------------------" << endl;
		cout << endl;
		cout << "Item            Unit Price Quantity          Cost" << endl;
		cout << "-----           ---------- --------    ----------" << endl;
		cout << left << setw(17) << item1Name << "$" << right << setw(9) << item1UnitPrice << setw(9) << item1Quantity << setw(5) << "$" << setw(9) << item1TotalPrice << endl;
		cout << left << setw(17) << item2Name << "$" << right << setw(9) << item2UnitPrice << setw(9) << item2Quantity << setw(5) << "$" << setw(9) << item2TotalPrice << endl;
		cout << left << setw(17) << item3Name << "$" << right << setw(9) << item3UnitPrice << setw(9) << item3Quantity << setw(5) << "$" << setw(9) << item3TotalPrice << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Total Before Tax: " << right << setw(23) << "$" << right << setw(9) << totalCostPreTax << endl;
		cout << "Tax: " << right << setw(36) << "$" << right << setw(9) << tax << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Total cost: " << right << setw(29) << "$" << right << setw(9) << totalCostPostTax << endl;

		cout << endl << "Now tell the cusotmer the total cost of the purchase" << endl;
		cout << "How much money did the customer give you? ";
		cin >> cashTendered;
		cout << endl << "Calculating Change..." << endl;

		change = cashTendered - totalCostPostTax;
		int changeInt = floor((change * 100) + 0.5);

		cout << "-------------------------" << endl;
		cout << "Change: $" << setw(16) << change << endl;
		cout << "-------------------------" << endl;

		numHundreds = (change * 100) / 10000;
		changeInt = changeInt % 10000;
		numFifties = changeInt / 5000;
		changeInt %= 5000;
		numTwenties = changeInt / 2000;
		changeInt %= 2000;
		numTens = changeInt / 1000;
		changeInt %= 1000;
		numFives = changeInt / 500;
		changeInt %= 500;
		numOnes = changeInt / 100;
		changeInt %= 100;
		numQuarters = changeInt / 25;
		changeInt %= 25;
		numDimes = changeInt / 10;
		changeInt %= 10;
		numNickels = changeInt / 5;
		numPennies = changeInt - numNickels * 5;

		//Prints how much change to return by bill/coin type.
		cout << "hundreds: " << right << setw(15) << numHundreds << endl;
		cout << "fifties: " << right << setw(16) << numFifties << endl;
		cout << "twenties: " << right << setw(15) << numTwenties << endl;
		cout << "tens: " << right << setw(19) << numTens << endl;
		cout << "fives: " << right << setw(18) << numFives << endl;
		cout << "ones: " << right << setw(19) << numOnes << endl;
		cout << "quarters: " << right << setw(15) << numQuarters << endl;
		cout << "dimes: " << right << setw(18) << numDimes << endl;
		cout << "nickels: " << right << setw(16) << numNickels << endl;
		cout << "pennies: " << right << setw(16) << numPennies << endl;
	}
	return 0;
}



/* PSEUDOCODE:

Get data
name, units, price, quantity, sales tax rate


Calculate values

Calculate totals
Figure out how much change is needed
Give largest bills possible
Itirate until you give out all the change.

Write out the data

Using formatting, show results.
*/

/* My project Experience
Won't lie, some of this was meh.  I realize there are better ways to accomplish this program. 
However, we have to crawl before we can run.

I would have liked to have expanded the error checking, and perhaps create additional functions
so that we can:
A) have additional items
B) check that the user isn't entering bogus values

Overall though, was a good project.
*/