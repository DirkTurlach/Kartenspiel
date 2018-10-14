// main_kartenspiel_1

#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include"Karten.h"
#include"Kartendeck.h"
//#include"Mischen.h"
#include"initialisieren.h"
using namespace std;

//struct Karte
//{
//	int wert;
//	char farbe [10];
//	char name [10];
//};
//
//struct Kartendeck
//{
//	int kartenanzahl;
//	Karte k[52];
//};

void mischen (Kartendeck* deck)
{
	Karte tmp;
		
	tmp = deck->k[2];
	
	cout << tmp.farbe << endl;
	cout << tmp.name << endl;	
	cout << tmp.wert << endl;
}

Kartendeck mischen2 (Kartendeck deck)
{
	Karte tmp;
		
	tmp = deck.k[3];
	
	cout << tmp.farbe << endl;
	cout << tmp.name << endl;	
	cout << tmp.wert << endl;

	deck.k[0].wert = 99;
	cout << deck.k[0].wert << endl;

	return deck;
}


void main()
{
	Kartendeck deck1, deck2;	

	initialisieren(&deck1);
	mischen(&deck1);

	deck2 = mischen2(deck1);

	cout << deck1.k[0].wert << endl;

	for(int z = 0; z < 52; z++)
	{
		cout << deck1.k;
		cout << deck1.k[z].farbe << setw(10) << deck1.k[z].name << setw(10) << "Wert =" << setw(4) << deck1.k[z].wert << endl << endl;
	}
}