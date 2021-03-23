/**#include directives to access, input/output function and strings**/
#include<iostream>
#include <iomanip>
#include <string>

#ifndef TreasureHuntPlayer_h
#define TreasureHuntPlayer_h

namespace std 
{
	/**creates player class where player can enter name, choose where to travel, as well as receive hints about their current location on the map**/
	class TreasureHuntPlayer
	{
		// declares and initilaizes variables to hold the player's name, location and choice of movement
	private:


		// declares and initilaizes variables to hold the player's name, location and choice of movement
	public:
		struct word
		{
			string word;
			int code;
		} ;
		enum directions { NORTH, NORTHEAST, EAST, SOUTHEAST, SOUTH, SOUTHWEST, WEST, NORTHWEST };
		const int NONE = -1;
		const int DIRS = 8;
		void setPlayerName(string);
		void setPlayerLocation(string);
		void setDirections(word*);
		void makeChoice(enum);
		string getPlayerName() const;
		string getPlayerLocation() const;
		string playerName = " ";
		string playerLocation = " ";
		int playerChoice = ' ';
		//test line
		
	
	

		

	};
	
}
#endif