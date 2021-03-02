/**#include directives to access, input/output function and strings**/
#include<iostream>
#include <string>
using namespace std;

#ifndef TreasureHuntPlayer_h
#define TreasureHuntPlayer_h

/**creates player class where player can enter name, choose where to travel, as well as receive hints about their current location on the map**/
class TreasureHuntPlayer
{
	// declares and initilaizes variables to hold the player's name, location and choice of movement
	private:
		string playerName = " ";
		string playerLocation = " ";
		char playerChoice;

	// declares and initilaizes variables to hold the player's name, location and choice of movement
	public:
		void setPlayerName(string);
		void setPlayerLocation(string);
		void makeChoice(char);
		string getPlayerName() const;
		string getPlayerLocation() const;
		
};
#endif