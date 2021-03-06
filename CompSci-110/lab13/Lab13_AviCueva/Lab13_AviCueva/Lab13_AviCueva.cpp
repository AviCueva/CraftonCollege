// Lab13_AviCueva.cpp : Defines the entry point for the console application.
//

/*
•	Read the values to be stored in the two 4 x 4 matrices from the user, assuming that the values are entered from the first row to the last,
in each of which numbers in the columns are entered sequentially. (You may assume that the user will enter exactly 16 values per matrix)


*/
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

const int M = 4; //ROWS
const int N = 4; //COLUMNS

void popMatrix(vector <vector<int> > & matrix) {
	matrix[0][0] = 2;
	matrix[0][1] = 3;
	matrix[0][2] = 4;
	matrix[0][3] = 5;
	matrix[1][0] = 6;
	matrix[1][1] = 7;
	matrix[1][2] = 8;
	matrix[1][3] = 9;
	matrix[2][0] = 10;
	matrix[2][1] = 11;
	matrix[2][2] = 12;
	matrix[2][3] = 13;
	matrix[3][0] = 14;
	matrix[3][1] = 15;
	matrix[3][2] = 16;
	matrix[3][3] = 17;

}

void setupMatrix(vector <vector<int> > & matrix) {

	//Grow ROWS by M
	matrix.resize(M);

	for (int i = 0; i < M; ++i)
	{
		//Grow COLUMNS by N
		matrix[i].resize(N);
	}
}

void sumMatrix(vector <vector<int> > matrixA, vector <vector<int> > matrixB) {

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{      //modify matrix

			cout << matrixA[i][j] << " " << matrixB[i][j] << " " << (matrixA[i][j] + matrixB[i][j]) << endl;
		}

	}
}

void scalarMatrix(vector <vector<int> > matrixA) {
	int scalar;
	cout << "Please give me a scalar: ";
	cin >> scalar;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{

			cout << matrixA[i][j] << " " << pow(matrixA[i][j], scalar) << endl;
		}

	}
}

void identityMatrix(vector <vector<int> > matrixA) {
	int numIdentity = 0;
	int otherNums = 0;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
		{
			if (matrixA[i][j] != 0) {
				otherNums += 1;
			}
			
		}
		if (matrixA[i][i] == 1) {
			numIdentity += 1;
		}
	}

	if ((numIdentity == M) && (otherNums == M)) {
		cout << "You have an identity matrix!" << endl;
	}
	else {
		cout << "Sorry, no identity matrix." << endl;
	}
	
}

int main() {
	int i = 0;

	vector <vector<int> > matrixA;
	vector <vector<int> > matrixB;

	setupMatrix(matrixA);
	setupMatrix(matrixB);

	popMatrix(matrixA);
	popMatrix(matrixB);

	sumMatrix(matrixA, matrixB);

	scalarMatrix(matrixA);

	identityMatrix(matrixA);

	return 0;
}
