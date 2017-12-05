#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c;
    int gesamtanzahl = 0;
    int grenzwert = 500;
 
    //Seite a stätig erhöhen
    for (a = 1; a < grenzwert; a++) {
        //b = a damit keine Tripel doppelt vorkommen.
        for (b = a; b < grenzwert; b++) {
            //Seite c stätig erhöhen
            for (c = 1; c < grenzwert; c++) {
                //Überprüfen ob Satz des Pythagoras wirklich zutrifft.
                if (a * a + b * b == c * c) {
 
                    gesamtanzahl++;
 
                    cout << c << "^2" << " = " << a << "^2" << " + " << b << "^2" << endl;
                }
            }
        }
    }
 
    cout << "Die Gesamtanzahl an Tripel beträgt:" << gesamtanzahl;
    return 0;
}
