using namespace std;
 
void histogramm()
{
    vector<int> HistoVector;
    int zaehler = -1;
    int zahl;
    int stelle;
 
    cin>>zahl;
    //Zahlenwerte in den Vector schieben
    while (zahl >= 0)
    {
        HistoVector.push_back(zahl);
        zaehler++;
        cin>>zahl;
    }
    cout << "________________________________________________________________________________" << endl;
 
    int maximal = zaehler;                  //Maximale Stelle für die For-Schleife
    zaehler = 0;                            //Zaehler resetten damit die Ausgabe nicht falsch herum verläuft
 
    for (; zaehler <= maximal; zaehler++)
    {
        int zahl = HistoVector[zaehler] - 1;
        for (; zahl >= 0; zahl--)
        {
            cout << "*";
        }
        cout << endl;
    }
 
} //End histogramm
 
int main()
{
    histogramm();
    return 0;
}
