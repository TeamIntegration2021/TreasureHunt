#include<iostream>
#include <iomanip>
#include "TreasureHuntMap.h"
using namespace std;

#ifndef Menu_h
#define Menu_h

//create a class that will allow the main to call the functions inside
class menu {



	// no private member functions, so that other classes and functions can call/use
public:
	void DisplayMenu();
	void displayIconLegend();
	void askName();
	void beginGame();
	void DisplayGameName();
	void displayInventory();
	string inventoryItem[4] = {"Flares", "Shovel", "hour supply of food and water", "Keys"};
	int inventoryAmount[4] = {2,1,24,0};
	

	



	
	//const timer = ?//
	//char choice//




};











#endif
