// lab7AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int part1() {
	int userNum;

	cout << "Enter a number between 0 and 99: ";
	cin >> userNum;

	if (userNum >= 20) {
		string largerNum;
		string T[] = { "","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Nighty" };
		largerNum = T[userNum / 10];
		cout << largerNum << " ";
		if (userNum % 10 ==0 ) {
			return 0;
		}
		else{
		userNum %= 10;
		}
	}

	switch (userNum) {
	case 0:
		cout << userNum << " zero.\n";
		break;
	case 1:
		cout << "one.\n";
		break;
	case 2:
		cout << "two.\n";
		break;
	case 3:
		cout << "three.\n";
		break;
	case 4:
		cout << "four.\n";
		break;
	case 5:
		cout << " five.\n";
		break;
	case 6:
		cout << " six.\n";
		break;
	case 7:
		cout << " seven.\n";
		break;
	case 8:
		cout << " eight.\n";
		break;
	case 9:
		cout << " nine.\n";
		break;
	case 10:
		cout << " ten.\n";
		break;
	case 11:
		cout << " eleven.\n";
		break;
	case 12:
		cout << " twelve.\n";
		break;
	case 13:
		cout << " thirteen.\n";
		break;
	case 14:
		cout << " fourteen.\n";
		break;
	case 15:
		cout << " fifteen.\n";
		break;
	case 16:
		cout << " sixteen.\n";
		break;
	case 17:
		cout << " seventeen.\n";
		break;
	case 18:
		cout << " eighteen.\n";
		break;
	case 19:
		cout << " nineteen.\n";
		break;
	}

	return 0;
}

/* A leap year is any year divisible by 4, unless the year is divisible by 100 but not 400.
For example, 1996 is a leap year (1996 is divisible by 4 but not by 100), 2000 is a leap year
(2000 is divisible by 400), but 1900 is not a leap year (1900 is divisible by 100 but not by 400).
Write a program that reads a year from the user and tells whether the year is a leap year.
For this problem you must make use of logical operators such as && and ||.
*/

int part2() {
	int year;

	cout << "Enter a year: " << endl;
	cin >> year;
	
	if (((year % 4) == 0) && ((year % 400) != 0)) {
		cout << "Leap year!" << endl;
	}
	else {
		cout << "Sorry, not a leap year" << endl;
	}
	return 0;
}


int main()
{
	// part1(); //Working
	part2();
    return 0;
}

