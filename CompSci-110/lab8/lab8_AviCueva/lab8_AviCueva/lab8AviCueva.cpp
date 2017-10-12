// lab8AviCueva.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

/*Create a modified version of this program that:
1.	Expands the number of abbreviations that can be decoded. Add support for at least three 
additional abbreviations you commonly use or search the Internet to find a list of common 
abbreviations.
2.	Allows the user to enter a complete tweet (140 characters or less) as a single line of 
text. Search the user’s tweet for those common abbreviations and converts the user's tweet 
to a decoded tweet, replacing the abbreviations directly within the tweet.
*/

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
