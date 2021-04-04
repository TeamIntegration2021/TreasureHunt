//create menu class to display menu and ask for users name, then begin the game using their inputed name
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include <iomanip>
#include <chrono>
#include "TreasureHuntPlayer.h"
#include "Menu.h"
#include <stdlib.h>

using namespace std;
//Set of strings that introduce story, character, and game title
string askForName = "Oh and one more thing, please enter your name so we know what to put on your tombstone :";

string backstoryLine1 = "A few hundred years ago there was a great man by the name of Captain Inta, the richest and most notorious pirate to eversail the Seven Seas";
string backstoryLine2 = "During the height of his conquests, Captain Inta amassed much spoils and treasures, enough to gain him the title of \"Gobernante de los Mares\" (Ruler of the seas) by fellow bucaneers";
string backstoryLine3 = "During his later years, the Captain sat sail once more, arriving on the deserted island we now know as Inta and making it his home for good";
string backstoryLine4 = "Legend has it, Captain Inta, before his death of old age, buried his treasures here on the island, and scattered clues  throughout, so that future travelers may discover them and engage in the quest to uncover the hidden loot";

string beachScroll = "Your journey awaits you along the path that leads southwards from the northern coast of the island...";

string characterIntroLine1 = "You and two of your friends are on vacation, sailing off the shore of the Virgin Islands when suddenly---";
string characterIntroLine2 = "A terrible storm redirects your boat and leaves you washed up on the shore of a mysterious, deserted island.";
string characterIntroLine3 = "Your boat cannot be salvaged so you set off along the beach in search of any inhabitants that may be able to aid your party.";
string characterIntroLine4 = "Your search ends in vain but during so, you discover an ancient scroll on the beach that reads : ";

string fastForward = "------------------FASTFORWARD 200 YEARS------------------";

string feedBoar = "Food truly is the language of all! The beast has accepted your fruits and nuts as offering, you may now retrieve the key and continue on your quest";
string fightBoar = "You have antagonized the beast and its home now you must pay the price if you do not make haste. The key is out of reach. The boar is now charging angrily. Quickly! What will you do?";

string mapIconDirtpath = "[===]";
string mapIconForest = "[/|\\]";
string mapIconGorge = "[\\_/]";
string mapIconPirateCamp = "[->x]";
string mapIconRiver = "(~~~)";
string mapIconTreasure1 = "|\\/\\/\\/\\/|";
string mapIconTreasure2 = "|  INTA  |";
string mapIconTreasure3 = "|________|";


string pName;

string quest1scroll = "You have reached the home where the beast lay his head. He may just be hungry, or just agitated to see you, but alas you must maneuver wisely to retrieve the key from the beast's den ";
string quest2scroll = "You have reached the great divides of Inta Island. Quickly choose as time is of the essence. You can either traverse through the waters or trek across the great divides ";
string quest3scroll = "You have made it to the final and most challenging quest. Many bandits from far and wide have come to the island to capture the treasure but to no avail. Just ahead you is a camp of bandits guarding the 3rd key in a tent. Your wits and resources are your best guide during this challenge";


string scrollText = "Hello travelers, welcome to Inta Island! Here, the greatest treasure known to man lies within, but it is up to you to discover it! Here lies incredible dangers, treacherous landscapes, and dangerous enemies. But be warned, time is not on your side, and you must escape with Inta's bounty in less than 24 hours, or";
string scrollText2 = "well you really don't wanna know. Good luck and happy hunting!";

string survive = "With you are:";
string survivalMaterial1 = " 2 flares";
string survivalMaterial2 = " 1 shovel";
string survivalMaterial3 = " 24 hour supply of food and water";
string suspenseDot = ".";
string titleBoxHori = "----------------------";
string titleBoxVert = "|                    |";
string title =        "|  INTA: THE JUNGLE  |";

string boarScenario = " "; //add text for boar scenario, create switches for choices
TreasureHuntPlayer traveler;

TreasureHuntMap Map;

