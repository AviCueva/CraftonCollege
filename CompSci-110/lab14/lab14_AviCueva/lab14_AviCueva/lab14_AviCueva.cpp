// lab14_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 


const int KEY1 = 10;
const int KEY2 = 80;
const int KEY3 = 0;

bool checkLessThan(int i, int j) { return (i<j); }

int linearSearch(int array[], int size, int searchValue, int & numComparisons) {
	for (int i = 0; i < size; i++) {
		numComparisons += 1;
		if (searchValue == array[i]) {
			return i;
		}
	}
	return -1;
}

void partALinearSearch() {
	int numComparisons = 0;
	int userNum = 0;
	int intList[] = { 1, 6, 7, 10, 14, 20, 21, 30, 50, 80 };
	int arraySize = sizeof(intList) / sizeof(intList[0]);
	cout << "Please enter the key you would like to search. (1, 2, or 3): ";
	cin >> userNum;

	if ((userNum < 1) || (userNum > 3)) {
		cout << "Invalid input. Please choose the correct key. (1, 2, or 3):";
		cin >> userNum;
	}

	// search for KEY 1
	if (userNum == 1) {
		int result = linearSearch(intList, arraySize, KEY1, numComparisons);
		if (result >= 0) {
			cout << "Key 1: 10 was found! The number of comparisons was: " << numComparisons << endl;
		}
		else {
			cout << "Key 1 was not found!" << endl;
		}
	}

	// search for KEY 2
	if (userNum == 2) {
		int result = linearSearch(intList, arraySize, KEY2, numComparisons);

		if (result >= 0) {
			cout << "Key 2: 80 was found! The number of comparisons was: " << numComparisons << endl;
		}
		else {
			cout << "Key 2 was not found!" << endl;
		}
	}

	// search for KEY 3
	if (userNum == 3) {
		int result = linearSearch(intList, arraySize, KEY3, numComparisons);
		if (result >= 0) {
			cout << "Key 3: 0 was found! The number of comparisons was: " << numComparisons << endl;
		}
		else {
			cout << "Key 3 was not found!" << endl;
		}
	}



}

void partABinarySearch() {
	int intList[] = { 1, 6, 7, 10, 14, 20, 21, 30, 50, 80 };
	int arraySize = sizeof(intList) / sizeof(intList[0]);
	vector<int> v(intList, intList + 10);
	int userKeyInput = 0;
	const int KEY1 = 10;
	const int KEY2 = 80;
	const int KEY3 = 0;


	// ask user for what KEY they will like to search for
	cout << "Which KEY would you like to search for? (1, 2, or 3): " << endl;
	cin >> userKeyInput;
	if (userKeyInput > 3 || userKeyInput < 1) {
		cout << "Please Enter a new KEY number. (1, 2, or 3): " << endl;
	}

	// checkLessThan for comp
	if (userKeyInput == 1) {							
		(v.begin(), v.end(), checkLessThan);

		cout << "Searching for KEY 1: 10" << endl;
		if (binary_search(v.begin(), v.end(), KEY1, checkLessThan)) {
			cout << "Key 1: 10 was found! " << endl;
		}
		else {
			cout << "Key 1 was not found!" << endl;
		}
	}

	else if (userKeyInput == 2) {						
		(v.begin(), v.end(), checkLessThan);

		cout << "Searching for KEY 2: 80" << endl;
		if (binary_search(v.begin(), v.end(), KEY2, checkLessThan)) {
			cout << "Key 2: 80 was found!" << endl;
		}
		else {
			cout << "Key 2 was not found!" << endl;
		}
	}

	else if (userKeyInput == 3) {						
		(v.begin(), v.end(), checkLessThan);

		cout << "Searching for KEY 3: 0" << endl;
		if (binary_search(v.begin(), v.end(), KEY3, checkLessThan)) {
			cout << "Key 3: 80 was found!" << endl;
		}
		else {
			cout << "Key 3 was not found!" << endl;
		}
	}
}

int main(){
	partALinearSearch(); //Working Part A Linear Search
	partABinarySearch(); // Working Part A Binary Search

	//partBBubbleSort(); //TODO
	//partBInsertionSort(); //TODO
	//partBSelectionSort(); //TODO

	return 0;
}



