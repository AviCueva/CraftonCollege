// hW1CuevaAvi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>  

using namespace std;

int firstNumber = 0;
int secondNumber = 0;

/* Write a program that asks the user to enter two numbers. The program should use the conditional
operator to determine which number is the smaller and which is the larger.*/
int question1()
{
	cout << "You will be asked to enter 2 numbers" << endl;
	cout << "Enter your first number:" << endl;
	cin >> firstNumber;

	cout << "Enter your second number:" << endl;
	cin >> secondNumber;
	
	if (firstNumber > secondNumber) {
		cout << "First number is larger!" << endl;
	}
	else
		cout << "Second number is larger!" << endl;
	return 0;
}

/* Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch 
statement to display the Roman numeral version of that number. Do not accept a number less than 1 or 
greater than 10.*/
int question2()
{
	int number = 0;
	cout << "Enter a number between 1 ans 10: " << endl;
	
	cin >> number;

	switch (number) {
	case 1:
		cout << "Your number " << number << " is I as a Roman Numeral." << endl;
		break;
	case 2:
		cout << "Your number " << number << " is II as a Roman Numeral." << endl;
		break;
	case 3:
		cout << "Your number " << number << " is III as a Roman Numeral." << endl;
		break;
	case 4:
		cout << "Your number " << number << " is IV as a Roman Numeral." << endl;
		break;
	case 5:
		cout << "Your number " << number << " is V as a Roman Numeral." << endl;
		break;
	case 6:
		cout << "Your number " << number << " is VI as a Roman Numeral." << endl;
		break;
	case 7:
		cout << "Your number " << number << " is VII as a Roman Numeral." << endl;
		break;
	case 8:
		cout << "Your number " << number << " is VIII as a Roman Numeral." << endl;
		break;
	case 9:
		cout << "Your number " << number << " is IX as a Roman Numeral." << endl;
		break;
	case 10:
		cout << "Your number " << number << " is X as a Roman Numeral." << endl;
		break;
	default:
		cout << "Your number needs to be between 1 and 10. " << endl;
	}
	return 0;
}

/* The date June 10, 1960 is magic because when we write it in the following format, the month times 
the day equals the year:
6/10/60

Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. 
The program should then determine whether the month times the day is equal to the year. If so, it 
should display a message saying the date is magic. Otherwise it should display a message saying the 
date is not magic.*/
int question3() {
	int month, day, year, magicNumber;

	cout << "Enter a month in numeric form: " << endl;
	cin >> month;
	cout << "Enter a day of month in numeric form: " << endl;
	cin >> day;
	cout << "Enter a year in numeric form: " << endl;
	cin >> year;

	magicNumber = month * day;

	if (magicNumber == year) {
		cout << "You have a magic number! " << endl;
	}
	else {
		cout << "Sorry, you are not special. " << endl;
	}
	return 0;
}

/* Create a change-counting game that gets the user to enter the number of coins required to make 
exactly one dollar. The program should ask the user to enter the number of pennies, nickels, dimes,
and quarters. If the total value of the coins entered is equal to one dollar, the program should 
congratulate the user for winning the game. Otherwise, the program should display a message 
indicating that the amount entered was more than or less than one dollar.*/
int question4() {
	int pennies, nickels, dimes, quarters;
	int total;

	cout << "Enter the number of pennies you have: " << endl;
	cin >> pennies;
	cout << "Enter the number of nickels you have: " << endl;
	cin >> nickels;
	cout << "Enter the number of dimes you have: " << endl;
	cin >> dimes;
	cout << "Enter the number of quarters you have: " << endl;
	cin >> quarters;

	total = (pennies)+(nickels * 5) + (dimes * 10) + (quarters * 25);

	if (total == 100) {
		cout << "Your total equals 1 dollar! " << endl;
	}
	else{
		cout << "Sorry, your total equals " << total << " cents." << endl;
		if (total > 100) {
			cout << "Your total is over 1 dollar. " << endl;
		}
		else
			cout << "Your total is under 1 dollar. " << endl;
	}
	return 0;
}

