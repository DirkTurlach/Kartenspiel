// main_kartenspiel_1

#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include"Karten.h"
#include"Kartendeck.h"
#include"mischen.h"
#include"initialisieren.h"
using namespace std;

struct Spieler
{
	char name;
	Karte ablage[7];
	int punktestand;
	int karten_imDeck;
};

void karte_geben (Kartendeck* deck, Spieler* amZug)
{	
	amZug -> ablage[amZug -> karten_imDeck] = deck -> k[deck->aktuelle_karte];
	deck ->k[deck->aktuelle_karte].isGezogen = false;
	(amZug->punktestand) += (deck -> k[deck->aktuelle_karte].wert);

	amZug->karten_imDeck = (amZug->karten_imDeck)+=1;
	deck->aktuelle_karte+=1;

	/*cout << "Am Zug ist:   " << amZug << endl;
	cout << "Wieviele Karten im Deck?" << amZug->karten_imDeck<< endl;
	cout << "Aktuelle Karte: " << amZug->ablage[0].farbe << endl;
	cout << "Aktuelle Karte: " << amZug->ablage[0].name << endl;
	cout << "Aktuelle Karte: " << amZug->ablage[0].wert<< endl;
	cout << "Gesamtpunktzahl?: " << amZug->punktestand<< endl<<endl;*/
}

void main()
{
	Kartendeck deck1;
	deck1.aktuelle_karte = 0;

	Spieler s[2];
	s[0].karten_imDeck=0;
	s[1].karten_imDeck=0;
	s[0].punktestand=0;
	s[1].punktestand=0;
	//strcpy(sname), "erster");
	//strcpy(s[1].name, "zweiter");

	int anzahl_geben;
	char ziehen;
	
	anzahl_geben = 4;

initialisieren(&deck1);
	mischen(&deck1);

	cout << "Das Spiel beginnt. Es werden abwechselnd Karten gegeben. " << endl;
	cout << "Zunaechst jeweils nur eine Karte ziehen. \n Erst wenn beide Spieler zwei Karten haben, kann mehr als eine genommen werden." << endl;
	cout << "Aber vorsicht! Wenn du mehr als 22 Punkte hast, hat der andere gewonnen." << endl << endl;
	cout << "*************************************************************************" << endl << endl;

	karte_geben (&deck1, &s[0]);
	karte_geben (&deck1, &s[1]);
	karte_geben (&deck1, &s[0]);
	karte_geben (&deck1, &s[1]);


	cout << "Spieler:1   " << s[0].name << endl;
	cout << "Wieviele Karten im Deck?" << s[0].karten_imDeck<< endl;
	cout << "Aktuelle Karte: " << "\t" << s[0].ablage[0].farbe << "\t" << s[0].ablage[0].name << "\t" << s[0].ablage[0].wert << endl;
	cout << "Gesamtpunktzahl?: " << s[0].punktestand<< endl<<endl;

	cout << "Spieler:2   " << s[1].name << endl;
	cout << "Wieviele Karten im Deck?" << s[1].karten_imDeck<< endl;
	cout << "Aktuelle Karte: " << "\t" << s[1].ablage[1].farbe << "\t" << s[1].ablage[1].name << "\t" << s[1].ablage[1].wert << endl;
	cout << "Gesamtpunktzahl?: " << s[1].punktestand<< endl<<endl;

	if(s[0].punktestand>s[1].punktestand)
	{
		cout << "Gewinner ist Spieler 1  " << endl;
	}
	else
	{
		if(s[1].punktestand>s[0].punktestand)
		{
			cout << "Gewinner ist Spieler 2  " << endl;
		}
		else
		{
			cout << "Gleichstand  " << endl;
		}
	}


	//do
	//{
	//	cout << "Noch eine Karte? Spieler 1. J fuer Ja, 0 nein" << endl;
	//	cin >> ziehen;
	//	
	//	if (ziehen = 'j')
	//	{
	//		karte_geben (&deck1, &s[0]);

	//		cout << "Spieler 1:" << endl;
	//		cout << s[0].ablage[s[0].karten_imDeck].farbe << setw(10);
	//		cout << s[0].ablage[s[0].karten_imDeck].name << setw(10);
	//		cout << s[0].ablage[s[0].karten_imDeck].wert << setw(10);
	//		cout << "    im Deck:  " << s[0].karten_imDeck << setw(10);
	//		cout << "    Punktestand:  " << s[0].punktestand << endl << endl;
	//	}
	//	cout << "Noch eine Karte? Spieler 2?" << endl;
	//	cin >> ziehen;
	//	
	//	fflush(stdin);
	//	
	//	if (ziehen = 'j');
	//	{
	//		karte_geben (&deck1, &s[1]);

	//		cout << "Spieler 2:" << endl;
	//		cout << s[1].ablage[s[1].karten_imDeck].farbe << setw(10);
	//		cout << s[1].ablage[s[1].karten_imDeck].name << setw(10);
	//		cout << s[1].ablage[s[1].karten_imDeck].wert << setw(10);
	//		cout << s[1].karten_imDeck << setw(10);
	//		cout << s[1].punktestand << endl << endl;
	//	}
	//}
	//while (ziehen !=0);

	//for (int i = 0; i < anzahl_geben; i++)
	//{
	//	cout << "Spieler 1:" << endl;
	//	cout << s[0].ablage[i].farbe << setw(10);
	//	cout << s[0].ablage[i].name << setw(10);
	//	cout << s[0].ablage[i].wert << setw(10);
	//	cout << "    im Deck:  " << s[0].karten_imDeck << setw(10);
	//	cout << "    Punktestand:  " << s[0].punktestand << endl << endl;

	//	cout << "Spieler 2:" << endl;
	//	cout << s[1].ablage[i].farbe << setw(10);
	//	cout << s[1].ablage[i].name << setw(10);
	//	cout << s[1].ablage[i].wert << setw(10);
	//	cout << s[1].karten_imDeck << setw(10);
	//	cout << s[1].punktestand << endl << endl;
	//}

	/*for(int j = 0; j < 52; j++)
	{
		cout << j << "\t" << deck1.k[j].farbe << "\t" << deck1.k[j].name << "\t" << "Wert =" << "\t" << deck1.k[j].wert;
		cout << "\t" << deck1.k[j].isGezogen << endl << endl;
	}*/
}