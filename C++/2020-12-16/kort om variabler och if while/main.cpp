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
     cout << "Mata in ett flyttal ";
     // inmatning
     cin >> flyttal;

    // Enkel villkorssats
    // OBS! Jämförelse mellan två saker sker med
    // jämförelseoperatorn "==" TVÅ LIKAMED TECKEN

    if (flyttal == 7.000001) {  // Flyttal är aldrig exakta. Datorn kan ha svårt att avgöra om detta är sant.
        cout << "SANT" << endl;
    }
    else {
        cout << "FALSKT" << endl;
    }

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
        // Vi behöver få till en ändrin  för att få slut på loopen.
        // OBS! Tilldelning "=". "Det som är till vänster får värdet av det som är till höger"
        heltal = (heltal + 1); // 10
        cout << "heltal har nu värdet " << heltal << endl;
        if (heltal > 9) {  // Här ändras värdet på heltal, loopen kommer aldrig att ta slut
            heltal = 0;
        }
    }
    cout << "Slut på while-satsen" << endl;


    return 0;
}
