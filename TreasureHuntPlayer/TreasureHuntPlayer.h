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
		enum directions { NORTH, NORTHEAST, EAST, SOUTHEAST, SOUTH, SOUTHWEST, WEST, NORTHWEST };
		const int NONE = -1;
		const int DIRS = 8;
		void setPlayerName(string);
		void setPlayerLocation(string);
		void makeChoice(char);
		string getPlayerName() const;
		string getPlayerLocation() const;
		string playerName = " ";
		string playerLocation = " ";
		char playerChoice = ' ';
		//test line
		struct word
		{
			string word;
			int code;
		};
		void set_directions(word* dir)
		{
			dir[NORTH].code = NORTH;
			dir[NORTH].word = "NORTH";
			dir[NORTHEAST].code = NORTHEAST;
			dir[NORTHEAST].word = "NORTHEAST";
			dir[EAST].code = EAST;
			dir[EAST].word = "EAST";
			dir[SOUTHEAST].code = SOUTHEAST;
			dir[SOUTHEAST].word = "SOUTHEAST";
			dir[SOUTH].code = SOUTH;
			dir[SOUTH].word = "SOUTH";
			dir[NORTHWEST].code = NORTHWEST;
			dir[NORTHWEST].word = "NORTHWEST";
			dir[WEST].code = WEST;
			dir[WEST].word = "WEST";
			dir[SOUTHWEST].code = SOUTHWEST;
			dir[SOUTHWEST].word = "SOUTHWEST";
			

			// ...and so on, through SOUTH and up to WEST.
		}

		

	};
	
}
#endif