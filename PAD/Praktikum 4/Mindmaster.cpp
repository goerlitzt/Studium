#include <cstdlib>
#include<vector>
#include <iostream>
#include "Mindmaster.h"

using namespace std;

int main(int argc, char** argv)
{

    Mindmaster<int> obj;


    int min = 0; //Nur Ziffern von 0-9 sollen jeweils als Wert im Vector solution landen                                       
    int max = 9;
    int len = 4; //Der "Code" soll nur 4-Stellig sein
    int versuche = 8; //Anzahl an übrigen Versuchen
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
        for (int i = 0; i < len; i++)
        {
            int ziffer;
            cin>>ziffer;
            guess.push_back(ziffer);
        }
        if (obj.isValidInput(guess, len, min, max) == 0)
        {
            cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
            versuche = versuche + 1;
        }
        if (obj.isValidInput(guess, len, min, max) == 1)
        {
            cout << "Anzahl an schwarzen Zahlen: " << obj.black(solution, guess) << endl;
            cout << "Anzahl an weißen Zahlen: " << obj.white(solution, guess) << endl;
            cout << "Du hast noch " << versuche << " Versuche übrig." << endl;
        }

        if (obj.black(solution, guess) == 4)
        {
            cout << "Glückwunsch du hast den Code erraten!" << endl;
            return 0;
        }

        if (versuche == 0)
        {
            cout << "Schade, du hast alle Versuche verbraucht!" << endl;
            return 0;
        }
    }
    return 0;
}
