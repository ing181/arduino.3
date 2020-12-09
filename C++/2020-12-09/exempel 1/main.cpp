#include <iostream>
using namespace std;
// if-satser
int main()
{
   // system("chcp 1252");
    /*
    if ( sant )
    {
        gör detta
    }
    */
    // jämförelseoperatorn
    // jämför det som står till vänster med det som
    // står till höger
    // 1 == 1 // sant
    // 1 == 2 // falskt
    // datatyp namn
    int val;
    // "tangentbordet" "inmatningsoperatorn" "variabel att mata in till"
    cin >> val; // Sant om användaren matar in 1
    // jämförelseoperatorer
    /*
    < mindre än
    <= mindre än eller lika med
    > sörre än
    >= större än eller lika med
    */
    if ( val >= 1 ) {
        // "skärmen" "utmatningsoperatorn" "det som ska matas ut"
        cout << "Hejsan" << endl;
        cout << "på dig";
    }
    // Om inte sant, annars
    else {

        cout << "Inte sant, du måste mata in 1, du matade in " << val << " vilket är fel";
    }

    return 0;
}
