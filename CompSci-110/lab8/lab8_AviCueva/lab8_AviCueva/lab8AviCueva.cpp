// lab8AviCueva.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;
string tweet;

string LOL_Abbr = "LOL";
string LOL_Meaning = "Laugh Out Loud";

string BFN_Abbr = "BFN";
string BFN_Meaning = "Bye For Now";

string FTW_Abbr = "FTW";
string FTW_Meaning = "For The Win";

string IRL_Abbr = "IRL";
string IRL_Meaning = "In Real Life";

string BRB_Abbr = "BRB";
string BRB_Meaning = "Be Right Back";

string ROFL_Abbr = "ROFL";
string ROFL_Meaning = "Rolling on the Flooor Laughing";

string LMAO_Abbr = "LMAO";
string LMAO_Meaning = "Laughint my a__ off";

// string tweet = "This is a tweet about abbreviations.  I will use BRB and LOL first.  Then FML followed by.  Oh yeah, I really BFN like saying ROFL and then copter for some reason. LMAO. TTYL  let's make sure to add extra fluff here. FTW ";

/*Create a modified version of this program that:
1.	Expands the number of abbreviations that can be decoded. Add support for at least three 
additional abbreviations you commonly use or search the Internet to find a list of common 
abbreviations.
2.	Allows the user to enter a complete tweet (140 characters or less) as a single line of 
text. Search the user’s tweet for those common abbreviations and converts the user's tweet 
to a decoded tweet, replacing the abbreviations directly within the tweet.
*/

int main() {
	int tweetIndex;
	
	cout << "Enter abbreviation from tweet: ";
	getline(cin, tweet);

	if (tweet.length() <= 140){
for(int i =0; i<5; i++){ // Running this 5 times to be able to replace the same variable up to 5 times per tweet.
	if (tweet.find("LOL") != -1) {
		tweetIndex = tweet.find("LOL");
		tweet.replace(tweetIndex, LOL_Abbr.length(), "");
		//cout << tweet.length() << endl; // Debugging purposes
		tweet = tweet.insert(tweetIndex, LOL_Meaning);
		//cout << tweet.length(); // Debugging purposes
	}
	if (tweet.find("BFN") != -1) {
		tweetIndex = tweet.find("BFN");
		tweet.replace(tweetIndex, BFN_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, BFN_Meaning);
	}
	
	if (tweet.find("FTW") != -1) {
		tweetIndex = tweet.find("FTW");
		tweet.replace(tweetIndex, FTW_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, FTW_Meaning);
	}
	if (tweet.find("IRL") != -1) {
		tweetIndex = tweet.find("IRL");
		tweet.replace(tweetIndex, IRL_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, IRL_Meaning);
	}
	if (tweet.find("BRB") != -1) {
		tweetIndex = tweet.find("BRB");
		tweet.replace(tweetIndex, BRB_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, BRB_Meaning);
	}
	if (tweet.find("ROFL") != -1) {
		tweetIndex = tweet.find("ROFL");
		tweet.replace(tweetIndex, ROFL_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, ROFL_Meaning);
	}
	if (tweet.find("LMAO") != -1) {
		tweetIndex = tweet.find("LMAO");
		tweet.replace(tweetIndex, LMAO_Abbr.length(), "");
		tweet = tweet.insert(tweetIndex, LMAO_Meaning);
	}
}
cout << tweet << endl;
	}
	else {
		cout << "Tweet can't be over 140 characters" << endl;
	}
	

	return 0;
}