/*Write a program that asks for the name of a pole vaulter and the dates and vault heights 
(in meters) of the athlete’s three best vaults. It should then report, in order of height 
(best first), the date on which each vault was made and its height. Only accept values 
between 2.0 and 5.0 for the heights.
*/
int question5() {

	string name, vaultDate1, vaultDate2, vaultDate3;
	double vaultHeight1, vaultHeight2, vaultHeight3, vaultTemp;

	cout << "What is the Pole Vaulter's name? " << endl;
	cin >> name;
	cout << "Enter the date of " << name << "'s first jump: ";
	cin >> vaultDate1;
	cout << "What was " << name << "'s vault height in meters on " << vaultDate1 << ": ";
	cin >> vaultHeight1;
	cout << "Enter the date of " << name << "'s second jump: ";
	cin >> vaultDate2;
	cout << "What was " << name << "'s vault height in meters on " << vaultDate2 << ": ";
	cin >> vaultHeight2;
	cout << "Enter the date of " << name << "'s third jump: ";
	cin >> vaultDate3;
	cout << "What was " << name << "'s vault height in meters on " << vaultDate3 << ": ";
	cin >> vaultHeight3;

	// cout << vaultHeight1 << endl; //used for debugging
	int i = 0;
	if (vaultHeight1 >= 2.0 && vaultHeight1 <= 5.0 && vaultHeight2 >= 2.0 && vaultHeight2 <= 5.0
		&& vaultHeight3 >= 2.0 && vaultHeight3 <= 5.0)
	{
		for (int i = 0; i < 3; i++) {
			if (vaultHeight1 < vaultHeight2) {
				vaultTemp = vaultHeight1;
				vaultHeight1 = vaultHeight2;
				vaultHeight2 = vaultTemp;
			}
			if (vaultHeight2 < vaultHeight3) {
				vaultTemp = vaultHeight2;
				vaultHeight2 = vaultHeight3;
				vaultHeight3 = vaultTemp;
			}
			if (vaultHeight3 < vaultHeight1) {
				vaultTemp = vaultHeight3;
				vaultHeight3 = vaultHeight1;
				vaultHeight1 = vaultTemp;
			}

		}
		cout << name << " here are you times from best to worst: " << endl;
		cout << vaultHeight3 << " meters on " << vaultDate3 << endl;
		cout << vaultHeight2 << " meters on " << vaultDate2 << endl;
		cout << vaultHeight1 << " meters on " << vaultDate1 << endl;
	}
	else {
		cout << "Your jump values cannot be below 0 and above 5.0" << endl;
			
	}
	return 0;
}

/* The following table shows the approximate speed of sound in air, water, and steel.
Medium               Speed

Air                          1,100 feet/second

Water                   4,900 feet/second

Steel                      16,400 feet/second

Write a program that displays a menu allowing the user to select air, water, or steel. After the 
user has made a selection, he or she should be asked to enter the distance a sound wave will 
travel in the selected medium. The program will then display the amount of time it will take. 
Round the answer to four decimal places. Check that the user has selected one of the available 
choices from the menu. Do not accept distances less than 0.
*/
int question6() {
	int choice;
	float distanceTraveled, time;

	cout << endl
		<< " 1 - Air \n"
		<< " 2 - Water \n"
		<< " 3 - Steel \n"
		<< " 4 - Exit.\n"
		<< " Enter your choice and press return: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You've selected Air!" << endl << "Please enter the distance in feet a sound wave will travel in the air: " << endl;
		cin >> distanceTraveled;
		if (distanceTraveled <= 0) {
			cout << "Not a valid distance traveled!" << endl;
			break;
		}
		else {
			time = distanceTraveled / 1100;
			cout << "Based on a distance of " << distanceTraveled << " it will take " << std::fixed << std::setprecision(4) << time << " seconds." << endl;
			break;
		}
	case 2:
		cout << "You've selected Water!" << endl << "Please enter the distance in feet a sound wave will travel in water: " << endl;
		cin >> distanceTraveled;
		if (distanceTraveled <= 0) {
			cout << "Not a valid distance traveled!" << endl;
			break;
		}
		else {
			time = distanceTraveled / 4900;

			cout << "Based on a distance of " << distanceTraveled << " it will take " << std::fixed << std::setprecision(4) << time << " seconds." << endl;
			break;
		}
	case 3:
		cout << "You've selected Steel!" << endl << "Please enter the distance in feet a sound wave will travel in steel: " << endl;
		cin >> distanceTraveled;
		if (distanceTraveled <= 0) {
			cout << "Not a valid distance traveled!" << endl;
			break;
		}
		else {
			time = distanceTraveled / 16400;

			cout << "Based on a distance of " << distanceTraveled << std::fixed << std::setprecision(4) << " it will take " << time << " seconds." << endl;
			break;
		}
	case 4:
		cout << "End of Program.\n";
		break;
	default:
		cout << "Not a Valid Choice. \n";

		return 0;
	}
}

