#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
using namespace std;
#include"Strukturen.h"
#include"mischen.h"
#include"initialisieren.h"
#include "karte_geben.h"
#include"winner_ausgabe_round.h"

void abheben(Kartendeck* deck)
{
	Karte tmp[52];
	int abhebePunkt;
	srand(time(0));
	abhebePunkt = (rand() % 46 + 3); 
	cout << abhebePunkt << endl << endl;
//****************************************
	//for(int i = 0; i < 26;i++)
	//{
	//	tmp[i] = deck ->k[i];
	//}

	//for(int i = 26; i < 52;i++)
	//{
	//	deck -> k[i-26] = deck -> k[i];
	//}

	//for(int i = 0; i < 26;i++)
	//{
	//	deck -> k[i+26] = tmp[i];
	//}

//*****************************************

	//for(int i = 0; i < 26; i++)
	//{
	//	tmp[0] = deck -> k[i];
	//	deck -> k[i] = deck -> k[i+26];
	//	deck -> k[i+26] = tmp[0];
	//}

//*****************************************

	for(int i = 0; i < 52 ;i++)
	{
		tmp[i] = deck ->k[i];
	}
	//for(int i = 52-abhebePunkt; i < 52 ;i++)
	//{
	//	deck -> k[i] = (deck -> k[i - (52 - abhebePunkt)]);
	//}
	//for(int i = 0; i < 52 - abhebePunkt;i++)
	//{
	//	deck -> k[i] = tmp[abhebePunkt + i];
	//}

//*****************************************
	for(int i=0; i < 52; i++)
	{
		deck -> k[i] = tmp[(i + abhebePunkt) % 52];
	}
}