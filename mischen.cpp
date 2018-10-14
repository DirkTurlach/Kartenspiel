#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include"Strukturen.h"
using namespace std;

void mischen (Kartendeck* deck)
{
	Karte tmp;
	int position1, position2;
	srand(time(0));

	for (int i = 0; i < 200; i++)
	{
		position1 = rand()%52;
		position2 = rand()%52;

		tmp = deck->k[position1];
		deck->k[position1] = deck->k[position2];
		deck->k[position2] = tmp;
	}
}