// lab15_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

void PrintFace() {
	char c = 'o', nose = '>';
	cout << "\n  " << c << "   " << c << "\n"; //Eyes
	cout << "    " << nose << "\n"; //Nose
	cout << "  " << c << c << c << c << c << "\n\n"; //Mouth
	return;
}

void PrintHappyFace() {
	char c = 'o', nose = '>';
	cout << "\n  " << c << "   " << c << "\n"; //Eyes
	cout << "    " << nose << "\n"; //Nose
	cout << "  " << c << " " << " " << " " << c << "\n"; //Mouth
	cout << "  " << " " << c << c << c << " " << "\n\n"; //Mouth

	return;
}

void PrintSadFace() {
	char c = 'o', nose = '>';
	cout << "\n  " << c << "   " << c << "\n"; //Eyes
	cout << "    " << nose << "\n"; //Nose
	cout << "  " << " " << c << c << c << " " << "\n"; //Mouth
	cout << "  " << c << " " << " " << " " << c << "\n\n"; //Mouth
	return;
}

void partA() {
	char userInput = ' ';
	cout << "What type of face would you like? (H)appy or (S)ad?" << endl;
	cin >> userInput;

	if ((userInput == 'H') || (userInput == 'h')) {
		PrintHappyFace();
	}
	else if ((userInput == 'S') || (userInput == 's')) {
		PrintSadFace();
	}
	else {
		PrintFace();
	}
}
void partB() {
	const double liter = .264172;
	const double kilometer = .621371;

	double mpg, kpl;
	cout << "Enter miles per gallon" << endl;
	cin >> mpg;

	kpl = mpg * liter / kilometer;

	cout << "Miles per Gallon is: " << mpg << endl;
	cout << "Kilometers per Liter is: " << kpl << endl;

}
int main()
{
	//partA(); //Working
	partB();

	return 0;
}

