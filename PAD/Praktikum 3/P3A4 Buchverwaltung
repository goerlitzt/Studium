#include <cstdlib>
#include <iostream>
#include <string>
#include<vector>
using namespace std;
enum kategorie
{
    fantasy, thriller, ratgeber, roman
};
 
struct Buch
{
public:
    string titel;
    string autor;
    string jahr;
    string seitenzahl;
    kategorie kat;
   
    vector<Buch> liste;
 
    void einspeichern()
    {
        Buch bu;
        string k;
 
        cout << "Bitte den Titel eingeben: ";
        cin >> titel;
        bu.titel = "Titel: " + titel;
 
        cout << "Bitte den Autor eingeben: ";
        cin >> autor;
        bu.autor = "Autor: " + autor;
 
        cout << "Bitte das Erscheingungsjahr eingeben: ";
        cin >> jahr;
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        cout << "Bitte die Seitenanzahl angeben: ";
        cin >> seitenzahl;
        bu.seitenzahl = "Laenge: " + seitenzahl;
 
        cout << "Bitte geben sie die Kategorie an: ";
        cin >> k;
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
    }
 
    void ausgeben()
    {
 
        for (int i = 0; i < liste.size(); i++)
        {
            cout << liste[i].titel << endl;
            cout << liste[i].autor << endl;
            cout << liste[i].jahr << endl;
            cout << liste[i].seitenzahl << endl;
            switch (liste[i].kat)
            {
            case 0: cout << "Kategorie: Fantasy" << endl << endl;
                break;
            case 1: cout << "Kategorie: Thriller" << endl << endl;
                break;
            case 2: cout << "Kategorie: Ratgeber" << endl << endl;
                break;
            case 3: cout << "Kategorie: Roman" << endl << endl;
                break;
            }
        }
    }
 
    void testdaten()
    {
        Buch bu;
        string k;
 
        titel = "Erstes Buch";
        bu.titel = "Titel: " + titel;
 
        autor = "Erster Autor";
        bu.autor = "Autor: " + autor;
 
        jahr = "2002";
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        seitenzahl = "499";
        bu.seitenzahl = "Seitenanzahl: " + seitenzahl;
 
        k = "Fantasy";
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
 
 
        titel = "Zweites Buch";
        bu.titel = "Titel: " + titel;
 
        autor = "Zweiter Autor";
        bu.autor = "Autor: " + autor;
 
        jahr = "1997";
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        seitenzahl = "129";
        bu.seitenzahl = "Seitenanzahl: " + seitenzahl;
 
        k = "Thriller";
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
       
         titel = "Drittes Buch";
        bu.titel = "Titel: " + titel;
 
        autor = "Dritter Autor";
        bu.autor = "Autor: " + autor;
 
        jahr = "1970";
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        seitenzahl = "1234";
        bu.seitenzahl = "Seitenanzahl: " + seitenzahl;
 
        k = "Roman";
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
       
         titel = "Viertes Buch";
        bu.titel = "Titel: " + titel;
 
        autor = "Vierter Autor";
        bu.autor = "Autor: " + autor;
 
        jahr = "2010";
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        seitenzahl = "634";
        bu.seitenzahl = "Seitenanzahl: " + seitenzahl;
 
        k = "Ratgeber";
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
 
         titel = "Fünftes Buch";
        bu.titel = "Titel: " + titel;
 
        autor = "Fünfter Autor";
        bu.autor = "Autor: " + autor;
 
        jahr = "2017";
        bu.jahr = "Erscheinungsjahr: " + jahr;
 
        seitenzahl = "500";
        bu.seitenzahl = "Seitenanzahl: " + seitenzahl;
 
        k = "Thriller";
        if (k == "Fantasy")
        {
            bu.kat = fantasy;
        }
        if (k == "Thriller")
        {
            bu.kat = thriller;
        }
        if (k == "Ratgeber")
        {
            bu.kat = ratgeber;
        }
        if (k == "Roman")
        {
            bu.kat = roman;
        }
        liste.push_back(bu);
    }
};
 
int menue()
{
    Buch bu;
    string eingabe;
 
    while (true)
    {
        cout << "*********** Buchverwaltung Version 0.1**********" << endl;
        cout << "Hauptmenue:" << endl;
        cout << "1. Alle Bücher anzeigen" << endl;
        cout << "2. Buch hinzufügen" << endl;
        cout << "3. Testdaten erzeugen" << endl;
        cout << "0. Programm beenden" << endl;
        cin >> eingabe;
 
        if (eingabe == "1")
        {
            cout << "Sie befinden sich im Menuepunkt 'Alle Bücher anzeigen'" << endl;
            bu.ausgeben();
        }
        if (eingabe == "2")
        {
            cout << "Sie befinden sich im Menuepunkt 'Buch hinzufügen'" << endl;
            bu.einspeichern();
        }
        if (eingabe == "3")
        {
            cout << "Sie befinden sich im Menuepunkt 'Testdaten erzeugen'" << endl;
            bu.testdaten();
        }
        if (eingabe == "0")
        {
            return 0;
        }
    }
}
 
int main()
{
    menue();
}
