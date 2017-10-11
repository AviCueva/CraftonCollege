// 1022017Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


int seconds, hours, minutes, secondsOriginal;

int main()
{
	cout << "Enter time in seconds: " << endl;
	cin >> seconds;

	secondsOriginal = seconds;
	hours = hours / (minutes* seconds);
	cout << hours;

	seconds = seconds - (hours * minutes * seconds);
	minutes = seconds / 60;
	seconds = seconds % 60;

	cout << secondsOriginal << "seconds is " << hours << "hours " << minutes << "minutes " << seconds << "seconds.";

		
    return 0;
}

