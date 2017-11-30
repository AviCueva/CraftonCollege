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
public:                                           // The class' public functions
   string   GetName();                            // Name of character
   int   GetLevel();                              // Level of character
   int   GetCurrentHealth();                      // Current health of character
   int   GetAttack();                             // Attack of character
   int   GetDefense();                            // Defense of character
   int   GetEvasion();                            // Evasion of character
   void  SubtractHP(int damageTaken);             // Subtract health from the character's HP
   void  AddHP(int hpRestored);                   // Add health to the character's HP
   int   CalculateDamage(int defense);            // Calculate damage dealth usering GetAttack()
   void  AttackOpponent(GameCharacter& opponent); // Deal damage to a GameCharacter class
   GameCharacter(string initName);
private:  // The class' private internal data members
   string    name;
   int       level;
   int       maxHealth;
   int       currentHealth;
   int       attack;
   int       defense;
   int       evasion;
};

GameCharacter::GameCharacter(string initName) {  // Default constructor
   name  = initName;
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

int main() {
   GameCharacter player("Kyle");
   GameCharacter opponent("Jason");
   do {
      cout << endl << endl;
      cout << "player has " << player.GetCurrentHealth() << " health" << endl;
      cout << "opponent has " << opponent.GetCurrentHealth() << " health" << endl;
      player.AttackOpponent(opponent);
      cout << "after a vicious attack from player, opponent has " << opponent.GetCurrentHealth() << " health." << endl;
      opponent.AttackOpponent(player);
      cout << "after a vicious attack from opponent, player has " << player.GetCurrentHealth() << " health." << endl;
   }while(player.GetCurrentHealth() > 0 && opponent.GetCurrentHealth() > 0);
   
   return 0;
}
