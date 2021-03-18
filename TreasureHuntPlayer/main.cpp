#include<iostream>
#include <string>
#include <iomanip>
#include "TreasureHuntPlayer.h"
#include "Menu.h"


using namespace std;

int main()
{
	menu travelerMenu;
	travelerMenu.DisplayGameName();
	travelerMenu.DisplayMenu();
	travelerMenu.askName();
	
	return 0;
}