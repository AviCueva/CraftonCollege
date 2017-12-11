#include "stdafx.h"
#include "Console.h"
#include "GameCharacter.h"

int x = 6;
int y = 6;

int number_of_coins = 0;
int health = 100;

string dialog = "";

bool dialog_displayed = false;
bool treasure_opened = false;
bool got_key = false;
bool got_key2 = false;

char map[27][120] = {
	"#######################################################################################################################",
	"#                     mmnnmnn                                                                 ^    ^                  #",
	"#   /Town\\            mnnnmnnnn                                                              ^^^^^ ^^B^ ^             #",
	"#  / ____ \\           mnmnnnmn                                                              ^^  ^^^^^  ^ ^            #",
	"# /| |  | |\\           nnnnnn                                                               ^^^^^^^^^^   ^^^^         #",
	"#  |_|  |_|            nnn                                                                                            #",
	"#     @                 n                                                                                             #",
	"#                                                                                                                     #",
	"#                     nn n                                                                                            #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                             w                                                       #",
	"#                                                    w       w w                                                      #",
	"#                                                  wwww     wwwww                                                     #",
	"#                                                 wwwwww  wwwww ww                                                    #",
	"#                                                wwwwwwwwwwwwwww www                                                  #",
	"#                                                w wwwwwwwwwwwwwww ww                                                 #",
	"#                                                  wwwwwwwwwwwwwwwwww                                                 #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#######################################################################################################################"};

char battleMap[27][120] = {
	"#######################################################################################################################",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"##################################################################################################################### #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#                                                                                                                     #",
	"#######################################################################################################################" };
   
Console::Console()
{
}

//money key at map[1][35]
Console::~Console()
{
}

void Console::Move(int V, int H)
{
	int y2 = y + V;
	int x2 = x + H;

	if (map[y2][x2] == '+')	
		treasure_opened = true;

	if (map[y2][x2] == 'X')
		health += 10;

	if (map[y2][x2] == '!')
	{
		got_key = true;
		dialog = "You got the X key!";
		dialog_displayed = true;
	}

	if (map[y2][x2] == '*')
		number_of_coins++;

	if (map[y][x2] == ' '
		|| map[y][x2] == '*'
		|| map[y][x2] == '+'
		|| map[y][x2] == '!'
		|| map[y][x2] == '>'
		|| map[y][x2] == '<'
		|| map[y][x2] == 'X'
		|| (map[y][x2] == ']'
			&& got_key)
		|| (map[y][x2] == '('
			&& got_key2)
		|| (map[y][x2] == ')'
			&& got_key2))
	{
		map[y][x] = ' ';
		x += H;
		map[y][x] = '@';
    }
	if (map[y2][x] == ' '
		|| map[y2][x] == '*'
		|| map[y2][x] == '+'
		|| map[y2][x] == '!'
		|| map[y2][x] == '>'
		|| map[y2][x] == '<'
		|| map[y2][x] == 'X'
		|| (map[y2][x] == ']'
			&& got_key)
		|| (map[y2][x] == '('
			&& got_key2)
			|| (map[y2][x] == ')'
			&& got_key2))
	{
		map[y][x] = ' ';
		y += V;
		map[y][x] = '@';
	}

	if (treasure_opened)
	{
		map[y2 - 1][x2 - 1] = '*';
		map[y2 - 1][x2] = '*';
		map[y2 - 1][x2 + 1] = '*';
		map[y2][x2 - 1] = '*';
		map[y2][x2 + 1] = '*';
		map[y2 + 1][x2 - 1] = '*';
		map[y2 + 1][x2] = '*';
		map[y2 + 1][x2 + 1] = '*';
		dialog = "You opened a treasure chest!";
		dialog_displayed = true;
		treasure_opened = false;
	}
}
