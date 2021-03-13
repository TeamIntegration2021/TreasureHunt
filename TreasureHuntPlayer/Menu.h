#include<iostream>
#include "TreasureHuntPlayer.h"
using namespace std;

#ifndef Menu_h
#define Menu_h

//create a class that will allow the main to call the functions inside
class menu {



	// no private member functions, so that other classes and functions can call/use
public:
	void DisplayMenu();
	void askName();
	string backstory = " ";
	string askForName = "What is your name?  ";
	string pName;
	void beginGame();
	void DisplayGameName();

	



	
	//const timer = ?//
	//char choice//




};











#endif
