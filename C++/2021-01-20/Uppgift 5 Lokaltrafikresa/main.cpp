#include <iostream>
using namespace std;
/*
5. Personer som är yngre än 15 år eller äldre än 65 år åker med
lokaltrafiken för 25 kr/resa. För övriga kostar resan 35 kr/resa.
Konstruera ett program som frågar efter åldern och
sedan skriver ut resans pris.
*/
int main()
{
    int alder;
    cout << "Hur gammal är du? " << endl;
    cin >> alder;
    // Tecknet för and (och) &&
    // Tecknet or (eller) ||
    // Den första parantesen "(alder < 15)" ELLER
    // den andra parantesen "(alder > 65)"
    // behöver vara sann för att hela store
    // parantesen "( (alder < 15) || (alder > 65) )"
    // ska vara sann
    if ( (alder < 15) || (alder > 65) ) {

        cout << "Det kostar 25 kronor" << endl;
    }
    else {
        cout << "Det kostar 35 kronor" << endl;
    }
  // Båda paranteseran "(alder >= 15)" OCH "(alder <= 65)"
  // måste vara sanna för att hela uttrycket
  // "( (alder >= 15) && (alder <= 65) )"
  // ska vara sant.
    if ( (alder >= 15) && (alder <= 65) ) {

        cout << "Det kostar 35 kronor" << endl;
    }
    else {
        cout << "Det kostar 25 kronor" << endl;
    }

    return 0;
}
