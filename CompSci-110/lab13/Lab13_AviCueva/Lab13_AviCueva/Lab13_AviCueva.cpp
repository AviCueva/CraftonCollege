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

using namespace std;

//vector <int> matrixA[0][0] ==1;
//vector <int> matrixB;

void popMatrix(vector <vector<int> > & matrixA) {
	matrixA[0][0] = 1;
	matrixA[0][1] = 2;
	matrixA[0][2] = 3;
	matrixA[0][3] = 4;
	matrixA[1][0] = 5;
	matrixA[1][1] = 6;
	matrixA[1][2] = 7;
	matrixA[1][3] = 8;
	matrixA[2][0] = 9;
	matrixA[2][1] = 10;
	matrixA[2][2] = 11;
	matrixA[2][3] = 12;
	matrixA[3][0] = 13;
	matrixA[3][1] = 14;
	matrixA[3][2] = 15;
	matrixA[3][3] = 16;
	
}
int main() {

	vector <vector<int> > matrixA;

	//m * n is the size of the matrix

	int m = 4, n = 4, i=0;
	//Grow rows by m
	matrixA.resize(m);
	for (int i = 0; i < m; ++i)
	{
		//Grow Columns by n
		matrixA[i].resize(n);
	}
	popMatrix(matrixA);

	//you can use the Matrix, now


	//OR
	for (i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{      //modify matrix
		
			cout << matrixA[i][j]<< endl;
		}

	}
    
	return 0;
}




	

/*
cout << end << "New values";
for (i = 0; i < vctrovals.size(); ++i;) {
cout << " " << vxtvales.at(i);
}
cout << endl;
*/