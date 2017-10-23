// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 
#include <vector> 

using namespace std;

int sandbox1() {
	vector <int> vtr;

	vtr.resize(3);

		vtr.at(0) = 1;
		vtr.at(1) = 2;
		vtr.at(2) = 3;

	
	return 0;
}

int sandbox2() {
	vector <int> nums(10);
	vector <int> copy(3);

	for (int i = 1; i < 4; i++) {

		nums.at(i) += 1;
		cout << nums.at(i) << endl;
	}

	copy = nums;

	return 0;
}

int sandbox3() {
	const int ROWS = 2, COLS = 2;
	int numbers[ROWS][COLS] = { {84,78}, {92,97} };

	cout << numbers[1, 1];

	return 0;
}

int sandbox4() {
	const int ROWS = 5, COLS = 9;
	int table[ROWS][COLS];

	// How many elements? 45
	table[3][5] = 5;

	table[5][1] += 10;

	cout << table[3][5] << endl;

	cout << table[5][1] << endl;

	return 0;
}
int sandbox5() {
	const int ROWS = 5, COLS = 9;
	int table[ROWS][COLS];

	// How many elements? 45
	table[2][4] = 5;

	table[4][0] += 10;

	cout << table[2][4] << endl;

	cout << table[4][0] << endl;

	return 0;
}

int sandbox6() {
	const int ROWS = 5, COLS = 9;
	int table[ROWS][COLS];

	// How many elements? 45
	table[2][4] = 5;

	table[4][0] += 10;

	cout << table[2][4] << endl;

	cout << table[4][0] << endl;

	return 0;
}
int main()
{
	// sandbox1();
	// sandbox2();
	// sandbox3();
	// sandbox4();
	// sandbox5();
	sandbox6();
    return 0;
}

