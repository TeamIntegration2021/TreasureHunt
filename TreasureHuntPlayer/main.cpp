#include<iostream>
#include <string>
#include <iomanip>
#include "TreasureHuntPlayer.h"
#include <chrono>
#include <stdlib.h>
#include<Windows.h>
#include"Timer.h"





int minutes = 24;
int seconds = 0;

void displayCountDown() {


	cout << setfill(' ') << setw(55) << "         TIMER         \n";
	cout << setfill(' ') << setw(55) << " --------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void countDown() {
	for (int i = 24; i > 0; i--)
	{
		if (minutes == i && seconds == 0)
			displayCountDown();
	}
	Sleep(1000);
	minutes--;
	seconds = 59;
	seconds--;

	if (seconds == 0) {
		minutes--;
		seconds = 59;
	}

}
int main()
{
	
	//menu travelerMenu;
	//travelerMenu.DisplayGameName();
	//travelerMenu.DisplayMenu();
	//travelerMenu.askName();
	//travelerMenu.displayIconLegend();
	//cout << endl;
	//travelerMenu.displayInventory();
	//travelerMenu.beginGame();
	countDown();
   






	
	
	
	
	return 0;
}

