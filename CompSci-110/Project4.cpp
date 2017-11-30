//
//  main.cpp
//  Project4
//
//  Created by Kyle Sponheim on 11/20/17.
//  Copyright © 2017 Kyle Sponheim. All rights reserved.
//

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class GameCharacter {
public:                                // The class' public functions
   string   GetName();                 // Name of character
   int   GetLevel();                   // Level of character
   int   GetCurrentHealth();           // Attack of character
   int   GetAttack();                  // Attack of character
   int   GetDefense();                 // Attack of character
   int   GetEvasion();                 // Attack of character
   void  SubtractHP(int damageTaken);  // Subtract health from the character's HP
   void  AddHP(int hpRestored);        // Add health to the character's HP
   int   CalculateDamage(int defense);            // Calculate damage dealth usering GetAttack()
   void  AttackOpponent(GameCharacter& opponent);
   GameCharacter(string initName);
   GameCharacter();
private:  // The class' private internal data members
   string    name;
   int       level;
   int       maxHealth;
   int       currentHealth;
   int       attack;
   int       defense;
   int       evasion;
};

GameCharacter::GameCharacter() {
   name  = "Default";             // Default name
   maxHealth = 100;               // Default price
   currentHealth = maxHealth;     // Default price
   attack = 5;
   defense = 3;
   evasion = 1;
   
   return;
}


GameCharacter::GameCharacter(string initName) {  // Default constructor
   name  = initName;              // Default name
   maxHealth = 100;               // Default price
   currentHealth = maxHealth;     // Default price
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

class Encounter {
public:
   GameCharacter getPlayer();
   GameCharacter getOpponent();
   void Battle();
   bool PrintMenu(bool &endEncounter);
   Encounter(GameCharacter &newPlayer);
   Encounter(GameCharacter &newPlayer, GameCharacter &newOpponent);
   Encounter();
private:
   GameCharacter player;
   GameCharacter opponent;
};

Encounter::Encounter(GameCharacter &newPlayer, GameCharacter &newOpponent) {
   cout << "Custom constructor called";
   player = newPlayer;
   opponent = newOpponent;
}

bool Encounter::PrintMenu(bool &endEncounter) {
   int userMenuChoice = 0;
   cout << getPlayer().GetName() << " has " << getPlayer().GetCurrentHealth() << " health" << endl;
   cout << getOpponent().GetName() << " has " << getOpponent().GetCurrentHealth() << " health" << endl;
   cout << endl << endl;
   
   cout << "Enter 1 to attack" << endl;
   cout << "Enter 2 to flee" << endl;
   cout << "Your choice: ";
   cin >> userMenuChoice;
      
   switch(userMenuChoice) {
      case 1:
         getPlayer().AttackOpponent(opponent);
         break;
      case 2:
         endEncounter = true;
         break;
      default:
         cout << "Invalid input" << endl;
         break;
      }
   getOpponent().AttackOpponent(player);
   return endEncounter;
}

void Encounter::Battle() {
   bool endEncounter = false;
   do {
     PrintMenu(endEncounter);
   }while(!endEncounter && (getPlayer().GetCurrentHealth() > 0 && getOpponent().GetCurrentHealth() > 0));
}

GameCharacter Encounter::getPlayer() {
   return player;
}

GameCharacter Encounter::getOpponent() {
   return opponent;
}

int main() {
   GameCharacter player("Kyle");
   GameCharacter opponent("Jason");
   Encounter encounter(player, opponent);
   
   encounter.Battle();
   return 0;
}
