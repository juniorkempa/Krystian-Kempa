#include <iostream>
#include <fstream>
using namespace std;
int main()
{
		int liczba;
    fstream plik;
    plik.open( "dane.txt", ios::in );
    if( plik.good() )
    {
        string produkt;
        
        cout << "podaj losowa liczbe:" << endl;
        cin >> liczba;
        while( !plik.eof() )
        {
        
			if (liczba%2 == 0 ) cout << "parzysta"; 
 	        else cout << "nieparzysta";
            getline( plik, produkt );
            cout <<produkt<< endl;
        }
        
           ofstream wprowadzenie;              //        
    wprowadzenie.open("dane.txt");     //      
    wprowadzenie<<""<<endl;
	wprowadzenie<<""<<endl;   //
    wprowadzenie.close();               //
         
		 
		 plik.close();
		 wprowadzenie.close();
    }    else cout << "nie odnaleziono sciezki pliku" << endl;

    return 0;
}
