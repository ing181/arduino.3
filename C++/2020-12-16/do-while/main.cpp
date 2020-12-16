#include <iostream>
using namespace std;

int main()
{

    int val;
    do {   // Sker minst 1 gång...

        cout << "Välj + (1)" << endl;
        cout << "Välj - (2)" << endl;
        cout << "Avsluta med (3)" << endl;
        cin >> val;

        if ( val == 1) {

            cout << "kod för pluss" << endl;
        }
        else if (val == 2) {

             cout << "kod för minus" << endl;
        }
        else if (val != 3) {

            cout << "Felaktigt val, välj 1, 2 eller 3" << endl;
        }
    // ..även om villkoret är falskt
    } while ( val != 3 );  // != bettyder "Inte lika med" eller "skilt från"





    return 0;
}
