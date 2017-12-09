//
//  main.cpp
//  Project4
//
//  Created by Kyle Sponheim on 11/20/17.
//  Copyright © 2017 Kyle Sponheim. All rights reserved.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "GameCharacter.h"

using namespace std;

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
	} while (player.GetCurrentHealth() > 0 && opponent.GetCurrentHealth() > 0);

	return 0;
}
