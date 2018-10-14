struct Karte
{
	int wert;
	char farbe [10];
	char name [10];
	bool isGezogen; 
	int karten_nummer;

	//Karte() : isGezogen(false) {}
};

struct Kartendeck
{
	Karte k[52];
	int aktuelle_karte;
};

struct Spieler
{
	char name [10];
	Karte ablage[26];
	int punktestand;
	int karten_imDeck;
	int rouds_won;
};