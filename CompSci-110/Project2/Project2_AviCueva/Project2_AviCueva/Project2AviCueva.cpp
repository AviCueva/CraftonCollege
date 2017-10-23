// Project2AviCueva.cpp : Defines the entry point for the console application.
//

/* Psuedo-code
1. Figure out initial n, using random between 10 and 21.
2. randomly pick either computer or human 
3. Alternate picking how many stones to remove, 3, 2, or 1.
4. repeat until someone has take the last stone.  They are the loser.
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int initialStones, player, winner;
bool difficulty = 0;
string startPlayer = " ";

int initialRandom(int a) {

	a = (rand() % 11) + 10;
	// cout << a << endl; // Debugging line to make sure correct value was generated.
	
	return a;
}
int displayRules() {

	cout << "**************** THE GAME OF NIM ****************" << endl;
	cout << "Rules of the game:" << endl;
	cout << "* Each player can remove 1, 2, or 3 stones fromt he pile." << endl;
	cout << "* The player who makes the last move loses." << endl << endl;

	return 0;
}

int chooseMode(int a) {
	
	char choice = ' ';

	cout << "Choose mode:" << endl;
	cout << "Easy Mode (e) or Hard Mode (h): ";
	cin >> choice;

	if ((choice == 'e') || (choice == 'E')) {
		cout << "You have chosen the easy mode." << endl;
		return 0;
	}
	else if ((choice == 'h') || (choice == 'H')) {
		cout << "You have chosen the hard mode." << endl;
		return 1;
	}
	else {
		cout << "Please choose again: " << endl;
		chooseMode(0);
	}
} 

int findPlayer(int a) {

	player = rand() % 2;
	a = player;

	return a;
}

int removeStones(int a, int b) {
	// a = stones to remove
	// b = stones remaining
	int stones;

	stones = b - a;

	if (stones >=0) {
		return stones;
	}
	else{
		return -1;
	}
}

int playGame(int a, int b, int c) {
	// a = initialStones
	// b = difficulty, 0 = easy, 1 = hard
	// c = player, 0 = human, 1 = computer
	string player = " ";
	int stonesToRemove, stonesRemaining;

	if (c == 0) {
		player = "Human";
	}
	else {
		player = "Computer";
	}

	cout << "The initial number of stones is " << a << endl;
	cout << "Now a roll of the die to determine who plays first..." << endl;

	if (c == 0) {
		cout << "You play first." << endl << endl;
	}
	else {
		cout << "The Computer plays first." << endl << endl;

	} 

	stonesRemaining = a;

	while (a > 0) {
		if (player == "Human") {


		}
		else {
			cout << "The computer is choosing a move..." << endl;
			if (difficulty == 0) { //easy
				stonesToRemove = rand() % 3 + 1;
				stonesToRemove = removeStones(stonesToRemove, stonesRemaining);
				if (stonesToRemove < 0); {
					stonesToRemove = rand() % 3 + 1;
					stonesToRemove = removeStones(stonesToRemove, stonesRemaining);
				}


			}
			else { // hard

			}

		}

	}

	
}
int main(){
	// Set the random seed based on time.
	srand(time(0)); 

	initialStones = initialRandom(0);
	// cout << initialStones << endl; // Debugging line to very initialStones was populated.
	displayRules();
	difficulty = chooseMode(0); // 0 = easy, 1 = hard
	// cout << difficulty << endl; // Debugging line
	player = findPlayer(0); // 0 = Human, 1 = Computer

	winner = playGame(initialStones, difficulty, player);
	
	return 0;
}

