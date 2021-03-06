// lab16_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int ConvertToDecimal(int number, int base) {
	string numberString = to_string(number); // used to figure out the size of the number

	int convertedNumber = 0;
	int j = 0;

	for (double i = numberString.size() - 1; i > -1; i--) {
		convertedNumber += (numberString.at(j) - '0') * pow(base, i);
		j++;
	}
	return convertedNumber;
}

int ConvertFromDecimal(int decimalNumber, int base) {

	int convertedNumber = 0;
	string remainder = "";

	for (decimalNumber; decimalNumber != 0; decimalNumber /= base) {
		remainder = to_string(decimalNumber % base) + remainder;
	}

	stringstream convertedNumberStringStream(remainder);
	convertedNumberStringStream >> convertedNumber; // needed to convert String to Num.

	return convertedNumber;
}

void testCaseToDecimal(int testNum, int testBase, int expectedResult) {

	cout << endl << "ConvertToDecimal" << endl;
	cout << "TestNumber: " << testNum << endl;
	cout << "TestBase: " << testBase << endl;
	cout << "Expected Result: " << expectedResult << endl;

	if (ConvertToDecimal(testNum, testBase) != expectedResult) {
		cout << "!!! FAILED!!!" << endl;
	}
	else {
		cout << "Tests Passed" << endl;
	}
}
void testCaseFromDecimal(int testNum, int testBase, int expectedResult) {

	cout << endl << "ConvertFromDecimal " << endl;
	cout << "TestNumber: " << testNum << endl;
	cout << "TestBase: " << testBase << endl;
	cout << "Expected Result: " << expectedResult << endl << endl;

	if (ConvertFromDecimal(testNum, testBase) != expectedResult) {
		cout <<  "!!! FAILED!!!" << endl;
	}
	else {
		cout << "Tests Passed" << endl << endl;
	}

}

int main() {

	testCaseToDecimal(1, 2, 1);  // Format, testNum, testBase, expected Result
	testCaseToDecimal(1, 2, 5); // Control Test, expected to fail
	testCaseToDecimal(0, 2, 0);
	testCaseToDecimal(1101, 9, 811);
	testCaseFromDecimal(0, 16, 0);
	testCaseFromDecimal(0, 16, 5); // Expected fail

	return 0;
}
