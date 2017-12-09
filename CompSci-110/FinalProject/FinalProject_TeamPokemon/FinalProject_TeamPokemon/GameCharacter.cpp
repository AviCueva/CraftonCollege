
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

#include "GameCharacter.h"

using namespace std;

GameCharacter::GameCharacter(string initName) {  // Default constructor
	name = initName;
	maxHealth = 100;
	currentHealth = maxHealth;
	attack = 5;
	defense = 3;
	evasion = 1;

	return;
}

int GameCharacter::GetCurrentHealth() {
	return currentHealth;
}

string GameCharacter::GetName() {
	return name;
}

// "GameCharacter::" means SubtractHP is a GameCharacter member function
void GameCharacter::SubtractHP(int damageTaken) {
	currentHealth = currentHealth - damageTaken <= 0 ? 0 : currentHealth - damageTaken;
	return;
}

void GameCharacter::AddHP(int hpRestored) {
	currentHealth = currentHealth += hpRestored >= maxHealth ? maxHealth : currentHealth += hpRestored;
	return;
}

int GameCharacter::CalculateDamage(int defense) {
	return static_cast<int>(attack * (rand() % 10 + 1) * (defense * 0.11));
}

void GameCharacter::AttackOpponent(GameCharacter& opponent) {
	int damageTaken = CalculateDamage(opponent.defense);
	opponent.SubtractHP(damageTaken);
	cout << opponent.GetName() << " took a whopping " << damageTaken << " damage!" << endl;
}