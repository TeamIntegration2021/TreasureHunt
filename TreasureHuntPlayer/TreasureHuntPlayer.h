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
		enum directions 
		{ 
			NORTH, NORTHEAST=1, EAST=2, SOUTHEAST=3, SOUTH=4, SOUTHWEST=5, WEST=6, NORTHWEST=7 
		} ;
		enum locations
		{
			FOREST = 8,FEED = 9, DIRTPATH = 10, VINES = 11, MOUNTAIN = 12, RIVER = 13, WEST = 14, NORTHWEST = 15
		};
		void setPlayerName(string);
		void setPlayerLocation(string);
		void setDirections();
		void makeChoice();
		string getPlayerName() const;
		string getPlayerLocation() const;
		string makeMove = "MAKE YOUR MOVE:";
		string playerName = " ";
		string playerLocation = " ";
		int playerChoice = 5;
		//test line
		
	
	

		

	};
	
}
#endif