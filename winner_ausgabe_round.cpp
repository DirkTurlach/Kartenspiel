#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include"Strukturen.h"

using namespace std;

void winner_ausgabe_round (Spieler* spieler)
{
	if(spieler[0].punktestand > spieler[1].punktestand )
	{
		cout << "Gewinner ist Spieler 1  " << endl;
		spieler[0].rouds_won++;
		cout << " Spieler 1 hat " << spieler[0].rouds_won << " Runde(n) gewonnen." << endl;
	}
	else
	{
		if(spieler[1].punktestand > spieler[0].punktestand)
		{
			cout << "Gewinner ist Spieler 2 " << endl;
			spieler[1].rouds_won++;
			cout << " Spieler 2 hat " << spieler[1].rouds_won << " Runde(n) gewonnen." << endl;
		}
		else
		{
			cout << "Gleichstand  " << endl;
		}
	}
}