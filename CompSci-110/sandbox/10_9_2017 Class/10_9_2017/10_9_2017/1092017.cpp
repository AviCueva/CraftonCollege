// 1092017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 
#include <vector>

using namespace std;

int question1() {

	const int SIZE = 1000;
	int nums[SIZE];

	for (int i = 0; i < SIZE; i++) {
		nums[i] = 0;
		int value = i;
		cout << value << " " << nums[i] << endl;
	}
	return 0;
}

int question2() {
	double numV = 0;
	cout << "Enter number of Vectors" << endl;
	cin >> numV;

	vector<int> myVector(numV, -1);
	for (int i=0; i< numV;i++){
		cout << myVector.at(i) << " " << endl;
	
	}
	return 0;
}

	int main(){

		// question1();
		question2();

		return 0;
	}


