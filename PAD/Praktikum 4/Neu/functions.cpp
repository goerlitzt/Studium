#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <iostream>
#include <cstdlib>
#include<vector>
#include "Mindmaster.h"

using namespace std;

int startGame()
{
    Mindmaster<int> mind;
    int versuche = 8; //Anzahl an übrigen Versuchen
    int length = 4;
    vector<int> solution;

    cout << "Bitte geben sie die 4 Ziffern für ihren Code nacheinander ein." << endl;
    //Werte für solution erzeugen
    for (int i = 0; i < length; i++)
    {
        int ziffer;
        cin>>ziffer;
        solution.push_back(ziffer);
    }
    if (mind.isValidInput(solution, length, min, max) == 0)
    {
        cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
        return 0;
    }

    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________" << endl;

    for (int i = 0; i < 9; i++)
    {
        versuche = versuche - 1;
        cout << "Geben sie die 4 Ziffern, die sie vermuten nacheinander ein." << endl;
        vector<int> guess;
        //Werte für guess erzeugen
        for (int i = 0; i < length; i++)
        {
            int ziffer;
            cin>>ziffer;
            guess.push_back(ziffer);
        }
        if (mind.isValidInput(guess, length, min, max) == 0)
        {
            cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
            versuche = versuche + 1; //Unzulässige Codes sollen keinen Versuch abziehen
        }
        if (mind.isValidInput(guess, length, min, max) == 1) //Wieviele Zahlen schwarz bzw. weiß sind, sollen nur angezeigt werden wenn die Eingabe zulässig ist
        {
            cout << "Anzahl an schwarzen Zahlen: " << mind.black(solution, guess) << endl;
            cout << "Anzahl an weißen Zahlen: " << mind.white(solution, guess) << endl;
            cout << "Du hast noch " << versuche << " Versuche übrig." << endl;
        }

        if (mind.black(solution, guess) == 4) //Wenn alle Zahlen richtig sind kann das Programm frühzeitig beendet werden
        {
            cout << "Glückwunsch du hast den Code erraten!" << endl;
            return 0;
        }

        if (versuche == 0) //Wenn keine Versuche mehr übrig sind, soll das Programm sich beenden
        {
            cout << "Schade, du hast alle Versuche verbraucht!" << endl;
            return 0;
        }
    }
    return 0;
}

template<typename T>
T Mindmaster<T>::white(const vector<T>& solution, const vector<T>& guess)
{
 int zaehler = 0; //Zählt wieviele Zahlen sowohl in guess als auch in solution vorkommen, ABER an VERSCHIEDENER Stelle sind

    for (int erste = 0; erste < solution.size(); erste++)
    {
        for (int zweite = 0; zweite < solution.size(); zweite++)
        {
            if (erste != zweite)
            {
                if (guess[erste] == solution[zweite])
                {
                    zaehler++;
                }
            }
        }
    }
    return zaehler;
}

template<typename T>
T Mindmaster<T>::black(const vector<T>& solution, const vector<T>& guess)
{
 int zaehler = 0; //Zählt wieviele Stellen in guess & solution gleich sind

    for (int i = 0; i < solution.size(); i++) //Schleife läuft so oft, wie die Anzahl an Werten in Solution
    {
        if (solution[i] == guess[i]) //Überprüfen ob an einer der Stellen die Zahl GLEICH ist
        {
            zaehler++; //Falls an einer Stelle die Zahl gleich ist, zaehler erhöhen
        }
    }
    return zaehler; //zaehler zurückgeben
}

template<typename T>
T Mindmaster<T>::isValidInput(const vector<T>& guess, int length, T min, T max)
{
if (guess.size() == length) //Überprüfen ob guess die richtige Anzahl an Zahlen hat
    {
        int pruefer = 0; //Wird benötigt um zu überprüfen ob jede Zahl im Vector guess zwischen min & max leigt

        for (int i = 0; i < length; i++)
        {
            if (guess[i] <= max) //Überprüfen ob jede Zahl in guess zwischen min und max liegt
            {
                if (guess[i] >= min)
                {
                    pruefer++; //Jedes mal wenn der Wert zwischen min und max leigt, wird pruefer erhöht
                }
            }
            if (pruefer == 4) //Wenn der pruefer 4 ist, bedeutet es dass jede Zahl zwischen min & max liegt und deshalbwird true zurückgegeben
            {
                return true;
            }
        }
        return false; //Ansonsten false da irgendwo die Regel nicht eingehalten wurde
    }
    return false; //Falls die Anzahl an Zahlen nicht mit der Länge übereinstimmt -> false zurückgeben
}
