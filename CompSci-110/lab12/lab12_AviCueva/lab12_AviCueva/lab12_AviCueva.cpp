// lab12_AviCueva.cpp : Defines the entry point for the console application.
//

/*
Modify the program as follows:
•	print the time in hours and minutes, e.g., print "4 hours and 43 minutes" rather than 283 minutes -DONE
•	If a user types “PRINT”, print the list of known countries along with the TV watch time for each country. -DONE
•	If the user types "MAX", don't search the country list, but instead find the maximum minutes in the list and print that number along with the corresponding country. -DONE
•	If the user types “ADD”, don’t search the country list, but instead allows the user to add a country and its corresponding TV watching time to the vectors. -DONE
•	If the user types “MOD”, asks the user to enter the country for which data is modified and the new TV watching time, and then modifies the vectors accordingly.
•	If the user types “DEL”, asks the user to enter the country for which data is modified, and then modifies the vectors accordingly.
o	You can delete an element at a specific index in a vector using the erase function:  myVector.erase(myVector.begin() + index);
•	If a user types a country name that isn't found, the program behavior should be the same as if the user enters “PRINT”.
Be sure to test all the modifications and provide screenshots that demonstrate the correct behaviors of your program.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int NUM_CTRY = 5;             // Num countries supported
vector<string> ctryNames(NUM_CTRY); // Country names
vector<int>    ctryMins(NUM_CTRY);  // Mins TV watched daily
string userCountry;                 // User defined country
bool foundCountry = false;          // Match to country supported
int i = 0;

void printStats() {

	for (i = 0; i < ctryNames.size(); ++i) {
		int hours, mins;

			foundCountry = true;
			cout << "People in " << ctryNames.at(i) << " watch ";
			hours = ctryMins.at(i) / 60;
			mins = ctryMins.at(i) % 60;
			cout << hours << " hours and " << mins << " mins of TV daily." << endl;
	}
}


int main() {
	// Source: www.statista.com, 2010
		  // Loop index

										// Define array contents
	ctryNames.at(0) = "China";
	ctryMins.at(0) = 158;

	ctryNames.at(1) = "India";
	ctryMins.at(1) = 119;

	ctryNames.at(2) = "Russia";
	ctryMins.at(2) = 226;

	ctryNames.at(3) = "UK";
	ctryMins.at(3) = 242;

	ctryNames.at(4) = "USA";
	ctryMins.at(4) = 283;

	// Prompt user for country name
	cout << "Enter country name: ";
	cin >> userCountry;

	if (userCountry == "PRINT") {
		for (i = 0; i < ctryNames.size(); ++i) {
			cout << ctryNames.at(i) << endl;
		}
	}

	else if (userCountry == "MAX") {
		int max = ctryMins.at(i);
		for (i = 0; i < ctryNames.size(); ++i) {
			if (ctryMins.at(i) > max) {
				max = ctryMins.at(i);
			}
		}
		cout << max << endl;
	}

	if (userCountry == "ADD") {
		string country;
		int countryMins;

		cout << "Enter a country you would like to add: ";
		cin >> country;

		cout << endl << "How many minutes does " << country << " watch TV per day?: ";
		cin >> countryMins;

		ctryNames.push_back(country);
		ctryMins.push_back(countryMins);

		printStats();

	}
	if (userCountry == "DEL") {

		cout << "Enter a country you would like to delete: ";
		cin >> userCountry;

		for (i = 0; i < ctryNames.size(); ++i) {
			if (ctryNames.at(i) == userCountry) {
				ctryNames.erase(ctryNames.begin() + i);
			}
			
		}
	}

	if (userCountry == "MOD") {
		int userMins;
		cout << "What country would you like to modify?: ";
		cin >> userCountry;

		for (i = 0; i < ctryNames.size(); ++i) {
			if (ctryNames.at(i) == userCountry) {
				cout << "How many minutes does " << userCountry << " watch per day? ";
				cin >> userMins;
				ctryMins.at(i) = userMins;
			}
		}
		//printStats();
	}

	if ((userCountry != "PRINT") && (userCountry != "MAX") && (userCountry != "ADD") && (userCountry != "MOD")) {
		// Find country's index and avgerage TV time
		printStats();

		if (!foundCountry) {
			cout << "Country not found; try again." << endl;

		}
		return 0;
	}
}
