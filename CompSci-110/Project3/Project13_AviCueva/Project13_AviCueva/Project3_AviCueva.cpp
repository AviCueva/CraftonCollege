// Project13_AviCueva.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <limits>

const char player1 = 'X', player2 = 'O';

using namespace std;

const int rows = 3, cols = 3;
char board[rows][cols] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
char  winner = 'f';

void showRules() {
	cout << "*************** Tic - Tac - Toe ***************" << endl;
	cout << "Rules of game:" << endl;
	cout << "1. Players alternate placing Xs and Os on the board until either of one player\n" << "has three in a row, horizontally, vertically or diagonally" << endl;
	cout << "2. If a player is able to draw three Xs or three Os in a row, that player wins." << endl;
	cout << "3. If all nine squares are filled and neither player has three in a row, the game is a draw." << endl;
	cout << endl;
	cout << "Player will use \"X\".  Computer will use \"O\". " << endl;
	cout << endl;
	cout << endl;
}

void printBoard() {
	cout << "  0   1   2" << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << i << " ";
		for (int j = 0; j < cols; j++)
		{
			cout << board[i][j] << " | ";
		}
		cout << endl;
	}
}

int checkBoard()
{
	int result = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
			{
				result = 1;
			}
		}
	}
	return result;
}

char checkWinner()
{
	for (int i = 0; i < 3; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
			winner = board[i][0];
		}
		else if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {
			winner = board[0][i];
		}
		else if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) ||
			((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))) {
			winner = board[1][1];
		}
	}
	return winner;
}

int playGame(int die) {
	int r = 0, c = 0;
	if (die == 1) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				while (winner == 'f' || board[i][j] == ' ')
				{
					if (winner == 'X' || winner == 'O')
					{
						break;
					}
					else {
						cout << "Enter a column number between 0, 1, and 2:";
						//cout << "1" << endl; //debugging line
						cin >> c;
						while (!cin) {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "reenter column: ";
							//cout << "2" << endl; //debugging line
							cin >> c;
						}
						cout << "Enter a row number between 0, 1, and 2:";
						//cout << "3" << endl; //debugging line
						cin >> r;
						cout << endl;
						while (!cin) {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "reenter row: ";
							//cout << "4" << endl; //debugging line
							cin >> r;
						}
						while ((r >= 2 || r < 0) || (c >= 2 || c < 0))
						{
							cout << "reEnter a column number between 0, 1, and 2:";
							//cout << "5" << endl; //debugging line
							cin >> c;
							cout << endl;
							cout << "reEnter a row number between 0, 1, and 2:";
							cin >> r;
						}
						while (board[r][c] == 'X' || board[r][c] == 'O')														// Prevent over writting in the box
						{
							printBoard();
							cout << "reEnter a column number between 0, 1, and 2 because it already has an element:";
							//cout << "6" << endl; //debugging line
							cin >> c;
							cout << "reEnter a row number between 0, 1, and 2 because it already has an element:";
							cin >> r;
						}
					}
					cout << endl;

					board[r][c] = player2;

					printBoard();


				}
			}
		}
		return board[r][c];
	}
	else
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				while (winner == 'f' || board[i][j] == ' ')
				{
					if (winner == 'X' || winner == 'O')
					{
						break;
					}
					else {

						cout << "computer is choosing a move. \n";
						r = rand() % 3;
						c = rand() % 3;
						while (board[r][c] == 'X' || board[r][c] == 'O')														// Prevent over writting in the box
						{
							r = rand() % 3;
							c = rand() % 3;
						}
					}
					cout << "computer choose row: " << r;
					cout << endl;
					cout << "computer choose column: " << c;
					cout << endl;
					board[r][c] = player2;
					printBoard();

					for (int i = 0; i < rows; i++)

						if (checkWinner() == 'X')
						{
							break;
						}
						else if (checkWinner() == 'O')
						{
							break;
						}
					if (checkBoard() == 0)										//Call funtion to check if the board is full or not.
					{
						break;
					}
					cout << "Enter a row number between 0, 1, and 2:";
					cin >> r;
					cout << endl;
					while (!cin) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "reenter row: ";
						cin >> r;
					}
					cout << "Enter a column number between 0, 1, and 2:";
					cin >> c;
					while (!cin) {
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "reenter column: ";
						cin >> c;
					}
					while ((r > 3 || r < 0) || (c > 3 || c < 0))
					{
						cout << "reEnter a row number between 0, 1, and 2:";
						cin >> r;
						cout << "reEnter a column number between 0, 1, and 2:";
						cin >> c;
					}
					while (board[r][c] == 'X' || board[r][c] == 'O')														// Prevent over writting in the box
					{
						cout << "reEnter a row number between 0, 1, and 2 because it already has an element:";
						cin >> r;
						cout << "reEnter a column number between 0, 1, and 2 because it already has an element:";
						cin >> c;
					}
					cout << endl;
					board[r][c] = player1;

					printBoard();

					if (checkWinner() == 'X')
					{

						break;
					}
					else if (checkWinner() == 'O')
					{

						break;
					}
				}
			}
		}
	}

}
int main()
{

	int die = 0;
	srand(time(0));

	showRules();

	die = rand() % 2 + 1;

	printBoard();

	while (winner == 'f') {
		playGame(die);
		checkWinner();
		if (checkWinner() == 'X')
		{
			cout << "Congratulations! You won the game :)" << endl;
			break;
		}
		else if (checkWinner() == 'O')
		{
			cout << "Sorry you lost the game :(" << endl;
			break;
		}
		if (checkBoard() == 0)
		{
			cout << "The board is full.\n";
			cout << "The game is a draw." << endl;
			break;
		}
		if (winner == 'X' || winner == 'O')
		{
			break;
		}
	}
	return 0;
}



