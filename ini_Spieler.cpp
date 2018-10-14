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

void ini_Spieler(Spieler* s)

	s[0].karten_imDeck=0;
	s[1].karten_imDeck=0;
	s[0].punktestand=0;
	s[1].punktestand=0;
	s[0].karten_imDeck=0;
	s[1].karten_imDeck=0;
	s[0].rouds_won=0;
	s[1].rouds_won=0;