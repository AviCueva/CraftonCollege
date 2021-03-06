// test3_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>  //streams
#include <vector>
#include <cmath>

using namespace std;

const int ARRAY_SIZE = 100;




/*
Write a program that
a. Defines a void function named sortArrayDescending. The function should accept an int
array as an argument and sort the elements of the array in descending order. For example, if
the array argument contains the elements {1, 2, 8, 4, 5}, after the function
sortArrayDescending is called the array should contain {8, 5, 4, 2, 1}. You may
assume that the function swap is already defined:

void swap(int &amp;a, int &amp;b)
{

int temp = a;
a = b;
b = temp;

}

b. Uses the sortArrayDescending function to sort an array of 100 random numbers.

c. In a comment block at the bottom of your code, explain:

What sort method are you using?
What is the expected runtime of your function?
(in big-O notation, e.g. O(n), O(n 2 ), O(n log n))
*/


int a = -5, b = 0, c = 0;

bool mystery(int a, int &b, int &c) {

	bool flag = false;

	if (a >= 0) {

		b = a / 2;
		if (a % 2)
			flag = true;

	}
	else {

		a = -a;
		c = a / 2;

	}
	cout << a << endl;
	return flag;

}

void part2(){
	int arr[5] = { 5, 3, 2, 8, 5 };

	int n = 5;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n - 1; j++) {

			if (arr[j] < arr[j + 1]) {

				int temp = arr[j];

				arr[j] = arr[j + 1];

				arr[j + 1] = temp;

			}
			cout  << arr[j] << endl;
		}

	}
	
}

void ConvertFromDecimalToBinary(int num) {
	int remainder;

	if (num <= 1)
	{
		cout << num;
		return;
	}
	remainder = num % 2;
	ConvertFromDecimalToBinary(num / 2);
	cout << remainder;

}

void swap(int &a, int &b){

	int temp = a;
	a = b;
	b = temp;

}

void sortArrayDescending(int arrValues) {
	int temp;
	int i, j;

	for (i = 0; i < arrValues; i++) {
		for (j = i + 1; j < arrValues; j++) {
			cout << arrValues << endl;
			/*if (arrValues[i] < arrValues[j]) {
				temp = arrValues[i];
				arrValues[i] = arrValues[j];
				arrValues[j] = temp;
			}
			*/
		}
	}

}

int main() {
	//populate random array for Question 7 part b

	int arrExample1[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		arrExample1[i] = rand() % 10 + 1;
	}


	int temp;

	//mystery(a, b, c);
	//part2();
	//ConvertFromDecimalToBinary(13);
	//sortArrayDescending(arrExample1);
	for (int i = 0; i < ARRAY_SIZE; i++) {
		for (int j = i + 1; j < ARRAY_SIZE; j++) {
			if (arrExample1[i] < arrExample1[j]) {

				swap(arrExample1[i], arrExample1[j]);
			}
		
		}
		cout << arrExample1[i] << endl;

	}

    return 0;
}

/* Question 7 Part C

What sorting method? Bubble sort
Expected runtime:
Θ(n^2)

*/