// Ch2Section7.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main() {
	const double HOMEWORK_MAX = 80.0;
	const double MIDTERM_MAX = 40.0;
	const double FINAL_MAX = 70.0;
	const double HOMEWORK_WEIGHT = 0.20; // 20%
	const double MIDTERM_WEIGHT = 0.30;
	const double FINAL_WEIGHT = 0.50;

	double homeworkScore = 0.0;
	double midtermScore = 0.0;
	double finalScore = 0.0;
	double coursePercentage = 0.0;

	cout << "Enter homework score:" << endl;
	cin >> homeworkScore;

	cout << "Enter midterm exam score:" << endl;
	cin >> midtermScore;

	cout << "Enter final exam score: " << endl;
	cin >> finalScore;

	homeworkScore /= HOMEWORK_MAX;
	midtermScore /= MIDTERM_MAX;
	finalScore /= FINAL_MAX;

	coursePercentage = ((homeworkScore * HOMEWORK_WEIGHT) + (midtermScore * MIDTERM_WEIGHT) + (finalScore * FINAL_WEIGHT));
		+ 0.0  // FIXME for midterm
		+ 0.0; // FIXME for final 
	coursePercentage = coursePercentage * 100; // Convert fraction to %

	cout << endl << "Your course percentage is " << coursePercentage << " :" << endl;
	cout << coursePercentage << endl;

	return 0;
}
