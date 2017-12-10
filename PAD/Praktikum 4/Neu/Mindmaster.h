#ifndef MINDMASTER_H
#define MINDMASTER_H

using namespace std;

template <typename T>

class Mindmaster
{
public:
    Mindmaster();

    T startGame();
    T isValidInput(const vector<T>& guess, int length, T min, T max);
    T white(const vector<T>& solution, const vector<T>& guess);
    T black(const vector<T>& solution, const vector<T>& guess);

private:
    int min = 0; //Nur Ziffern von 0-9 sollen jeweils als Wert im Vector solution landen                                       
    int max = 9;
    int length = 4; //Der "Code" soll nur 4-Stellig sein
    //vector<int> solution();
    //vector<int> guess();
};



template<typename T>
Mindmaster<T>::Mindmaster()
{
};
#endif /* MINDMASTER_H */
