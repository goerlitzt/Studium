#include <iostream>
#include <cstdlib>
 
using namespace std;
 
//Die Funktion die aus der Aufgabe gefordert wird
 
int numbers(int t1)
{
    int eingeben;
    int minimum;
    int summe = 0;
    int mittelwert;
    int teiler = 0;
 
    cin>>eingeben;
    minimum = eingeben;
    //Solange eine Zahl größer als 0 eingegeben wird, wird die Schleife aktiv bleiben
    while (eingeben > 0)
    {
        //Hier wird getestet, ob die eingegebene Zahl die niedrigste ist.
        if (minimum > eingeben)
        {
            minimum = eingeben;
        }
        //Der Teiler wird erhöht    
        teiler++;
        //Alle eingegeben zahlen werden hier addiert.    
        summe = summe + eingeben;
        mittelwert = summe / teiler;
 
        cin>>eingeben;
 
    }
    cout << "Das Minimum ist " << minimum << " und der Mittelwert ist " << mittelwert << "." << endl;
    return 0;
}
 
int main(int argc, char** argv)
{
    int a = 3;
    //Hier wird die Funktion aus der Aufgabe aufgerufen
    numbers(a);
    return 0;
}
