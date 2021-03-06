// lab11_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int ARRAY_LENGHT = 3;
int number[ARRAY_LENGHT];
double sum, mean, min, max;
double stdDev, variance;

int main()
{

	for (int i = 0; i < ARRAY_LENGHT; i++) {

		int num;

		cout << "Enter a number no larger than 100: " << endl;
		cin >> num;

		if ((num > 0) && (num <= 100)) {
			number[i] = num;
		}
		else {
			cout << "Please enter a valid number between 1 and 100" << endl;
			i--;
		}

	}

	for (int i = 0; i < ARRAY_LENGHT; i++) {
		sum = sum + number[i]; // SUM
	}
	mean = sum / ARRAY_LENGHT; // Mean

	// MIN
	min = number[0];
	
	for (int i = 1; i < sizeof(number) / sizeof(number[0]); ++i){
		if (number[i] < min) {
			min = number[i];
		}
	}
	// MAX
	max = number[0];
	
	for (int i = 1; i < sizeof(number) / sizeof(number[0]); ++i){
		if (number[i] > max) {
			max = number[i];
		}
	}

	for (int i = 0; i < ARRAY_LENGHT; ++i){
		stdDev += (number[i] - mean) * (number[i] - mean);
		//cout << stdDev << endl; // debugging line
	}
	variance = stdDev / ARRAY_LENGHT;
	stdDev = sqrt(variance);

	cout << "The sum is: " << setprecision(5) << sum << endl;
	cout << "The mean is: " << mean << endl;
	cout << "The min value in the array is: " << min << endl;
	cout << "The max value in the array is: " << max << endl;
	cout << "The Standard Deviation is: " << setprecision(9) << stdDev << endl;

	return 0;
}
