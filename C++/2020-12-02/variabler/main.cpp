#include <iostream>
using namespace std;
// Handlar om in- och utmatning och variabler
int main()
{
 //  system("chcp 1252");
// "skärmen" "utmatningsoperatorn" "text som matas ut"
// "utmatningsoperatorn" "nyrad" "text som matas ut"
// "nyrad"
    cout << "Hello world!" << endl;
    cout << "HEJ" << endl;
// "tangentbordet" "inmatningsoperatorn"
//    cin >> Vi behöver en behållare
//    där vi placerar det vi matat in
// Om behållare, variabler
// Om datatyper
// behållare för heltal kallas int
// int, från integer
// Nu skapar jag en varibel för heltal
    int alder; // Varibeln innehåller
    // ett odifinierat värde
    cout << alder << endl;
    // Användaren uppmanas att ange sin ålder
    cout << "Mata in din ålder" << endl;
    // "tangentbordet" "inmatningsoperatorn"
    cin >> alder;
    cout << "Din ålder är " << alder << endl;
    return 0;
}
