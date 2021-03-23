//create menu class to display menu and ask for users name, then begin the game using their inputed name
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include <iomanip>
#include <chrono>
#include "TreasureHuntPlayer.h"
#include "Menu.h"
using namespace std;
//Set of strings that introduce story, character, and game title
string askForName = "Oh and one more thing, please enter your name so we know what to put on your tombstone :";

string backstoryLine1 = "A few hundred years ago there was a great man by the name of Captain Inta, the richest and most notorious pirate to eversail the Seven Seas";
string backstoryLine2 = "During the height of his conquests, Captain Inta amassed much spoils and treasures, enough to gain him the title of \"Gobernante de los Mares\" (Ruler of the seas) by fellow bucaneers";
string backstoryLine3 = "During his later years, the Captain sat sail once more, arriving on the deserted island we now know as Inta and making it his home for good";
string backstoryLine4 = "Legend has it, Captain Inta, before his death of old age, buried his treasures here on the island, and scattered clues  throughout, so that future travelers may discover them and engage in the quest to uncover the hidden loot";

string characterIntroLine1 = "You and two of your friends are on vacation, sailing off the shore of the Virgin Islands when suddenly---";
string characterIntroLine2 = "A terrible storm redirects your boat and leaves you washed up on the shore of a mysterious, deserted island.";
string characterIntroLine3 = "Your boat cannot be salvaged so you set off along the beach in search of any inhabitants that may be able to aid your party.";
string characterIntroLine4 = "Your search ends in vain but during so, you discover an ancient scroll on the beach that reads : ";

string fastForward = "------------------FASTFORWARD 200 YEARS------------------";

string pName;

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

void menu::askName() {
	cout << askForName;
	cin >> pName;

	
//create an object to call other functions
	TreasureHuntPlayer traveler;


	//use setplayer name function
	traveler.setPlayerName(pName);
	cout << "Hello Traveler " << traveler.getPlayerName() << ", Welcome!!" << endl;
	

	

}

void menu::beginGame()
{
	// cout << boarScenario << endl;
	//cin>>dire

}

void menu::DisplayGameName() 
{
	_sleep(1000);
	cout << setw(65) << right << titleBoxHori << endl;
	cout << setw(65) << right << titleBoxVert << endl;
	cout << setw(65) << right << title << endl;
	cout << setw(65) << right << titleBoxVert << endl;
	cout << setw(65) << right << titleBoxHori << endl;

}