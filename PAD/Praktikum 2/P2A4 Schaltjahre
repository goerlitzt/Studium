#include <iostream>
#include <cstdlib>
 
using namespace std;
 
//Funktion zum Überprüfen ob es sich bei der eingegebenen Jahreszahl um ein Schaltjahr handelt.
 
bool isLeapYear(int t1)
{
    //Überprüfen ob die Jahreszahl durch 4 restlos teilbar ist.
    if (t1 % 4 == 0)
    {
        //Überprüfen ob die Jahreszahl durch 100 restlos teilbar ist.
        if (t1 % 100 == 0)
        {
            //Überprüfen ob die Jahreszahl durch 400 restlos teilbar ist.
            if (t1 % 400 == 0)
            {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}
 
int main(int argc, char** argv)
{
    int jahr;
    cin>>jahr;
    cout << isLeapYear(jahr) << endl;
 
    return 0;
}
