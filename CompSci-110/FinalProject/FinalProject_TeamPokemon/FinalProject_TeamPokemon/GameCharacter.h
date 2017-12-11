#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class GameCharacter {
public:                                           // The class' public functions
	string GetName();                            // Name of character
	int   GetLevel();
	GameCharacter(string initName);
	// Level of character
	int   GetCurrentHealth();                      // Current health of character
	int   GetAttack();                             // Attack of character
	int   GetDefense();                            // Defense of character
	int   GetEvasion();                            // Evasion of character
	void  SubtractHP(int damageTaken);             // Subtract health from the character's HP
	void  AddHP(int hpRestored);                   // Add health to the character's HP
	int   CalculateDamage(int defense);            // Calculate damage dealth usering GetAttack()
	void  AttackOpponent(GameCharacter& opponent); // Deal damage to a GameCharacter class
	double ChanceForMob();
	void increaseChance(double chance);
	int GameCharacter::increaseAttack(GameCharacter& player, int attack);
	void resetChance();
	

private:  // The class' private internal data members
	string    name;
	int       level;
	int       maxHealth;
	int       currentHealth;
	int       attack;
	int       defense;
	int       evasion;
	double	  chanceForMob;
};