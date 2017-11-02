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
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[0][3] = 4;
	matrix[1][0] = 5;
	matrix[1][1] = 6;
	matrix[1][2] = 7;
	matrix[1][3] = 8;
	matrix[2][0] = 9;
	matrix[2][1] = 10;
	matrix[2][2] = 11;
	matrix[2][3] = 12;
	matrix[3][0] = 13;
	matrix[3][1] = 14;
	matrix[3][2] = 15;
	matrix[3][3] = 16;
	
}
void setupMatrix(vector <vector<int> > & matrix) {
	

	//Grow rows by M
	matrix.resize(M);

	for (int i = 0; i < M; ++i)
	{
		//Grow Columns by N
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

			cout << matrixA[i][j] << " " << pow(matrixA[i][j],scalar) << endl;
		}

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
 
	return 0;
}




	

/*
cout << end << "New values";
for (i = 0; i < vctrovals.size(); ++i;) {
cout << " " << vxtvales.at(i);
}
cout << endl;
*/