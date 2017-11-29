#include <cstdlib>
#include <iostream>
 
using namespace std;
 
void even(int start, int ende)
{
    //Prüfen ob die Startzahl geraded ist. Fall nicht einfach 1 addieren.
    if (start % 2 > 0)
    {
        start = start + 1;
    }
    //Der Startzahl durchgehend 2 addieren, bis die Endzahl erreicht wurde.
    while (start <= ende)
    {
        cout << start << endl;
        start = start + 2;
    }
}
 
int main(int argc, char** argv)
{
    int anfang;
    int letzte;
 
    cout << "Geben sie die erste Zahl ein: " << endl;
    cin>>anfang;
    cout << "Geben sie die letzte Zahl ein: " << endl;
    cin>>letzte;
    cout << "Die geraden Zahlen zwischen " << anfang << " und " << letzte << " sind: " << endl;
    even(anfang, letzte);
    return 0;
}
