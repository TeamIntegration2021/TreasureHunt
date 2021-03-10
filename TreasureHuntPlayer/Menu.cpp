//create menu class to display menu and ask for users name, then begin the game using their inputed name
#include<iostream>
#include<string>
#include "TreasureHuntPlayer.h"
#include "Menu.h"
using namespace std;



//create member function to display menu//
void menu::DisplayMenu() {
	cout << backstory;
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


}