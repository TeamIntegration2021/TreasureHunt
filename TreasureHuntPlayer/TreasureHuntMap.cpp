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
string mapH11 = "                                                       /         \\                                              ";
string mapH12 = "                                                      /           \\                                             ";
string mapH13 = "                                                     /             \\                                            ";
string mapH14 = " 				                    ________________/                \\                                           ";
string mapH15 = "				                   |                                  / ------------------------- <dirtpath>     ";
string mapH16 = "                                  |                            <vines>                                    |     ";
string mapH17 = "			                       |                               /                                       |     ";
string mapH18 = "			                       |                              /                                        |     ";
string mapH19 = "                                  |                             /                                         |     ";
string mapH20 = "                                  |                            /                                          |     ";
string mapH21 = "                                  |                           /                                           |     ";
string mapH22 = "                                  |                          /                                            |     ";
string mapH23 = "                                   ~~~~~  <river>   <quest 2>  /\\/\\/\\/\\/\\/\\/\\                             |     ";
string mapH24 = "                                  ~~~~     ~~~~~~    |                                                  /       ";
string mapH25 = "                                                     |                                                 /        ";
string mapH26 = "                                                     |_____________                                   /         ";
string mapH27 = "                                                                   \\                                 /          ";
string mapH28 = "                                                                    \\                               /           ";
string mapH29 = "                                                                     \\                             /            ";
string mapH30 = "                                                                      \\                           /             ";
string mapH31 = "                                                                       \\                         /              ";
string mapH32 = "                                                                        \\                       /               ";
string mapH33 = "                                                                         \\______  <quest 3> ___/                ";
string mapH34 = "                                                                                      |                         ";
string mapH35 = "                                                                                      |                         ";
string mapH36 = "                                                                                      |                         ";
string mapH37 = "                                                                                     /                          ";
string mapH38 = "                                                                                    /                           ";
<<<<<<< HEAD
string mapH39 = "                                                                /\\\/\\/\\/\\/\\ ________/                            ";
=======
string mapH39 = "                                                                /\\/\\/\\/\\/\\ ________/                            ";
>>>>>>> 57b873910c630f072ccfe3841b74f5cff6a2b240
string mapH40 = "                                                    Pirates    |<treasure>|                                    ";
string mapH41 = "                                                               |__________|                                    ";
string mapH42 = "                                                                                                                ";
string mapH43 = "                                                                                                                ";
string mapH44 = "                                                                                                                ";
string mapH45 = "                                                                                                                ";











void TreasureHuntMap::displayMap() {
	cout << mapH1 << endl;
	cout << mapH2 << endl;
	cout << mapH3 << endl;
	cout << mapH4 << endl;
	cout << mapH5 << endl;
	cout << mapH6 << endl;
	cout << mapH7 << endl;
	cout << mapH8 << endl;
	cout << mapH9 << endl;
	cout << mapH10 << endl;
	cout << mapBoar << endl;
	cout << mapH11 << endl;
	cout << mapH12 << endl;
	cout << mapH13 << endl;
	cout << mapH14 << endl;
	cout << mapH15 << endl;
	cout << mapH16 << endl;
	cout << mapH17 << endl;
	cout << mapH18 << endl;
	cout << mapH19 << endl;
	cout << mapH20 << endl;
	cout << mapH21 << endl;
	cout << mapH22 << endl;
	cout << mapH23 << endl;
	cout << mapH24 << endl;
	cout << mapH25 << endl;
	cout << mapH26 << endl;
	cout << mapH27 << endl;
	cout << mapH28 << endl;
	cout << mapH29 << endl;
	cout << mapH30 << endl;
	cout << mapH31 << endl;
	cout << mapH32 << endl;
	cout << mapH33 << endl;
	cout << mapH34 << endl;
	cout << mapH35 << endl;
	cout << mapH36 << endl;
	cout << mapH37 << endl;
	cout << mapH38 << endl;
	cout << mapH39 << endl;
	cout << mapH40 << endl;
	cout << mapH41 << endl;
	cout << mapH42 << endl;
	cout << mapH43 << endl;
	cout << mapH44 << endl;
	cout << mapH45 << endl;
	

   


}

void TreasureHuntMap::updatePosition() {
	int i = 10;
	switch (i) {
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
			 mapH23 = "                                   ~~~~~  <river>   <quest 2>(P)  /\\/\\/\\/\\/\\/\\/\\                                  ";
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
			 mapH39 = "                                                                /\\/\\/\\/\\/\\ (P)                           ";
			 mapH40 = "                                                               |<treasure>|                                    ";
			 mapH41 = "                                                               |__________|                                    ";




	}



}
