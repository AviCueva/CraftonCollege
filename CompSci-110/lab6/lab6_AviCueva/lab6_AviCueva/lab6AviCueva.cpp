// lab6AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int hwPart1_1() {
	bool parentCitizen = false;
	bool greenCardHolder = false;
	bool isMarriedCitizen = false;
	bool isMilitary = true;
	bool isFamilyMilitary = false;

	if (parentCitizen == true) {
		cout << "Congratulations you are eligible to become a citizen!" << endl;
	}
	else if (greenCardHolder == true) {
		cout << "Congratulations you are eligible to become a citizen!" << endl;
	}
	else if (isMarriedCitizen == true) {
		cout << "Congratulations you are eligible to become a citizen!" << endl;
	}
	else if (isMilitary == true) {
		cout << "Congratulations you are eligible to become a citizen!" << endl;
	}
	else if (isFamilyMilitary == true) {
		cout << "Congratulations you are eligible to become a citizen!" << endl;
	}
	else {
		cout << "Sorry, you are not eligible to become a citizen. :(" << endl;
	}
	return 0;
}

int hwPart1_2() {
	int side1 = 0;
	int side2 = 5;
	int side3 = 10;

	if ((side1 == side2) && (side1 == side3)) {
		cout << "We have an equilateral triagle!" << endl;
	}
	else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
		int numEqualSides = 1;
		if (side1 == side2) {
			numEqualSides +=1 ;
			cout << numEqualSides << endl;
		}
		if (side1 == side3) {
			numEqualSides +=1;
			cout << numEqualSides << endl;
		}
		if (side2 == side3) {
			numEqualSides +=1;
			cout << numEqualSides << endl;
		}
		
		if (numEqualSides == 2) {
			cout << "You have an isosceles triangle with " << numEqualSides << " equal sides!" << endl;
		}
	}
	else {
		cout << "You have a scalene triangle with no equal sides!" << endl;
	}


	return 0;
}

int hwPart2_1() {
	float num1, num2, num3;

	cout << "Enter the first number" << endl;
	cin >> num1;

	cout << "Enter the second number" << endl;
	cin >> num2;

	cout << "Enter the third number" << endl;
	cin >> num3;

	if ((num1 > num2) && (num1 > num2)) {
		cout << "Number 1 is the largest number with " << num1 << endl;
	}
	else if ((num2 > num1) && (num2 > num3)) {
		cout << "Number 2 is the largest number with " << num2 << endl;
	}
	else {
		cout << "Number 3 is the largest number with " << num3 << endl;
	}
	return 0;
}

int hwPart2_2() {
	float a, b, c, discriminant, ans1, ans2;
	float real, imaginary;

	cout << "What is your value for a?" << endl;
	cin >> a;
	cout << "What is your value for b?" << endl;
	cin >> b;
	cout << "What is your value for c?" << endl;
	cin >> c;

	// Calculate discriminant
	discriminant = (b * b) - (4 * a * c);
	cout << discriminant << endl;

	if (discriminant > 0) {
		cout << "There are 2 possible answers" << endl;
		ans1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
		ans2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);
		
		cout << "Answer 1 is " << ans1 << endl;
		cout << "Answer 2 is " << ans2 << endl;
	}
	else if (discriminant == 0) {
		cout << "You have the same answer" << endl;
		ans1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
		cout << "The answer is " << ans1 << endl;
	}
	else {
		cout << "There are some imaginery things going on." << endl;
			real = (-1 * b) / (2 * a);
			imaginary = sqrt(-1 * discriminant) / (2 * a);

				cout << "Answer 1 is " << real << " + " << imaginary << "i" << endl;
				cout << "Answer 1 is " << real << " - " << imaginary << "i" << endl;
	}


	return 0;
}
int main()
{
	// hwPart1_1();
	// hwPart1_2();
	// hwPart2_1();
	hwPart2_2();
	return 0;
}

