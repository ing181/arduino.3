#include <iostream>
#include <string> // size() funktion som returnerar antalet tecken i en string
#include <math.h> // pow(x,y) funktion som beräknar x upphöjt till y

// datatyp namn(datatyp, datatyp, ...);
// EX
// En funktion som tar två stycken heltal som in-värden
// och returnerer (utvärde, "det som kommer från funktionen")
// summan av de två invärdena
int test(int, int);
using namespace std;

int main()
{
    // system("chcp 1252"); // Sv. tecken
    string s = "Hejsan\n"; // "\n" samma sak som "endl" ny rad
    int i = 0;
    int x = 3;
    int y = 4;
    while (i < 10) // Inte sant när i har ökat till 10
    {

        cout << "Antalet tecken: " << s.size()  << endl; // Antalet teckenn i stringen "s"
        cout << "2 upphöjt till 3 är: " << pow(2,3) << endl;  // "2 upphöjt till 3" eller "2*2*2"
        cout << "Summan av " << x << " och " << y << " blir " <<  test(x,y) << endl;

        if ( i == 5)
        {
            cout << "Nu är det nr " << i << endl;
        }

        i++;  // i ökar med 1 varge gång loopen kommer hit

        cout << endl;

    }

    return 0;
}
// Detta gör funktionen
int test(int a, int b)
{
    return a + b;
}
