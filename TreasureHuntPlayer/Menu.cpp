﻿//create menu class to display menu and ask for users name, then begin the game using their inputed name
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include <iomanip>
#include <chrono>
#include "TreasureHuntPlayer.h";
#include "Menu.h";
#include <stdlib.h>
#include"TreasureHuntMap.h";

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

string key1retrieved = "KEY 1 RETRIEVED";
string key2retrieved = "KEY 2 RETRIEVED";
string key3retrieved = "KEY 3 RETRIEVED";

string mapIconDirtpath = "[===]";
string mapIconForest = "[/|\\]";
string mapIconGorge = "[\\_/]";
string mapIconMountain = "[/\\/\\/\\]";
string mapIconPirateCamp = "[->x]";
string mapIconRiver = "(~~~)";
string mapIconTreasure1 = "|\\/\\/\\/\\/|";
string mapIconTreasure2 = "|  INTA  |";
string mapIconTreasure3 = "|________|";


string pName;

string quest1scroll = "You have reached the home where the beast lay his head. He may just be hungry, or just agitated to see you, but alas you must maneuver wisely to retrieve the key from the beast's den ";
string quest2scroll = "You have reached the great divides of Inta Island. Quickly choose as time is of the essence. You can either traverse through the waters or trek across the great divides to reach the southern end of the divides ";
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
	cout << "You : (P)" << endl;
	cout << "Dirt trail: " << mapIconDirtpath << endl;
	cout << "Forest: " << mapIconForest << endl;
	cout << "Gorge: " << mapIconGorge << endl;
	cout << "Pirate Camp: " << mapIconPirateCamp << endl;
	cout << "River: " << mapIconRiver << endl;
	cout << "          " << mapIconTreasure1 << endl;
	cout << "Treasure: " << mapIconTreasure2 << endl;
	cout << "          " << mapIconTreasure3 << endl;
	_sleep(1000);

}

void menu::askName() {
	cout << askForName;
	cin >> pName;
	 if (cin.fail())
	{
		cout << "Enter a valid name" << endl;
		cin >> pName;
	}
	 _sleep(1500);
	
	


	
//create an object to call other functions
	


	//use setplayer name function
	traveler.setPlayerName(pName);
	cout << "Hello Traveler " << traveler.getPlayerName() << ", Welcome!!" << endl;
	//add input validation for name
	

	

}

void menu::displayInventory()
{
	cout << "------------------------------------" << endl;
	cout << "|            INVENTORY             |" << endl;
	cout << "|" << inventoryAmount[0] << " " << inventoryItem[0] << "                          |" << endl;
	cout << "|" << inventoryAmount[1] << " " << inventoryItem[1] << "                          |" << endl;
	cout << "|" << inventoryAmount[2] << " " << inventoryItem[2] << "  |" << endl;
	cout << "|" << inventoryAmount[3] << " " << inventoryItem[3] << "                            |" << endl;
	cout << "------------------------------------" << endl;
}

