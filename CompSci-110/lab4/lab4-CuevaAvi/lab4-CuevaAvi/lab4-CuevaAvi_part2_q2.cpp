// lab4CuevaAvi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int min; // User input: Minutes
	int hrs; // Hours

	cout << "Enter hours: ";
	cin >> hrs;

	cout << "Enter minutes: ";
	cin >> min;

	min = min + (hrs * 60);

	cout << "Total Minutes is " << min << endl;
	

	return 0;
}

