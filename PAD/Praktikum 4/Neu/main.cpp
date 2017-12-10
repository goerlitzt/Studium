#include <cstdlib>
#include<vector>
#include <iostream>
#include "Mindmaster.h"

using namespace std;

/*Die main soll so klein wie möglich sein. (z.B. NUR -> "startGame();" welche sich alles aus der Klasse Mindmaster holt.
 In die Klasse Mindmaster sollen die Attribute, NICHT in die main. Sprich min, max etc.
 Es soll eine hpp mit den Funktionen geben die von der class aufgerufen werden*/

int main(int argc, char** argv)
{
    Mindmaster<int> mind;

    //    int min = 0; //Nur Ziffern von 0-9 sollen jeweils als Wert im Vector solution landen                                       
    //    int max = 9;
    //    int len = 4; //Der "Code" soll nur 4-Stellig sein

    mind.startGame();
//    {
//        int versuche = 8; //Anzahl an übrigen Versuchen
//        vector<int> solution;
//
//        cout << "Bitte geben sie die 4 Ziffern für ihren Code nacheinander ein." << endl;
//        //Werte für solution erzeugen
//        for (int i = 0; i < length; i++)
//        {
//            int ziffer;
//            cin>>ziffer;
//            solution.push_back(ziffer);
//        }
//        if (mind.isValidInput(solution, length, min, max) == 0)
//        {
//            cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
//            return 0;
//        }
//
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//        cout << "___________________________________________________________________________" << endl;
//
//        for (int i = 0; i < 9; i++)
//        {
//            versuche = versuche - 1;
//            cout << "Geben sie die 4 Ziffern, die sie vermuten nacheinander ein." << endl;
//            vector<int> guess;
//            //Werte für guess erzeugen
//            for (int i = 0; i < length; i++)
//            {
//                int ziffer;
//                cin>>ziffer;
//                guess.push_back(ziffer);
//            }
//            if (mind.isValidInput(guess, length, min, max) == 0)
//            {
//                cout << "Der eingegebene Code ist leider nicht zulässig." << endl;
//                versuche = versuche + 1; //Unzulässige Codes sollen keinen Versuch abziehen
//            }
//            if (mind.isValidInput(guess, length, min, max) == 1) //Wieviele Zahlen schwarz bzw. weiß sind, sollen nur angezeigt werden wenn die Eingabe zulässig ist
//            {
//                cout << "Anzahl an schwarzen Zahlen: " << mind.black(solution, guess) << endl;
//                cout << "Anzahl an weißen Zahlen: " << mind.white(solution, guess) << endl;
//                cout << "Du hast noch " << versuche << " Versuche übrig." << endl;
//            }
//
//            if (mind.black(solution, guess) == 4) //Wenn alle Zahlen richtig sind kann das Programm frühzeitig beendet werden
//            {
//                cout << "Glückwunsch du hast den Code erraten!" << endl;
//                return 0;
//            }
//
//            if (versuche == 0) //Wenn keine Versuche mehr übrig sind, soll das Programm sich beenden
//            {
//                cout << "Schade, du hast alle Versuche verbraucht!" << endl;
//                return 0;
//            }
//        }
//        return 0;
//    }
}
