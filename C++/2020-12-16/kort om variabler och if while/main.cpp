#include <iostream>
using namespace std;
// En kort rep.
// variabler och if
// Nytt: while
int main()
{
    // heltal
    int heltal; // Deklareras (skapas)

    // flyttal, decimaltal
    float flyttal;  // Normalt i vår miljö (Windows 10) används 8 decimalers noggranhet.

    // utmatning
   // cout << "Mata in ett flyttal ";
   // cin >> flyttal;

    // Enkel villkorssats
    // OBS! Jämförelse mellan två saker sker med
    // jämförelseoperatorn "==" TVÅ LIKAMEDS TECKEN
    /*
    if (flyttal == 7.000001) {
        cout << "SANT" << endl;
    }
    else {
        cout << "FALSKT" << endl;
    }
*/
    /*
    Det som står i villkoret för if-satsen
    måste gå att entydigt bestämma om det
    är sant eller falskt.

    if (   ) {

        cout << "Do this " << endl;
    }
    */
    cout << "Hur många gånger?" << endl;
    cin >> heltal; // 5
    while ( heltal < 10 ) // Så länge som, while, det är sant. Upprepa det som står mellan måsvingarna
    {
        cout << "Nummer 1" << endl;
        cout << "Nummer 2" << endl;
        cout << "Nummer 3" << endl;
        // Vi behöver få till en ändrin av
        // OBS! Tilldelning "=". "Det som är till vänster får samma värde som det som är till höger"
        heltal = (heltal + 1); // 10
        cout << "heltal har nu värdet " << heltal << endl;
        if (heltal > 9) {
            heltal = 0;
        }
    }
    cout << "Slut på while-satsen" << endl;


    return 0;
}
