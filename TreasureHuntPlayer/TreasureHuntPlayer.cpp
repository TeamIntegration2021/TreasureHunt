/**#include directives to access, input/output function, strings and the player class information**/
#include<iostream>
#include <iomanip>
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

void TreasureHuntPlayer::setDirections()
{
}

void TreasureHuntPlayer::makeChoice()
{
	cout << "Enter the direction you would like to go:";
	cin >> playerChoice;
	directions r = static_cast<directions>(playerChoice);
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
