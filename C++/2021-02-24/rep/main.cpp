#include <iostream>
using namespace std;
// Description
// Funktion som dividerar två tal
// returnerar kvoten
// Syntax
// dividera(tal1, tal2)
// Parametes
// tal1, tal2: De två talen som
// ska divideras. tal1 divideras med tal2
// Allowed data types: float (decimaltal)
// Return value: float
float dividera(float,float);
int main()
{
    float tal1;
    float tal2;
    cout << "Mata in tal 1 ";
    cin >> tal1;
    cout << "Mata in tal 2 ";
    cin >> tal2;

    cout << tal1 << " dividerat med " << tal2 << " blir "  << dividera(tal1,tal2) << endl;

    // Om "signed" (posetiva och negativa tal)
	// och "unsigned" (endast posetiva tal)
    // unsigned endast positiva tal
    //unsigned long tal = 45;
    //tal = -6;
    //cout << tal << endl;
    // Här finns information om att det
    // är ett negativt tal
    // minustecknet tar plats.
    // Mindre plats för själva värdet.
    //long tal1 = -45;
    //cout << (tal1 + 10) << endl;
    return 0;
}
// Själva funktionen som gör jobbet
float dividera(float a, float b)
{
    return a/b;
}
