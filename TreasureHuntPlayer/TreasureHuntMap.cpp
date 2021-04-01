//unfinished map 
#include<string>;
#include"TreasureHuntMap.h";
#include"TreasureHuntPlayer.h";
#include"Menu.h";


//test
string mapH1 = " N ";
string mapH2 = " | ";
string mapH3 = " | ";
string mapH4 = " | ";
string mapH5 = " <W-----o-----E> ";
string mapH6 = " | ";
string mapH7 = " | ";
string mapH8 = " | ";
string mapH9 = " S ";
string mapH10 = "                                                        <quest 1>(P)                                              ";
string mapBoar = "                                                          Boar                                                  ";
string mapH11 = "                                                       /         \                                              ";
string mapH12 = "                                                      /           \                                             ";
string mapH13 = "                                                     /             \                                            ";
string mapH14 = " 				                    ________________/                \                                           ";
string mapH15 = "				                   |                                  / ------------------------- <dirtpath>     ";
string mapH16 = "                                  |                            <vines>                                    |     ";
string mapH17 = "			                       |                               /                                       |     ";
string mapH18 = "			                       |                              /                                        |     ";
string mapH19 = "                                  |                             /                                         |     ";
string mapH20 = "                                  |                            /                                          |     ";
string mapH21 = "                                  |                           /                                           |     ";
string mapH22 = "                                  |                          /                                            |     ";
string mapH23 = "                                   ~~~~~  <river>   <quest 2>  /\/\/\/\/\/\/\                             |     ";
string mapH24 = "                                  ~~~~     ~~~~~~    |                                                  /       ";
string mapH25 = "                                                     |                                                 /        ";
string mapH26 = "                                                     |_____________                                   /         ";
string mapH27 = "                                                                   \                                 /          ";
string mapH28 = "                                                                    \                               /           ";
string mapH29 = "                                                                     \                             /            ";
string mapH30 = "                                                                      \                           /             ";
string mapH31 = "                                                                       \                         /              ";
string mapH32 = "                                                                        \         <pirates>     /               ";
string mapH33 = "                                                                         \______  <quest 3> ___/                ";
string mapH34 = "                                                                                      |                         ";
string mapH35 = "                                                                                      |                         ";
string mapH36 = "                                                                                      |                         ";
string mapH37 = "                                                                                     /                          ";
string mapH38 = "                                                                                    /                           ";
string mapH39 = "                                                                /\/\/\/\/\ ________/                            ";
string mapH40 = "                                                               |<treasure>|                                    ";
string mapH41 = "                                                               |__________|                                    ";
string mapH42 = "                                                                                                                ";
string mapH43 = "                                                                                                                ";
string mapH44 = "                                                                                                                ";
string mapH45 = "                                                                                                                ";











void TreasureHuntMap::displayMap() {
	cout << mapH1;
	cout << mapH2;
	cout << mapH3;
	cout << mapH4;
	cout << mapH5;
	cout << mapH6;
	cout << mapH7;
	cout << mapH8;
	cout << mapH9;
	cout << mapH10;
	cout << mapBoar;
	cout << mapH11;
	cout << mapH12;
	cout << mapH13;
	cout << mapH14;
	cout << mapH15;
	cout << mapH16;
	cout << mapH17;
	cout << mapH18;
	cout << mapH19;
	cout << mapH20;
	cout << mapH21;
	cout << mapH22;
	cout << mapH23;
	cout << mapH24;
	cout << mapH25;
	cout << mapH26;
	cout << mapH27;
	cout << mapH28;
	cout << mapH29;
	cout << mapH30;
	cout << mapH31;
	cout << mapH32;
	cout << mapH33;
	cout << mapH34;
	cout << mapH35;
	cout << mapH36;
	cout << mapH37;
	cout << mapH38;
	cout << mapH39;
	cout << mapH40;
	cout << mapH41;
	cout << mapH42;
	cout << mapH43;
	cout << mapH44;
	cout << mapH45;
	

   


}

void TreasureHuntMap::updatePosition() {

	switch (traveler.playerSpot) {
		case 1:
			break;
		case 2:
			mapH10 = "                                                        <quest 1> (P)                                              ";
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			 mapH23 = "                                   ~~~~~  <river>   <quest 2>(P)  /\/\/\/\/\/\/\                                  ";
			break;
		case 8:
			break;
		case 9:
			 mapH33 = "                                                                         (P)\______  <quest 3> ___/                ";
			 break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			 mapH39 = "                                                                /\/\/\/\/\ (P)                           ";
			 mapH40 = "                                                               |<treasure>|                                    ";
			 mapH41 = "                                                               |__________|                                    ";




	}



}
