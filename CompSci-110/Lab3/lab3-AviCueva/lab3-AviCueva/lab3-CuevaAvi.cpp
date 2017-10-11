// lab3AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int TreeNumber =0;

int main()
{
		cout << "Check it out, it's a tree!" << endl;
		cout << "   *  " << endl;
		cout << "  *** " << endl;
		cout << " *****" << endl;
		cout << "*******" << endl;
		cout << "  ***  " << endl;

		cout << "\n\n\n\n\n"; // Adding a 5 line break

		cout << "Check it out, it's a cat!" << endl;
		cout << " / \\ / \\  " << endl;
		cout << "   o o " << endl;
		cout << "  =   =" << endl;
		cout << "  --  -" << endl;
	
		cout << "\n\n\n\n\n"; // Adding a 5 line break

		cout << "Give me a number and I'll make you a triangle!" << endl;
		cin >> TreeNumber;
		cout << "\n\n\n"; // Adding a 3 line break

		cout << "  " << TreeNumber << "  " << endl;
		cout << " " << TreeNumber <<TreeNumber << TreeNumber << " " << endl;
		cout << TreeNumber << TreeNumber << TreeNumber << TreeNumber << TreeNumber << endl;

	return 0;
}

