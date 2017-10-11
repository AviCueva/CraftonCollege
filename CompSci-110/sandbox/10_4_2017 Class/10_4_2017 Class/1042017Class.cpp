// 1042017Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


int example1() {
	int x = 0;
	int total = 0;

	while (x >= 0) {
		cout << "Enter your x value " << endl;
		cin >> x;
		if (x < 0) break;
		total = total + x;
	}
	return 0;
}

int example2() {
	int x = 0;
	int y = 0;

	while (x >= 0) {
		cout << "Enter your x value " << endl;
		cin >> x;
		cout << "Enter your y value " << endl;
		cin >> y;
		if (y == 0) {
			cout << "Don't divide by zero" << endl;
			continue;
		}
		cout << x / y << endl;

	}
	return 0;
}

int example3() {
	char letter = ' ';
	do {
		cout << "Enter a character" << endl;
		cin >> letter;
	} while ((static_cast<char>(letter) >= 97) && (static_cast<char>(letter) <= 122)); {
		cout << static_cast<char>(letter) << endl;
	}
	return 0;
}
int main() {
	// example1(); 
	// example2();
	example3();
    return 0;
}