void menu::beginGame()
{
	// cout << boarScenario << endl;
	//cin>>directions
	Map.displayMap();
	while (traveler.visitTreasure != true)
	{
		move();
	}



}
void menu::move()
{
		
		_sleep(1000);
		
		
			switch (traveler.playerSpot) //add direct
			{
			case 0:
				cout << "IT SEEMS YOU ARE NOT READY TO TAKE ON THE BOLD CHALLENGES THAT AWAIT YOU ON THE ISLAND! BEST OF LUCK IN YOUR FUTURE ENDEAVORS! GOODBYE " << traveler.getPlayerName() << endl;
				exit(0);
			case 1: //beach
				traveler.displayStamina();
				traveler.setPreviousLocation(1);
				traveler.showRoutes();
				cout << endl;
				traveler.makeChoice();
				break;
			case 2: //forest
			{
				while (traveler.visitBeach != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.visitForest = true;
				traveler.setPlayerLocation(2);
				cout << quest1scroll << endl;
				_sleep(1500);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(2);
				Map.displayMap();
				cout << endl;
				traveler.setPreviousLocation(2);
				traveler.displayStamina();
				traveler.showRoutes();
				traveler.makeChoice();
				break;

			}
			case 3: //feed boar
			{
				while (traveler.visitForest != true)
				{	
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.fedBoar = true;
				traveler.setPlayerLocation(3);
				cout << feedBoar << endl;
				cout << endl;
				cout << key1retrieved << endl;
				cout << endl;
				inventoryAmount[3] ++ ;
				_sleep(1200);
				cout << "IN THE PROCESS, YOU SACRIFICED 2 HOURS WORTH OF FOOD" << endl;
				traveler.loseStamina(10);
				inventoryAmount[2] -= 2;
				_sleep(1200);
				cout << "YOU CONTINUE ALONG THE TRAIL THAT LEADS TO THE GREAT INTA DIVIDES" << endl;
				_sleep(2000);
				traveler.displayStamina();
				traveler.setPreviousLocation(3);
				traveler.setPlayerLocation(7);
				break;

			}
			case 4: //fight boar
			{
				while (traveler.visitForest != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.foughtBoar = true;
				traveler.setPlayerLocation(4);
				cout << fightBoar << endl;
				traveler.setPreviousLocation(4);
				inventoryAmount[1]--;
				traveler.displayStamina();
				traveler.showRoutes();
				traveler.makeChoice();
				break;
			}
			case 5: //dirtpath
			{
				while (traveler.foughtBoar != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.walkedDirtpath = true;
				cout << "YOU ARE CHASED ALONG THE DIRTPATH!" << endl;
				_sleep(2000);
				
				displayIconLegend();
				displayInventory();
				Map.updatePosition(5);
				Map.displayMap();
				_sleep(1500);
				traveler.loseStamina(80);
				cout << "AFTER SOMETIME, YOU ARE ABLE TO LOSE THE BEAST AS HE FIXES HIS ON A PASSING-BY RABBIT AND ENGAGES IN A HUNT! TURNS OUT HE WAS JUST HUNGRY AFTER ALL..." << endl;
				cout << endl;
				_sleep(1500);
				cout << "YOU CONTINUE SOUTHWARDS ALONG THE PATH" << endl;
				_sleep(1500);
				traveler.displayStamina();
				traveler.setPreviousLocation(5);
				traveler.setPlayerLocation(9);
				
				break;
			}
			case 6: //gorge
			{
				while (traveler.foughtBoar != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.swungOnVines = true;
				cout << "YOU SWING ON THE VINES ACROSS THE GORGE INTO SAFETY" << endl;
				_sleep(1500);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(6);
				Map.displayMap();
				_sleep(1500);
				cout << "YOU CONTINUE ALONG THE TRAIL THAT LEADS TO THE GREAT INTA DIVIDES" << endl;
				_sleep(1500);
				traveler.loseStamina(20);
				traveler.displayStamina();
				traveler.setPreviousLocation(6);
				traveler.setPlayerLocation(7);
				break;
			}

			case 7: //mountainside north
			{
				while (traveler.fedBoar != true && traveler.swungOnVines != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.visitNorthMountain = true;
				_sleep(1500);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(7);
				Map.displayMap();
				_sleep(1500);
				cout << quest2scroll;
				cout << endl;
				traveler.setPreviousLocation(7);
				traveler.displayStamina();
				traveler.showRoutes();
				traveler.makeChoice();
				break;
			}
			case 8: //river
			{
				if (traveler.visitNorthMountain != true)
				{	
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.visitRiver = true;
				cout << "SWIMMING THROUGH RIVER....." << endl;
				_sleep(1000);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(8);
				Map.displayMap();
				_sleep(1500);
				traveler.loseStamina(40);
				traveler.setPreviousLocation(8);
				traveler.setPlayerLocation(13);
				break;
			}
			case 9: // pirate camp
			{
				while (traveler.walkedDirtpath != true && traveler.visitSouthMountain != true )
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.visitPirateCamp = true;
				_sleep(1500);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(9);
				Map.displayMap();
				_sleep(1500);
				cout << quest3scroll << endl;
				traveler.setPreviousLocation(9);
				traveler.displayStamina();
				traveler.showRoutes();
				traveler.makeChoice();
				break;
			}
			case 10: //distract
			{
				while (traveler.visitPirateCamp != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				traveler.usedDistraction = true;
				inventoryAmount[0]--;
				cout << "FLARE SHOT! THE PIRATES JUMP UP IN FRENZY" << endl;
				cout << endl;
				_sleep(1000);
				inventoryAmount[0]--;
				cout << "SECOND FLARE SHOT! THE NOT SO HEARTY BUCANEERS FLEE INTO THE WOODS, OUT OF RANGE AND SIGHT, LEAVING THE KEY FREE FOR THE TAKING " << endl;
				cout << endl;
				_sleep(1000);
				cout << key3retrieved << endl;
				inventoryAmount[3] ++;
				cout << endl;
				cout << "HEADING SOUTH TOWARDS THE TREASURE..." << endl;
				_sleep(1200);
				traveler.displayStamina();
				traveler.setPreviousLocation(10);
				traveler.setPlayerLocation(12);
				break;
			}
			case 11: //wait
			{
				while (traveler.visitPirateCamp != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				cout << "YOU ARE CAUGHT BY ONE OF THE HUNTERS ON THEIR WAY BACK TO THE CAMP! THEY RANSACK YOU, TAKING ALL ITEMS IN YOUR POSSESSION INCLUDING KEYS AND SCROLLS" << endl;
				_sleep(1000);
				cout << endl;
				cout << "YOUR JOURNEY ENDS HERE" << endl;
				_sleep(1000);
				cout << endl;
				cout << "QUEST FAILED" << endl;
				exit(0);
			}
			case 12: //treasure
			{
				while (traveler.visitPirateCamp != true && traveler.usedDistraction != true)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move. Try again" << endl;
					move();
				}
				cout << "CONGRATULATIONS ON MAKING IT THIS FAR! IF YOU HAVE ALL THE REQUIRED KEYS THEN PROCEED TO OPEN THE CHEST" << endl;
				_sleep(1200);
				traveler.displayStamina();
				traveler.showRoutes();
				traveler.makeChoice();
				break;
			}
			case 13://mountain side south
			{
				while (traveler.visitNorthMountain == false && traveler.visitRiver == false)
				{
					traveler.setPlayerLocation(traveler.previousChoice);
					cout << "Im sorry! you cannot make that move . Try again" << endl;
					move();
				}
				traveler.visitSouthMountain = true;
				if (traveler.visitNorthMountain == true)
				{
					traveler.loseStamina(90);
				}
				_sleep(1500);
				displayIconLegend();
				displayInventory();
				Map.updatePosition(13);
				Map.displayMap();
				_sleep(1500);
				cout << key2retrieved << endl;
				inventoryAmount[3]++;
				cout << "CONTINUING SOUTH" << endl;
				_sleep(1200);
				traveler.displayStamina();
				traveler.setPreviousLocation(13);
				traveler.setPlayerLocation(9);
				break;
			}
			case 14://open chest
			{
				while (traveler.visitTreasure != true && inventoryAmount[3] !=3)
				{
					cout << "YOU DO NOT HAVE THE REQUIRED MATERIALS TTHEREFORE YOU ARE NOT WORTH OF THE GREAT INTA PRIZE. YOU ARE COMMENDED FOR YOU DETERMINATION IN THIS QUEST BUT YOU HAVE FAILED" << endl; 
					_sleep(1200);
					exit(0);
				} 
				traveler.displayStamina();
				cout << "USING KEY 1..." << endl;
				cout << endl;
				_sleep(1000);
				cout << "USING KEY 2..." << endl;
				cout << endl;
				_sleep(1000);
				cout << "USING KEY 3..." << endl;
				cout << endl;
				_sleep(1000);
				cout << "CHEST UNLOCKED" << endl;
				cout << endl;
				_sleep(1000);
				cout << "CONGRATULATIONS! THE GREAT TREASURES OF INTA ARE YOURS FOR THE TAKING! YOU HAVE PROVED MOST WORTHY OF QUESTS OF LOS GOBERNATES" << endl;
				_sleep(1000);
				exit(0);
			}
			case 15://consume food
				while (traveler.stamina >= 200)
				{
					cout << "YOU'VE REACHED FULL CONSUMPTION CAPACITY. YOU CANNOT EAT OR DRINK ANYMORE FOR NOW" << endl;
					cout << endl;
					traveler.setPlayerLocation(traveler.previousChoice);
					traveler.showRoutes();
					traveler.makeChoice();
					move();

				}
				traveler.consumeFood();
				inventoryAmount[2]--;
				traveler.setPlayerLocation(traveler.previousChoice);
				traveler.showRoutes();
				traveler.makeChoice();
				break;
				
			default:
				break;
				//please enter a valid direction

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



	
