#include <iostream>
#include <string.h>

using namespace std;


struct gra 
{
    string tytul;
    string gatunek;
    int ocena;
};

int main()
{
    gra cs;  

    cs.tytul = "Counter Strike";
    cs.gatunek = "Gra Akcja";
    cs.ocena = 10;


    cout << "Tytul gry to:" << cs.tytul << endl;
    cout << "Gatunek gry to:" << cs.gatunek << endl;
	cout << "Ocena gry to:" << cs.ocena << endl;
	
	gra lol;  

    lol.tytul = "League Of Legends";
    lol.gatunek = "Gra Druzynowa";
    lol.ocena = 9;
    
    cout << "Tytul gry to:" << lol.tytul << endl;
    cout << "Gatunek gry to:" << lol.gatunek << endl;
	cout << "Ocena gry to:" << lol.ocena << endl;
    
    
    return 0;
    
}
