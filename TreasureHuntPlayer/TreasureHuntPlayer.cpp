/**#include directives to access, input/output function, strings and the player class information**/
#include<iostream>
#include <iomanip>
#include <string>
#include "TreasureHuntPlayer.h"
#include "ctype.h"

using namespace std;

/** Void member functions to set player name and location as well as record movement choice**/

void TreasureHuntPlayer::showRoutes()
{
	switch (playerSpot)
	{
	case 0:
		break;
	case 1: //beach
	{
		cout << "0 - QUIT" << endl;
		cout << "2 - FOREST(SOUTH)" << endl;
		break;
	}
	case 2: //forest
	{
		cout << "3 - FEED AND DISTRACT(WEST)" << endl;
		cout << "4 - ATTACK(EAST)" << endl;
	}
	case 3: //feed boar
		break;
	case 4: //fight boar
	{
		cout << "5 - RUN DOWN DIRTPATH(SOUTH)" << endl;
		cout << "6 - SWING ACROSS GORGE(SW)" << endl;
	}
	case 5: //dirtpath
		break;
	case 6: //vines
		break;
	case 7: //mountain
	{
		cout << "13 - TREK THROUGH MOUNTAINS" << endl;
		cout << "8 - SWIM ACROSS RIVER" << endl;
	}
	case 8: //river
		break;
	case 9: // pirate camp
	{
		cout << "10 - DISTRACT" << endl;
		cout << "11 - WAIT" << endl;
	}
	case 10: //distract
		break;
	case 11: //wait
		break;
	case 12: //treasure
		cout << "14 - OPEN CHEST" << endl;
		break;
	default:
		break;
		//please enter a valid direction

	}
}

void TreasureHuntPlayer::setPlayerName(string name)
{
	playerName = name;
}

void TreasureHuntPlayer::setPlayerLocation(int location)
{
	playerSpot = static_cast<locations>(location);
	
}

void  TreasureHuntPlayer::setPreviousLocation(int location)
{
	previousSpot = static_cast<locations>(location);

	previousChoice = location;
}



void TreasureHuntPlayer::makeChoice()
{
	cout << endl;
	cout << makeMove;
	cin >> playerChoice;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "INVALID INPUT TRY AGAIN" << endl;
		showRoutes();
		cout << endl;
		makeChoice();

	}
	setPlayerLocation(playerChoice);
}

/** member functions to return player name and location hint**/
string TreasureHuntPlayer::getPlayerName() const
{
	return playerName;
}

string TreasureHuntPlayer::getPlayerLocation() const
{
	switch (playerSpot)
	{
	case 0:
	{
		break;
	}
	case 1: //beach
	{
		return "Beach";
	}
	case 2: //forest
		break;
	case 3: //feed boar
		break;
	case 4: //fight boar
		break;
	case 5: //dirtpath
	{
		break;
	}
	case 6: //vines
	{
		break;
	}
	case 7: //mountain
		break;
	case 8: //river
	{
		break;
	}
	case 9: // pirate camp
		break;
	case 10: //distract
	{
		break;
	}
	case 11: //wait
	{
		break;
	}
	case 12: //treasure
	{
		break;
	}
	default:
	{
		break;
	}
	}

}

