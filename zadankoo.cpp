#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
    string t[1000];  
    int licznik=0;
    ifstream plik2; 
    plik2.open("c:\\a.txt");  
    if(plik2.good())  
   
	while(!plik2.eof())        
                         { 
			 t[licznik] = a; 
                         plik2>>a;          
                         cout << licznik++ << ":" << a;
                         cout<<endl;
                         }
    plik2.close();
   
    for (int i=0; i<licznik; i++)
    cout<< licznik << endl;
    system("PAUSE");
    return 0;
}
