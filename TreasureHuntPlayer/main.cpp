#include<iostream>
#include <string>
#include <iomanip>
#include "TreasureHuntPlayer.h"



using namespace std;

int main()
{
	menu travelerMenu;
	travelerMenu.DisplayGameName();
	//travelerMenu.DisplayMenu();
	travelerMenu.askName();
	travelerMenu.displayIconLegend();
	cout << endl;
	travelerMenu.displayInventory();
	travelerMenu.beginGame();


	
	
	
	
	return 0;
}