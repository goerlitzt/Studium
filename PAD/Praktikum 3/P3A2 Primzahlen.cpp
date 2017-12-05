#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void prim()
{
int minimum, maximum;
    cout<<"Geben sie bitte die kleinere Zahl ein: "<<endl;
    cin>>minimum;
    cout<<"Geben sie bitte die größere Zahl ein: "<<endl;
    cin>>maximum;
    cout<<"____________________________________________"<<endl;
   
 
    for (int teiler; minimum <= maximum; minimum++)
    {
        int pruefer = 0;                     //Prüfer resetten
        teiler = 1;                          //Teiler resetten
        while (teiler <= minimum)
        {
            if (minimum % teiler == 0)
            {
                pruefer++;                  //Falls bei Minimum / Teiler kein Rest entsteht wird der pruefer erhöht.
            }
            teiler++;
        }
        if (pruefer == 2)                   //Wenn der Prüfer genau 2 ist, bedeutet es, dass die zahl nur durch 1 und sich selbst teilbar war -> Primzahl
        {
            cout << minimum << " ist eine Primzahl." << endl;
        }
    }
}
 
int main()
{
    prim();
    return 0;
}
