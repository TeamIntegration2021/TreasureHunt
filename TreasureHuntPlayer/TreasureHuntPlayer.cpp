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
	/** cout << boarScenario << endl;
	//cin>>directions
	cout << traveler.getPlayerName() << "! " << beachScroll << endl;
	cout << endl;
	showRoutes();
	cout << endl;
	traveler.makeChoice();
	switch (traveler.r) //add direct
	{
	case 1: //N
		cout << "Cant go north";
		//take time off? punishment
		break;
	case 2: //NE
		cout << "Cant go northeast";
		break;
	case 3: //E
		cout << "Cant go east";
		break;
	case 4: //SE
		cout << "Cant go southeast";
		break;
	case 5: //S
		cout << quest1scroll;
	case 6: //SW
		break;
	case 7: //W
		break;
	case 8: //Nw
		break;
	default:
		break;
		//please enter a valid direction

	}**/
}

void TreasureHuntPlayer::makeChoice()
{
	cout << makeMove;
	cin >> playerChoice;
	locations r = static_cast<locations>(playerChoice);
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
