// hW1_q2_CuevaAvi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int firstNumber = 0;
int secondNumber = 0;


int main()
{
	cout << "You will be asked to enter 2 numbers" << endl;
	cout << "Enter your first number:" << endl;
	cin >> firstNumber;

	cout << "Enter your second number:" << endl;
	cin >> secondNumber;

	if (firstNumber > secondNumber) {
		cout << "First number is larger!" << endl;
	}
	else
		cout << "Second number is larger!" << endl;
	return 0;
}

