#include <iostream>
using namespace std;
/*
6. För att slå klubbrekordet i längdhopp måste man hoppa mer än
7,92 meter och det får inte blåsa mer än 2,0 meter/sekund medvind.
Skriv ett program som låter användaren skriva in  hoppets längd och
aktuell vindstyrka och som skriver
ut "Grattis!" om det är nytt klubbrekord.
*/
int main()
{
    float langd;
    float vind;
    cout << "Hur långt hoppade du? " << endl;
    cin >> langd;
    cout << "Hur mycket medvind hade du (m/s)? " << endl;
    cin >> vind;

    if ( (langd > 7.92) && (vind <= 2.0)  ) {

        cout << "Grattis till nya klubbrekordet!" << endl;
    }
    else {
        cout << "Tyvärr, inget klubbrekord" << endl;
    }
    // Ett annat sätt
    if (langd > 7.92) {

        if (vind <= 2.0) {
            cout << "Grattis till nya klubbrekordet!" << endl;
        }
        else {
             cout << "Tyvärr, inget klubbrekord" << endl;
        }

    }
    else {

          cout << "Tyvärr, inget klubbrekord" << endl;
    }


    return 0;
}
