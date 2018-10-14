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
#include"abheben.h"
#include"deckZeigen.h"

void deckZeigen(Kartendeck* deck1)
{
	for(int i =0; i<52;i++)
		{
			cout << i << " : \t";
			cout << deck1 -> k[i].farbe << "\t";
			cout << deck1 -> k[i].name << endl << endl;
		}
}