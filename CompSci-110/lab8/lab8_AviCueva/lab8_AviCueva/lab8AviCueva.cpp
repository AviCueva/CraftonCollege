// lab8AviCueva.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
	string tweet;

	cout << "Enter abbreviation from tweet: ";
	cin >> tweet;

	if (tweet == "LOL") {
		cout << "LOL = laughing out loud" << endl;
	}
	else if (tweet == "BFN") {
		cout << "BFN = bye for now" << endl;
	}
	else if (tweet == "FTW") {
		cout << "FTW = for the win" << endl;
	}
	else if (tweet == "IRL") {
		cout << "IRL = in real life" << endl;
	}
	else {
		cout << "Sorry, don't know that one." << endl;
	}

	return 0;
}
