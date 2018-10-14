#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include"Strukturen.h"
#include"mischen.h"
#include "karte_geben.h"
#include"initialisieren.h"
#include"winner_ausgabe_round.h"
using namespace std;

void initialisieren (Kartendeck* deck1)
{
	char farbe[4][10] = {"Karo", "Herz", "Pik", "Kreuz"};
	char name[13][10] = {"Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "As"};
	int wert[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

	for(int i = 0; i < 4; i++)
	{	
		for(int j = 0; j < 13; j++)
		{
			//cout << i << "   " << farbe[i] << endl;
			strcpy_s(deck1 -> k[i*13 + j].farbe, farbe[i]);
			deck1 -> k[i*13 + j].wert = wert[j];            
			strcpy_s(deck1 -> k[i*13 + j].name, name[j]);
			deck1 -> k[i*13 + j].isGezogen = 1;
		}
	}

	
}