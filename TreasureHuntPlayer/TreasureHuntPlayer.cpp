/**#include directives to access, input/output function, strings and the player class information**/
#include<iostream>
#include <string>
#include "TreasureHuntPlayer.h"
using namespace std;

/** Void member functions to set player name and location as well as record movement choice**/
void TreasureHuntPlayer::setPlayerName(string name)
{
	playerName = name;
}

void TreasureHuntPlayer::setPlayerLocation(string location)
{
	playerLocation = location;
}

void TreasureHuntPlayer::makeChoice(char choice)
{
	playerChoice = choice;
}

/** member functions to return player name and location hint**/
string TreasureHuntPlayer::getPlayerName() const
{
	return playerName;
}

string TreasureHuntPlayer::getPlayerLocation() const
{
	return playerLocation;
}
