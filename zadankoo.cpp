#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
    string a;  
    ifstream plik2;
    plik2.open("c:\\a.txt");  
    if(plik2.good())  
	while(!plik2.eof())        
                         {
                         plik2>>a;  
                         cout<<a;    
                         cout<<endl;
                         }
    plik2.close();
   
    cout<<endl;
    system("PAUSE");
    return 0;
}
