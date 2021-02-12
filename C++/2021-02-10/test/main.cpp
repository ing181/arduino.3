#include <iostream>

using namespace std;

int main()
{
   int ratt = 8;
   int val;
   cout << "Gissa på ett tal mellan 0 och 10" << endl;
   cin >> val;

   while ( val != ratt ) {

    cout << "Tyvärr, fel! Gissa igen" << endl;
    cin >> val;

   }

   cout << "Du gissade rätt!" << endl;

    return 0;
}
