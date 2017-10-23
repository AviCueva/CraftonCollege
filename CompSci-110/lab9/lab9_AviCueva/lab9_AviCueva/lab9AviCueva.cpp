// lab9AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int euclid() {
	int num1, num2, q, x, prevX, y, prevY, temp, temp1, temp2, temp3;
	cout << "Please input two positive integers, seperated by a space" << endl;
	cin >> num1 >> num2;

	if (num2 > num1) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	x = 0;
	y = 1;
	prevX = 1;
	prevY = 0;
	while (num2 != 0) {
		q = num1 / num2;
		temp1 = num1 % num2;
		num1 = num2;
		num2 = temp1;

		temp2 = x;
		x = prevX - q*x;
		prevX = temp2;

		temp3 = y;
		y = prevY - q*y;
		prevY = temp3;
	}

	cout << "GCD is " << num1 << endl;
	return 0;

}

/*
Create a program that generates a random number between 0 and 100.  The program then asks the user to guess the number.  
If the user’s guess is correct, the program congratulates the user and exits.  Otherwise, the program tells the user
whether the guess is too high or too low, and it lets the user guess again until the user provides the correct answer.
Here are sample outputs of the program:

Enter your guess: 6
Your guess is too low.  

Enter your guess: 15
Your guess is too high.

Enter your guess: 11
Your guess is too high.

Enter your guess: 10
Congratulations! 10 is the correct answer!

*/
int guessing() {
	srand(time(0));
	int randNum;
	int guess;

	randNum = rand() % 100;
	
	cout << randNum;

	do {
		cout << "Enter your guess between (0-100): ";
		cin >> guess;

		if (guess > randNum) {
			cout << "Guess is too high!" << endl;
		}
		if (guess < randNum) {
			cout << "Guess is too low!" << endl;
		}
		if (guess == randNum) {
			cout << "Congratulations!  Your guess of " << guess << " is the correct answer!" << endl;
			return 0;
		}
	} while (guess != randNum); {
		
	}
	return 0;
}

int main(){
	// euclid(); // Working
	 guessing();

	return 0;
}
