// HW2AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

/* Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. 
Display 16 characters on each line. */
int question1() {

	for (int i = 0; i <= 127; i++) {
		cout << static_cast<char>(i) << endl;
	}

	return 0;
}
/* Running on a particular treadmill you burn 3.9 calories per minute. Write a program that uses 
a loop to display the number of calories burned after 10, 15, 20, 25, and 30 minutes. */
int question2() {

	for (int i = 0; i <= 30; i++) {
		if ((i % 5 == 0) && (i > 9)) {
			double caloriesBurned = i ;
			caloriesBurned = caloriesBurned * (i * 3.9);
			cout << "You've burned " << caloriesBurned << " calories in " << i << " minutes." << endl;
		}
	}
	return 0;
}
/* Write a program that will predict the size of a population of organisms. The program should ask 
the user for the starting number of organisms, their average daily population increase 
(as a percentage), and the number of days they will multiply. A loop should display the size of the 
population for each day. Do not accept a number less than 2 for the starting size of the population. 
Do not accept a negative number for average daily population increase. Do not accept a number less 
than 1 for the number of days they will multiply.*/
int question3() {
	double sizeOrganisms = 0;
	double startingOrganisms = 0;
	double avgPopIncrease = 0; // Average Popuplate Increase
	double numDayMultiply = 0;

	cout << "Enter the starting number of Organism" << endl;
	cin >> startingOrganisms;
	if (startingOrganisms >=2){

	cout << "Enter their average daily population increase (as a percentage)" << endl;
	cin >> avgPopIncrease;
	if (avgPopIncrease < 0) {
		cout << "Sorry, can't have a negative" << endl; 
	}
	else {
		avgPopIncrease = avgPopIncrease / 100;

		cout << "How many days will the organisms multiply? " << endl;
		cin >> numDayMultiply;

		for (int i = 0; i < numDayMultiply; i++) {
			cout << "Day " << i << ": " << startingOrganisms << endl;
			for (int i = 0; i < 1; i++) {
				startingOrganisms = startingOrganisms * (1 + avgPopIncrease);
			}
		}
	}

	}
	return 0;
}
/* 4.	Write a program that asks the user for a positive integer no greater than 15. The program should then display a square on the screen using 
the character ‘X’. The number entered by the user will be the length of each side of the square. For example, if the user enters 5, the program 
should display the following:

XXXXX
XXXXX
XXXXX
XXXXX
XXXXX

*/
int question4() {
	int positionInt = 0;

	cout << "Give me a positive integer no greater than 15" << endl;
	cin >> positionInt;

	if (positionInt <= 15) {

		for (int i = 0; i < positionInt; i++) {
			for (int y = 0; y < positionInt; y++) {
				cout << "X";
			}
			cout << endl;
		}
	}
	else {
		cout << "Can't have a positive integer greater than 15" << endl;
	}
	
	return 0;
}

/*Write a program that asks the user for an integer and then prints out all its factors. For example, when the user enters 150, the program should print
2
3
5
5

*/
int question5() {
	int number = 0;

	cout << "Enter an integer: " << endl;
	cin >> number;

	do {
		if (number % 2 == 0) {
			cout << "2" << endl;
			number /= 2;
		}
		if (number % 3 == 0) {
			cout << "3" << endl;
			number /= 3;
		}
		if (number % 4 == 0) {
			cout << "4" << endl;
			number /= 4;
		}
		if (number % 5 == 0) {
			cout << "5" << endl;
			number /= 5;
		}
		if (number % 6 == 0) {
			cout << "6" << endl;
			number /= 6;
		}
		if (number % 7 == 0) {
			cout << "7" << endl;
			number /= 7;
		}
		if (number % 8 == 0) {
			cout << "8" << endl;
			number /= 8;
		}
		if (number % 9 == 0) {
			cout << "9" << endl;
			number /= 9;
		}
	} while (number > 0){
		cout << number << endl;
		break;
		}
		return 0;
}

/* 6.	Write a program that prompts the user for an integer and then prints out all prime numbers up to that integer. For example, when the user enters 20, the program should print
2
3
5
7
11
13
17
19
Recall that a number is prime if it is not divisible by any number except 1 and itself.

*/
int question6() {

	return 0;
}

/*
7.	Write a program that converts positive integers into the Roman number system. The Roman number system has digits
I	1
V	5
X	10
L	50
C	100
D	500
M	1000

Numbers are formed according to the following rules. (1) Only numbers up to 3,999 are represented. (2) As in the decimal system, the thousands, tens, and ones are expressed separately. (3) The numbers 1 to 9 are expressed as

I	1
II	2
III	3
IV	4
V	5
VI	6
VII	7
VIII	8
IX	9

As you can see, a I preceding a V or X is subtracted from the value, and you can never have more than three I’s in a row. (4) Tens and hundreds are done the same way, except that the letters X, L, C and C, D, M are used instead of I and V, X, respectively.

Your program should take an input, such as 1978, and convert it to Roman numerals, MCMLXXVIII.  The program should continue until the sentinel value of 0 is entered to denote the end of inputs.

*/
int question7() {

	return 0;
}
int main()
{
	// question1(); // Working
	// question2(); // Working
	// question3(); // Working
	// question4(); // Working
	question5();
	//question6();
	//question7();
    return 0;
}

