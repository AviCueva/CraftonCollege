//
//  FinalProject_TeamPokemon.cpp
//  Final Project
//
//  Created by Team Pokemon!
//  Copyright © 2017 Kyle Sponheim and friends. All rights reserved.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "GameCharacter.h"
#include "Console.h"
#include "windows.h"
#include "enemy.h"
#include "slider.h"
#include <sstream>
#include <fstream>

using namespace std;

bool gamerunning = true;
bool runaway = false;

void gamePlay(GameCharacter& player, GameCharacter& opponent) {
	//GameCharacter player("Kyle");
	//GameCharacter opponent("Jason");
	do {
		system("cls");
		for (int i = 0; i < 27; i++)
		{
			cout << battleMap[i] << endl;
		}
		for (int i = 0; i < 1; i++)
		{
			cout << "Player's Health: "<< player.GetCurrentHealth() << " Opponent has: " << opponent.GetCurrentHealth() << " health" << endl;
			cout << "Your choices are,(F)ight, or (R)un " << endl;
			system("pause>nul");
			if ((GetAsyncKeyState('F')) || (GetAsyncKeyState('f'))) {
				player.AttackOpponent(opponent);
				cout << "after a vicious attack from player, opponent has " << opponent.GetCurrentHealth() << " health." << endl;
				opponent.AttackOpponent(player);
				cout << "after a vicious attack from opponent, player has " << player.GetCurrentHealth() << " health." << endl;
				Sleep(3000);
			}
			if ((GetAsyncKeyState('R')) || (GetAsyncKeyState('r'))) {
				cout << "You ran away! " << endl;
				Sleep(500);
				runaway = true;
			}
			
		}
		for (int i = 0; i < 1; i++)
		{
			cout << dialog << endl;
		}
		
	} while ((player.GetCurrentHealth() > 0 && opponent.GetCurrentHealth() > 0) && (!runaway));
}


void OverWorld();
void systemColor();
void asciiTest();
void saveGame(GameCharacter& player);

enemy enemy1;
slider slider1;
Console console;


int main() {

	// gamePlay();
	//asciiTest();
	OverWorld();
	//systemColor(); //used to figure out what colors to use
	return 0;
}

void systemColor() {
	const WORD colors[] =
	{
		0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
		0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
	};

	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD   index = 0;

	// Remember how things were when we started
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);

	// Draw pretty colors until the user presses any key
	//while (WaitForSingleObject(hstdin, 10) == WAIT_TIMEOUT)
	for (int i=0; i < sizeof(colors); i++)
	{
		SetConsoleTextAttribute(hstdout, colors[index]);
		std::cout << "\t\t\t\t Hello World \t\t\t\t" << std::endl;
		if (++index > sizeof(colors) / sizeof(colors[0]))
			index = 0;
	}

	// Tell the user how to stop
	SetConsoleTextAttribute(hstdout, 0xEC);
	std::cout << "Press any key to quit.\n";

	FlushConsoleInputBuffer(hstdin);

	// Keep users happy
	SetConsoleTextAttribute(hstdout, csbi.wAttributes);


}
void OverWorld() {
	GameCharacter player("Kyle");
	GameCharacter opponent("Jason");
	while (gamerunning)
	{
		system("Color 1A");
		
		
		if (player.ChanceForMob() > 1) {
			player.increaseAttack(player, 10);
			runaway = false;
			gamePlay(player, opponent);
			player.resetChance();
			player.AddHP(100);
			opponent.AddHP(100);
			saveGame(player);
		}
		stringstream ss;
		ss << number_of_coins;
		string items = "Coins: ";
		items += ss.str();

		stringstream ss2;
		ss2 << player.GetCurrentHealth();
		string health = "Health: ";
		health += ss2.str();

		map[1][26] = '>';
		map[2][30] = '<';

		system("cls");
		for (int i = 0; i < 27; i++)
		{
			cout << map[i] << endl;
		}
		for (int i = 0; i < 1; i++)
		{
			cout << items << "    " << health << "  Chance for player to run into a mob: " << player.ChanceForMob() << endl;
		}
		for (int i = 0; i < 1; i++)
		{
			cout << dialog << endl;
		}
		system("pause>nul");

		//enemy1.Init(5, 20);
		//slider1.Init_Hor(6, 46);

		if (GetAsyncKeyState(VK_UP)){
			console.Move(-1, 0);
			player.increaseChance(.15);
		}
		if (GetAsyncKeyState(VK_DOWN)){
			console.Move(1, 0);
			player.increaseChance(.15);
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			console.Move(0, 1);
			player.increaseChance(.15);
		}
		if (GetAsyncKeyState(VK_LEFT)){
			console.Move(0, -1);
			player.increaseChance(.15);
		}
		if (GetAsyncKeyState(VK_RETURN) && dialog_displayed)
			dialog = "";
		if (y == 1 && x == 26)
		{
			y = 1;
			x = 30;
		}
		if (y == 2 && x == 30)
		{
			y = 2;
			x = 25;
		}
		/*if ((y == 2 && x == 35) && number_of_coins > 19 &&
			(GetAsyncKeyState(VK_RETURN)))
		{
			dialog = "You bought the Money Key!";
			dialog_displayed = true;
			number_of_coins -= 20;
			got_key2 = true;
			map[1][35] = ' ';
		}
		else if ((y == 2 && x == 35) && number_of_coins < 20 &&
			(GetAsyncKeyState(VK_RETURN)) && !got_key2)
		{
			dialog = "You don't have enough money to buy the money key!";
			dialog_displayed = true;
		}*/
	}
	system("pause");
}

void asciiTest() {
	char ch = ' ';
	int counter = 0;
	while (counter<137)
	{
		cout << "ASCII Code for " << ch << " is " << 'ch' << "/n" << endl;
		ch++;
		++counter;
	}
	system("pause");
	
}

void saveGame(GameCharacter& player) {
	ofstream saveFile;
	saveFile.open("saveFile.txt");
	saveFile << "Health: " << player.GetCurrentHealth() << endl;
	saveFile << "Attack Power:" << player.GetAttack() << endl;
	saveFile.close();
}
