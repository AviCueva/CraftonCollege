// 11_27_2017 Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

/

class Player{
public:
	void setName(string x);
	void setScore(int s);
	string getName(string n) {return n};

private:
	string name;
	int score;
};

Player::Player()
{
}


int main()
{
    return 0;
}

