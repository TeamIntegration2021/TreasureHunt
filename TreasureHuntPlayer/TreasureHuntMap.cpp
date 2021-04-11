//unfinished map 
#include<string>;
#include"TreasureHuntMap.h";
#include"TreasureHuntPlayer.h";
#include"Menu.h";

//test
string mapH1 = "        N ";
string mapH2 = "        | ";
string mapH3 = "        |                         ______________________________________________________________________________";
string mapH4 = "        |                        /                                                                              \\         ";
string mapH5 = "  <W----o------E>               /                          BEACH(P)                                              \\";
string mapH6 = "        |                      /                            |                                                    |";
string mapH7 = "        |                     /                             |                                                    |";
string mapH8 = "        |                ____/                              |                                                    |";
string mapH9 = "        S               /                                   |                                                    |";
string mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
string mapBoar = "            /                       [/|\\]   [/|\\]         BOAR         [/|\\]    [/|\\]                             \\__";
string mapH11 = "           /                                           /         \\                                                   |  ";
string mapH12 = "          /                             [/|\\]         /           \\       [/|\\]                                      |       ";
string mapH13 = "         |                                           /             \\                                                 |";
string mapH14 = "         |                        __________________/               \\                           [===]                |";
string mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
string mapH16 = "         |                        |                           <VINES>                                     |          |";
string mapH17 = "         |	                  |                           /                                           |          |";
string mapH18 = "         |      	          |                          / [\\_/]                                      |          |";
string mapH19 = "         |                        |                         / [\\_/]                                       |[===]     |";
string mapH20 = "         |                        |                        /                                              |          |";
string mapH21 = "         |                        |                       /                                               |          |";
string mapH22 = "         |                        |                      / <MOUNTAINSIDE(N)>                              |          |";
string mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>  [/\\/\\/\\/\\/\\]                               |          |";
string mapH24 = "         |                          (~~~) (~~~~)     |                                                    /          |";
string mapH25 = "          \\                          \\_______________| [/\\/\\/\\/\\/\\]                                      /           |  ";
string mapH26 = "           \\                                         |_____________                                     /            /";
string mapH27 = "            \\___________                          <MOUNTAINSIDE(S)>\\                                   /           _/";
string mapH28 = "                        |                                           \\                            [===]/          _|";
string mapH29 = "                         \\                                           \\                               /          /  ";
string mapH30 = "                          \\                                           \\                             /           |  ";
string mapH31 = "                           \\                                           \\                           /            | ";
string mapH32 = "                            \\                                           \\          [->x]          /             |  ";
string mapH33 = "                             \\                                           \\______  <QUEST 3> _____/              | ";
string mapH34 = "                              |                                                        |                        |";
string mapH35 = "                              |                                                        |                        |";
string mapH36 = "                              |                                                        |                        /";
string mapH37 = "                              |                                                       /                    ____/     ";
string mapH38 = "                              |                                                      /                    /      ";
string mapH39 = "                               \\                                |\\/\\/\\/\\/\\/|________/                    /        ";
string mapH40 = "                                \\                               |   INTA   |                            /        ";
string mapH41 = "                                 |                              |__________|                           /        ";
string mapH42 = "                                 |                                                                    /          ";
string mapH43 = "                                 \\___________________________________________________________________/             ";
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

void TreasureHuntMap::updatePosition(int i) 
{
	switch (i) {
		case 1:
			break;
		case 2:
			mapH10 = "              _________/                                <QUEST 1>(P)                                             \\ ";
			mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";

			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			 mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>(P)        |";
			 mapH27 = "            \\___________                          <MOUNTAINSIDE(S)>\\                                   /           _/";
			 mapH40 = "                                \\                               |   INTA   |                            /        ";
			 mapH31 = "                           \\                                           \\                           /            | ";
			 mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			 mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			 mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";

			break;
		case 6:
			mapH16 = "         |                        |                           <VINES>(P)                                  |          |";
			mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			mapH27 = "            \\___________                          <MOUNTAINSIDE(S)>\\                                   /           _/";
			mapH40 = "                                \\                               |   INTA   |                            /        ";
			mapH31 = "                           \\                                           \\                           /            | ";
			mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";

			break;
		case 7:
			mapH16 = "         |                        |                           <VINES>                                     |          |";
			mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			 mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>(P)  [/\\/\\/\\/\\/\\]                            |          |";
			 mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			 mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";
			break;
		case 8:
			mapH16 = "         |                        |                           <VINES>                                     |          |";
			mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			mapH23 = "         |                      (P)(~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";
			mapH27 = "            \\___________                          <MOUNTAINSIDE(S)>\\                                   /           _/";
			break;
		case 9:
			mapH16 = "         |                        |                           <VINES>                                     |          |";
			mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			 mapH31 = "                           \\                                           \\          (P)              /            | ";
			 mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			 mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			 mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";
			 break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			mapH16 = "         |                        |                           <VINES>                                     |          |";
			 mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			 mapH40 = "                                \\                            (P)|   INTA   |                            /        ";
			 mapH31 = "                           \\                                           \\                           /            | ";
			 mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			 mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			 mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";
			 mapH27 = "            \\___________                          <MOUNTAINSIDE(S)>\\                                   /           _/";
			 break;
		case 13:
			mapH16 = "         |                        |                           <VINES>                                     |          |";
			mapH15 = "	 |                        |                                 / ------------------------- <DIRTPATH>           |";
			mapH27 = "            \\___________                       (P)<MOUNTAINSIDE(S)>\\                                   /           _/";
			mapH40 = "                                \\                               |   INTA   |                            /        ";
			mapH31 = "                           \\                                           \\                           /            | ";
			mapH23 = "         |                         (~~~)  <RIVER>   <QUEST 2>     [/\\/\\/\\/\\/\\]                            |          |";
			mapH10 = "              _________/                                <QUEST 1>                                                \\ ";
			mapH5 = "  <W----o------E>               /                          BEACH                                                 \\";

			




	}



}
