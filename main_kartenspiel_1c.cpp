// main_kartenspiel_1

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

void main()
{
	Kartendeck deck1;
	deck1.aktuelle_karte = 0;

	Spieler s[2];
	s[0].karten_imDeck=0;
	s[1].karten_imDeck=0;
	s[0].punktestand=0;
	s[1].punktestand=0;
	s[0].karten_imDeck=0;
	s[1].karten_imDeck=0;
	s[0].rouds_won=0;
	s[1].rouds_won=0;

	//ini_Spieler(&s);

	int repeater;

	initialisieren(&deck1);
	//mischen(&deck1);
	
	deckZeigen(&deck1);		
	abheben(&deck1);
	deckZeigen(&deck1);	

	cout << "Dein Name Spieler 1" << endl;
	cin >> s[0].name;
	cin.ignore();
	cout << "Dein Name Spieler 2" << endl;
	cin >> s[1].name;
	cin.ignore();

	cout << "Das Spiel beginnt. Es werden abwechselnd Karten gegeben. " << endl;
	cout << "Zunaechst jeweils nur eine Karte ziehen. \n Erst wenn beide Spieler zwei Karten haben, kann mehr als eine genommen werden." << endl;
	cout << "Aber vorsicht! Wenn du mehr als 22 Punkte hast, hat der andere gewonnen." << endl << endl;
	cout << "*************************************************************************" << endl << endl;

	int j = 0;
	do
	{
		for (int i=0; i<2;i++)
		{
			karte_geben (&deck1, &s[0]);

			cout << "Spieler:1   " << s[0].name << endl;
			cout << "Aktuelle Karte: " << "\t" << s[0].ablage[(s[0].karten_imDeck)-1].farbe << "\t" << s[0].ablage[(s[0].karten_imDeck)-1].name << "\t" << s[0].ablage[(s[0].karten_imDeck)-1].wert << endl;
			//cout << "Gesamtpunktzahl?: " << s[0].punktestand<< endl<<endl;

			karte_geben (&deck1, &s[1]);
			
			cout << "Spieler:2   " << s[1].name << endl;
			cout << "Aktuelle Karte: " << "\t" << s[1].ablage[(s[1].karten_imDeck)-1].farbe << "\t" << s[1].ablage[(s[1].karten_imDeck)-1].name << "\t" << s[1].ablage[(s[1].karten_imDeck)-1].wert << endl;
			//cout << "Gesamtpunktzahl?: " << s[1].punktestand<< endl<<endl;

			winner_ausgabe_round (s);

			j+=2;
		}
	cout << "Noch ein Runde? 0 fuer nein, ansonsten eine andere Taste. " << endl;
	cin >> repeater;
	}
	while (repeater !=0);
	//winner_ausgabe_game (s);
}