/*A long - distance carrier charges the following rates for telephone calls :
Starting Time of Call        Rate per Minute

00 : 00 – 06 : 59                     0.12

07 : 00 – 19 : 00                     0.55

19 : 01 – 23 : 59                     0.35

Write a program that asks for the starting time and the number of minutes of the call, and displays the charges.
The program should ask for the time to be entered as a floating - point number in the form HH.MM.For example,
07 : 00 hours will be entered as 07.00, and 16 : 28 hours will be entered as 16.28.The program should not accept times that are
greater than 23 : 59. Also no number whose last two digits are greater than 59 should be accepted.
*/


int question7() {
		float startTime, callDuration, cost,Mins, Hrs, startMinutes, callDurationMins;

			cout << "Enter the starting time of the call in the form HH.MM: ";
			cin >> startTime;
			cout << "Enter the number of minutes of the call in the form HH.MM: ";
			cin >> callDuration;

			Hrs = static_cast<int>(callDuration);
			Mins = callDuration - static_cast<int>(callDuration);
			callDurationMins = (Hrs * 60) + (Mins * 100);
			startMinutes = startTime - static_cast<int>(startTime);

			if (Mins <= .59 && startMinutes <= .59)
			{
				cout << fixed << showpoint << setprecision(2);
				if (startTime >= 00.00 && startTime <= 06.59)
				{
					cost = callDurationMins * 0.12;
					cout << "Cost of call: $" << cost << endl;
				}
				else if (startTime <= 19.00)
				{
					cost = callDurationMins * 0.55;
					cout << "Cost of call: $" << cost << endl;
				}
				else if (startTime <= 23.59)
				{
					cost = callDurationMins * 0.35;
					cout << "Cost of call: $" << cost << endl;
				}
				else
					cout << "Call times cannot be less than 00.00 minutes or greater than 23.59 minutes." << endl;
			}
			else
				cout << "Last two digts must be less than 59." << endl;
			return 0;
}

/* Write a program that translates a number between 0 and 4 into the closest letter grade. For 
example, the number 2.8 would be converted to B-. Break ties in favor of the better grade; for 
example 2.85 should be a B.
*/
/* I used the following scale
A+ 97-100 4.0
A 93-96 4.0
A- 90-92 3.7
B+ 87-89 3.3
B 83-86 3.0
B- 80-82 2.7
C+ 77-79 2.3
C 73-76 2.0
C- 70-72 1.7
D+ 67-69 1.3
D 65-66 1.0
F Below 65 0.0
*/
int question8() {
	float numberGrade;
	string letterGrade;

	cout << "What is your number grade?" << endl;
	cin >> numberGrade;

	numberGrade = round(numberGrade * 100);
	cout << numberGrade << endl;
	numberGrade = numberGrade / 100;
	cout << numberGrade << endl;
	numberGrade = round(numberGrade);

	if (numberGrade >= 4.0) {
		cout << "You got an A" << endl;
	}
	if ((numberGrade < 4.0) && (numberGrade >= 3.7)) {
		cout << "You got an A-" << endl;
	}
	if ((numberGrade < 3.7) && (numberGrade >= 3.3)) {
		cout << "You got an B+" << endl;
	}
	if ((numberGrade <= 3.3) && (numberGrade >= 3.0)) {
		cout << "You got an B" << endl;
	}
	if ((numberGrade < 3.0) && (numberGrade >= 2.7)) {
		cout << "You got an B-" << endl;
	}
	if ((numberGrade < 2.7) && (numberGrade >= 2.3)) {
		cout << "You got an C+" << endl;
	}
	if ((numberGrade < 2.3) && (numberGrade >= 2.0)) {
		cout << "You got an C" << endl;
	}
	if ((numberGrade < 2.0) && (numberGrade >= 1.7)) {
		cout << "You got an C-" << endl;
	}
	if ((numberGrade < 1.7) && (numberGrade >= 1.3)) {
		cout << "You got an D+" << endl;
	}
	if ((numberGrade < 1.3) && (numberGrade >= 1.0)) {
		cout << "You got an D" << endl;
	}
	else {
		cout << "You failed" << endl;
	}
	return 0;
}

int main()
{
	// question1(); // Working
	// question2(); // Working
	// question3(); // Working
	// question4(); // Working
	// question5(); // Working
	// question6(); // Working
	//  question7(); // Working
	 question8(); // Working

	return 0;
}