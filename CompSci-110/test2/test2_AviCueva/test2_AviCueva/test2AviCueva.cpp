// test2AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

double cir1Radius, cir2Radius, cir1XCoord, cir1YCoord, cir2XCoord, cir2YCoord, dist;

int fancyGraphicTop(int a) {
	for (int i = 1; i < a+1; ++i) {
		cout << "\\" << endl;
		for (int j = 0; j < i; ++j) {
			cout << " ";
		}
	}
	return 0;
}

int fancyGraphicBottom(int a) {
	for (int i = 1; i < a + 1; i++) {
		for (int j = a; j > i; --j) {
			cout << " ";
		}
	cout << "/" << endl;
	}
	return 0;
}

// Prompts user for Circle information and performs collision calculations
int calcCircles(){
	cout << "Enter the coordinates of the center of the circle 1: ";
	cin >> cir1XCoord >> cir1YCoord;
	// cout << cir1XCoord << " " << cir1YCoord << endl; // Used for debugging
	cout << "Enter the radius of the circle 1: ";
	cin >> cir1Radius;
	// cout << cir1Radius << endl; // Used for debugging

	cout << "Enter the coordinates of the center of the circle 2: ";
	cin >> cir2XCoord >> cir2YCoord;
	// cout << cir2XCoord << " " << cir2YCoord << endl; // Used for debugging
	cout << "Enter the radius of the circle 2: ";
	cin >> cir2Radius;
	// cout << cir2Radius << endl; // Used for debugging

	// calculating distance
	dist = sqrt(pow((cir2XCoord - cir1XCoord), 2)+ pow((cir2YCoord - cir2YCoord), 2));
	// cout << dist << endl; // Used for debuggin
	
	if (dist < (cir1Radius + cir2Radius)) {
		cout << "The two circles collided" << endl;
	}
	else {
		cout << "The two circles did not collide" << endl;
	}

	return 0;
}
int main()
{
	fancyGraphicTop(5);
	cout << "   " << "COLLISTION DETECTION PROGRAM - AVI CUEVA" << endl;
	fancyGraphicBottom(5);
	calcCircles();
    return 0;
}