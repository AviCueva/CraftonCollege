// 11_06_2017 Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int min(int arg1, int arg2) {

	if (arg1 < arg2) {
		return arg1;
	}
	else {
		return arg2;
	}

}

int min(int arg1, int arg2, int arg3) {

	if ((arg1 < arg2) && (arg1 < arg3)) {
		return arg1;
	}
	else if ((arg2 < arg1) && (arg2 < arg3)) {
		return arg2;
	}
	else
		return arg3;

}

int main()
{
	int temp;
	temp = min(6, 4, 2);
	cout << temp << endl;

	temp = min(122, 20);
	cout << temp << endl;

	return 0;
}

