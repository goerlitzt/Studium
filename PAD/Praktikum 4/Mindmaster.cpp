#include <cstdlib>
#include<vector>
#include <iostream>
#include "Mindmaster.h"

using namespace std;

//Die Funktion isValidInput überprüft, ob die Regeln vom "Code" eingehalten werden

//template <typename T>
//bool isValidInput(const vector<T>& guess, int length, T min, T max)
//{
//    if (guess.size() == length) //Überprüfen ob guess die richtige Anzahl an Zahlen hat
//    {
//        int pruefer = 0; //Wird benötigt um zu überprüfen ob jede Zahl im Vector guess zwischen min & max leigt
//
//        for (int i = 0; i < length; i++)
//        {
//            if (guess[i] <= max) //Überprüfen ob jede Zahl in guess zwischen min und max liegt
//            {
//                if (guess[i] >= min)
//                {
//                    pruefer++; //Jedes mal wenn der Wert zwischen min und max leigt, wird pruefer erhöht
//                }
//            }
//            if (pruefer == 4) //Wenn der pruefer 4 ist, bedeutet es dass jede Zahl zwischen min & max liegt und deshalbwird true zurückgegeben
//            {
//                return true;
//            }
//        }
//        return false; //Ansonsten false da irgendwo die Regel nicht eingehalten wurde
//    }
//    return false; //Falls die Anzahl an Zahlen nicht mit der Länge übereinstimmt -> false zurückgeben
//}

//Funktion white soll die Anzahl an gleichen Zahlen an VERSCHIEDENEN Stellen zurückgebe

//template <typename T>
//int white(const vector<T>& solution, const vector<T>& guess)
//{
//    int zaehler = 0; //Zählt wieviele Zahlen sowohl in guess als auch in solution vorkommen, ABER an VERSCHIEDENER Stelle sind
//
//    for (int erste = 0; erste < solution.size(); erste++)
//    {
//        for (int zweite = 0; zweite < solution.size(); zweite++)
//        {
//            if (erste != zweite)
//            {
//                if (guess[erste] == solution[zweite])
//                {
//                    zaehler++;
//                }
//            }
//        }
//    }
//    return zaehler;
//}
//Funktion black soll die Anzahl an gleichen Zahlen an der GLEICHEN Stelle zurückgeben

//template <typename T>
//int black(const vector<T>& solution, const vector<T>& guess)
//{
//    int zaehler = 0; //Zählt wieviele Stellen in guess & solution gleich sind
//
//    for (int i = 0; i < solution.size(); i++) //Schleife läuft so oft, wie die Anzahl an Werten in Solution
//    {
//        if (solution[i] == guess[i]) //Überprüfen ob an einer der Stellen die Zahl GLEICH ist
//        {
//            zaehler++; //Falls an einer Stelle die Zahl gleich ist, zaehler erhöhen
//        }
//    }
//    return zaehler; //zaehler zurückgeben
//}
int main(int argc, char** argv)
{
    
    Mindmaster<int> obj;
   
    
    int min = 0; //Nur Ziffern von 0-9 sollen jeweils als Wert im Vector solution landen                                       
    int max = 9;
    int len = 4; //Der "Code" soll nur 4-Stellig sein
    vector<int> solution;

    cout << "Bitte geben sie die 4 Ziffern für ihren Code nacheinander ein." << endl;
    //Werte für solution erzeugen
    for (int i = 0; i < len; i++)
    {
        int ziffer;
        cin>>ziffer;
        solution.push_back(ziffer);
    }
    if (obj.isValidInput(solution, len, min, max) == 0)
    {
        cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
        return 0;
    }

    /*cout<<solution[0]<<endl;
    cout<<solution[1]<<endl;
    cout<<solution[2]<<endl;
    cout<<solution[3]<<endl;*/

    //cout << "True/False: " << isValidInput(guess, len, min, max) << endl;
    for (int i = 0; i < 9; i++)
    {

        cout << "Geben sie die 4 Ziffern, die sie vermuten nacheinander ein." << endl;
        vector<int> guess;
        //Werte für guess erzeugen
        for (int i = 0; i < len; i++)
        {
            int ziffer;
            cin>>ziffer;
            guess.push_back(ziffer);
        }
        if (obj.isValidInput(guess, len, min, max) == 0)
        {
            cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
            return 0;
        }

        cout << "Anzahl an schwarzen Zahlen: " << obj.black(solution, guess) << endl;
        cout << "Anzahl an weißen Zahlen: " << obj.white(solution, guess) << endl;

        return 0;
    }
    return 0;
}
