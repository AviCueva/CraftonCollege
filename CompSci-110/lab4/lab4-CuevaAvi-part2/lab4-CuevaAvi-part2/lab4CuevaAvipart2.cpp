// lab4CuevaAvipart2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	double exam1Grade, exam2Grade, exam3Grade;
	double prog1Score, prog2Score, prog3Score, prog4Score;
	double averageProgScore, averageExamScore;
	double overallGrade;

	cout << "Enter score on Exam 1 (out of 100): ";
	cin >> exam1Grade;

	cout << "Enter score on Exam 2 (out of 100): ";
	cin >> exam2Grade;

	cout << "Enter score on Exam 3 (out of 100): ";
	cin >> exam3Grade;

	cout << "Your overall exam grade is: " << ((exam1Grade + exam2Grade + exam3Grade) / 3.0) << endl;
	averageExamScore = ((exam1Grade + exam2Grade + exam3Grade) / 3.0);

	cout << "Enter score on Programming Assignment 1 (out of 50): ";
	cin >> prog1Score;

	cout << "Enter score on Programming Assignment 2 (out of 50): ";
	cin >> prog2Score;

	cout << "Enter score on Programming Assignment 3 (out of 50): ";
	cin >> prog3Score;

	cout << "Enter score on Programming Assignment 4 (out of 50): ";
	cin >> prog4Score;

	averageProgScore = (prog1Score + prog2Score + prog3Score + prog4Score) / 4.0;
	cout << "Your overall programming grade is: " << averageProgScore << endl;

	overallGrade = (0.6 * averageExamScore) + (0.4 * averageProgScore);

	cout << "Your overall grade is: " << overallGrade << endl;

	return 0;
}
