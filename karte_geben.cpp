#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include<cstdlib>
#include"Strukturen.h"


void karte_geben (Kartendeck* deck, Spieler* amZug)
{	
	amZug -> ablage[amZug -> karten_imDeck] = deck -> k[deck -> aktuelle_karte];
	deck ->k[deck->aktuelle_karte].isGezogen = false;
	(amZug->punktestand) += (deck -> k[deck->aktuelle_karte].wert);

	amZug->karten_imDeck++;
	
	deck -> aktuelle_karte++;
}
