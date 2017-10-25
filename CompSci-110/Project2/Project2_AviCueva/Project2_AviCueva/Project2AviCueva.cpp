/* Project2AviCueva.cpp : Game of Nim.
The game of Nim is a mathematical game of strategy with a number of variants.

Author: Avi Cueva
Class: CSCI-110
Date: 10/23/2017
*/

/* Psuedo-code
1. Figure out initial n, using random between 10 and 21.
2. randomly pick either computer or human
3. Alternate picking how many stones to remove, 3, 2, or 1.
4. repeat until someone has take the last stone.  They are the loser.
*/

#include "stdafx.h"
#include <Windows.h>
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

	cout << "**************** THE GAME OF NIM ****************" << endl << endl;
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

	if (stones >= 0) {
		return stones;
	}
	else if (stones == 1) {
		return -1;
	}
}

int playGame(int a, int b, int c) {
	// a = initialStones
	// b = difficulty, 0 = easy, 1 = hard
	// c = player, 0 = human, 1 = computer
	string player = " ";
	int stonesToRemove, stonesRemaining;
	bool winner = false;

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

	while (!winner) {
		if (player == "Human") {
			//Human turn stuff here
			cout << "It is your turn. Enter the number of stones you would like to remove: " << endl;
			cin >> stonesToRemove;
			if (((stonesToRemove == 1) || (stonesToRemove == 2) || (stonesToRemove == 3) && (player == "Human"))) {
				if (stonesRemaining > 4) {
					stonesRemaining = stonesRemaining - stonesToRemove;
					player = "Computer";
				}
				else if (((stonesRemaining - stonesToRemove) > 0) && (player == "Human")) {
					stonesRemaining = stonesRemaining - stonesToRemove;
					player = "Computer";
				}
				else if (((stonesRemaining - stonesToRemove) < 0) && (player == "Human")) {
					player = "Human";
				}
				else if (((stonesRemaining - stonesToRemove) == 0) && (player == "Human")) {
					winner = true;
				}
			}
			else {
				cout << stonesToRemove << " is not a valid move. Enter either 1, 2, or 3 for the number of stones. " << endl;
			}
		}

		else {
			cout << "The computer is choosing a move..." << endl;
			Sleep(500);
			if (difficulty == 0) { //easy
				stonesToRemove = rand() % 3 + 1;
				if (stonesRemaining > 4) {
					stonesRemaining = stonesRemaining - stonesToRemove;
					player = "Human";
				}
				else if ((stonesRemaining - stonesToRemove) > 0) {
					stonesRemaining = stonesRemaining - stonesToRemove;
					player = "Human";
				}
				else if ((stonesRemaining - stonesToRemove) < 0) {
					player = "Computer";
				}
				else if ((stonesRemaining - stonesToRemove) == 0) {
					winner = true;
				}
			}
			else { // hard
				if ((stonesRemaining == 1) || (stonesRemaining == 0)) {
					winner = true;
				}
				if ((stonesRemaining % 4 == 0) && (stonesRemaining > 3)) {
					stonesRemaining = stonesRemaining - 3;
					player = "Human";
				}
				else if (stonesRemaining > 1) {
					stonesRemaining = stonesRemaining - 1;
					player = "Human";
				}
			}

		}
		cout << "The pile now has " << stonesRemaining << " stones left. " << endl;
	}

	if ((winner == true) && (player == "Computer")) {
		cout << "Congratulations, you won!  :>" << endl << endl;
		cout << "*************** Thank you for playing ***************" << endl;
	}
	else {
		cout << "Sorry, you lost the game  :<" << endl << endl;
		cout << "*************** Thank you for playing ***************" << endl;
	}
	return 0;
}

int main() {
	// Set the random seed based on time.
	srand(time(0));

	initialStones = initialRandom(0);
	// cout << initialStones << endl; // Debugging line to very initialStones was populated.
	displayRules();
	difficulty = chooseMode(0); // 0 = easy, 1 = hard
	// cout << difficulty << endl; // Debugging line
	player = findPlayer(0); // 0 = Human, 1 = Computer

	playGame(initialStones, difficulty, player);

	return 0;
}

