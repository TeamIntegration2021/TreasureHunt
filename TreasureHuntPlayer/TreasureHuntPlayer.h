/**#include directives to access, input/output function and strings**/
#include<iostream>
#include <iomanip>
#include <string>
#include "Menu.h"

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
		enum locations
		{
			QUIT = 0, BEACH = 1, FOREST = 2, FEED = 3, FIGHT = 4, DIRTPATH = 5, GORGE = 6, MOUNTAINNORTH = 7, RIVER = 8, PIRATECAMP = 9, DISTRACT = 10, WAIT = 11, TREASURE = 12, MOUNTAINSOUTH=13 , OPEN =14
		};
		void setPlayerName(string);
		void setPlayerLocation(int);
		void setPreviousLocation(int);
		void makeChoice();
		void showRoutes();
		string getPlayerName() const;
		string getPlayerLocation() const;
		string makeMove = "MAKE YOUR MOVE:";
		string playerName = " ";
		string playerLocation = " ";
		int playerChoice = 1;
		int previousChoice = 1;
		locations playerSpot = BEACH;
		locations previousSpot = BEACH;
		bool fedBoar = false;
		bool foughtBoar = false;
		bool swungOnVines = false;
		bool usedDistraction = false;
		bool visitBeach = true;
		bool visitForest = false;
		bool visitNorthMountain = false;
		bool visitRiver = false;
		bool visitSouthMountain = false;
		bool visitPirateCamp = false;
		bool walkedDirtpath = false;
		bool visitTreasure = false;

		

		//test line
		
	
	

		

	};
	
}
#endif