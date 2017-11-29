#include <cstdlib>
#include <iostream>
#include <math.h>
 
using namespace std;
 
int stellenausrechnen(int t1)
{
 
    int stellen = 0;
 
    while (t1 > 0)
    {
 
        t1 = t1 / 10;
        stellen++;
    }
 
    return stellen;
}
 
int ziffernausgeben(int t2, int t3)
{
 
    int ziffer;
 
    while (t3 > 0)
    {
        int potenz = pow(10, t2 - 1);
        ziffer = t3 / potenz;
        t2 = t2 - 1;
        t3 = t3 - ziffer*potenz;
        cout << ziffer << endl;
    }
    return 0;
}
 
int main(int argc, char** argv)
{
 
    int zahl;
 
    cout << "Geben sie eine Zahl zum Zerlegen ein: " << endl;
    cin>>zahl;
 
    //Funktion um die Anzahl an Stellen zu bekommen, also anzahl=stellen
    int anzahl = stellenausrechnen(zahl);
    //Diese Funktion zerlegt die Zahl nun
    ziffernausgeben(anzahl, zahl);
    return 0;
}
