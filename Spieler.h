#include"Karten.h"

struct Spieler
{
	char name;
	Karte ablage[26];
	int punktestand;
	int karten_imDeck;
	int rouds_won;
};