/**
   creates member function to display menu
   displays backstory line by line using sleep function to give user time to read
   and a for loop that prints triple dots for suspense
   displays character intro in the same manner as backstory
   displays scroll text to player
**/
void menu::DisplayMenu() 
{
	
	_sleep(1000);
	cout << backstoryLine1;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{	
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(3300);
	cout << endl;

	cout << backstoryLine2 ;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(4000);
	cout << endl;

	cout << backstoryLine3;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(3300);
	cout << endl;

	
	cout << backstoryLine4;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(1500);
	cout << endl;

	cout << endl;
	_sleep(2000);
	cout << setw(83) << right << fastForward << endl;
	_sleep(3000);
	cout << endl;
	cout << characterIntroLine1;
	_sleep(3000);
	cout << endl;
	cout << characterIntroLine2;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(3000);
	cout << endl;
	cout << characterIntroLine3;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(3000);
	cout << endl;
	cout << survive << endl;
	_sleep(1000);
	cout << setw(25) << right << survivalMaterial1 << endl;
	_sleep(300);
	cout << setw(25) << right << survivalMaterial2 << endl;
	_sleep(300);
	cout << setw(49) << right << survivalMaterial3 << endl;
	_sleep(300);

	_sleep(1500);
	cout << endl;
	cout << characterIntroLine4 << endl;
	_sleep(3000);
	cout << endl;
	cout << scrollText ;
	for (int i = 0; i < 3; i++)
	{
		while (i < 3)
		{
			_sleep(300);
			cout << suspenseDot;
			i++;
		}
	}
	_sleep(3500);
	cout << scrollText2 << endl ;
	_sleep(3000);
	cout << endl;
}

void menu::displayIconLegend()
{
	cout << "MAP LEGEND" << endl;
	cout << "___________________________" << endl;
	cout << "Dirt trail: " << mapIconDirtpath << endl;
	cout << "Forest: " << mapIconForest << endl;
	cout << "Gorge: " << mapIconGorge << endl;
	cout << "Pirate Camp: " << mapIconPirateCamp << endl;
	cout << "River: " << mapIconRiver << endl;
	cout << "          " << mapIconTreasure1 << endl;
	cout << "Treasure: " << mapIconTreasure2 << endl;
	cout << "          " << mapIconTreasure3 << endl;

}

void menu::askName() {
	cout << askForName;
	cin >> pName;
	 /**if (cin.fail()) // if name is not of type string prompt user again.
	{
		cout << "Enter a valid name" << endl;
		cin > pName;
	}
	else **/
	


	
//create an object to call other functions
	


	//use setplayer name function
	traveler.setPlayerName(pName);
	cout << "Hello Traveler " << traveler.getPlayerName() << ", Welcome!!" << endl;
	//add input validation for name
	

	

}

void menu::beginGame()
{
	// cout << boarScenario << endl;
	//cin>>directions
	Map.updatePosition();
	Map.displayMap();
	traveler.setPlayerLocation("BEACH");
	cout << traveler.getPlayerName() << "! " << beachScroll << endl;
	cout << endl;
	cout << endl;
	
	while (traveler.getPlayerLocation() != "TREASURE")
	{
		showRoutes();
		cout << endl;
		traveler.makeChoice();
		switch (traveler.playerSpot) //add direct
		{
		case 1: //beach
			cout << "Cant go north";
			//take time off? punishment
			break;
		case 2: //forest
		{
			while (traveler.getPlayerLocation() != "BEACH")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			traveler.setPlayerLocation("FOREST");
			cout << quest1scroll << endl;
			break;

		}
		case 3: //feed boar
		{
			while (traveler.getPlayerLocation() != "FOREST")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			cout << feedBoar << endl;

			break;
		}
		case 4: //fight boar
		{
			while (traveler.getPlayerLocation() != "FOREST")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			cout << fightBoar << endl;
			showRoutes();
			break;
		}
		case 5: //dirtpath
		{
			while (traveler.getPlayerLocation() != "FOREST")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			traveler.playerChoice = 9;
			break;
		}
		case 6: //vines
		{
			while (traveler.getPlayerLocation() != "FOREST")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			break;
		}

		case 7: //mountain
		{
			while (traveler.getPlayerLocation() != "FOREST" || traveler.getPlayerLocation() != "VINES")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			cout << quest2scroll;
			break;
		}
		case 8: //river
		{
			if (traveler.getPlayerLocation() != "MOUNTAIN")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			break;
		}
		case 9: // pirate camp
		{
			while (traveler.getPlayerLocation() != "MOUNTAIN")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			cout << quest3scroll;
		}
		case 10: //distract
		{
			while (traveler.getPlayerLocation() != "PIRATE CAMP")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			break;
		}
		case 11: //wait
		{
			while (traveler.getPlayerLocation() != "PIRATE CAMP")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			break;
		}
		case 12: //treasure
		{
			while (traveler.getPlayerLocation() != "PIRATE CAMP")
			{
				cout << "Im sorry! you cannot make that move. Try again" << endl;
				showRoutes();
				traveler.makeChoice();
			}
			break;
		}
		default:
			break;
			//please enter a valid direction

		}
	}



}

void menu::DisplayGameName() 
{
	system("Color 5E");
	_sleep(1000);
	cout << setw(65) << right << titleBoxHori << endl;
	cout << setw(65) << right << titleBoxVert << endl;
	cout << setw(65) << right << title << endl;
	cout << setw(65) << right << titleBoxVert << endl;
	cout << setw(65) << right << titleBoxHori << endl;
	

}

void menu::showRoutes()
{
	switch (traveler.playerSpot) 
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
		cout << "7 - TREK THROUGH MOUNTAINS" << endl;
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
		break;
	default:
		break;
		//please enter a valid direction

	}
}