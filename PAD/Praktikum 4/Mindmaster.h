#ifndef MINDMASTER_H
#define MINDMASTER_H

using namespace std;

template <typename T>

class Mindmaster
{
public:
    Mindmaster();
    
    Mindmaster(const Mindmaster& orig);
//WIESO MUSS DAS RAUS    
//    virtual ~Mindmaster();
  
T isValidInput(const vector<T>& guess, int length, T min, T max);
T white(const vector<T>& solution, const vector<T>& guess);
T black(const vector<T>& solution, const vector<T>& guess);

private:
};

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
template<typename T>
Mindmaster<T>::Mindmaster(){
        };
#endif /* MINDMASTER_H */
