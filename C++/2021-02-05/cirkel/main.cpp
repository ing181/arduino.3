#include <iostream>
using namespace std;
/*
Gör ett program som kan beräkna arean och omkretsen av en cirkel om användaren (du) matar in
cirkelns radie.
// omkrets = 2*radie*PI;
// area = PI*radie*radie;

Och en utveckling av programmet . Skapa två funktioner. En för omkretsen och en för arean.
Detta kan vara ganska knepigt. Så det är inte konstigt om du tycker det är svårt!
*/
void beraknaArea();
int main()
{
    char val;
    cout << "Beräkna omkretsen? (o)" << endl;
    cout << "Beräkna arean? (a)" << endl;
    cin >> val;

    if (val == 'o') {
        float PI = 3.1415;
        float radie;
        cout << "Ange radien ";
        cin >> radie;
        float area = radie*radie*PI;
        cout << "Arean på cirkeln med radien " << radie << " är " << area << endl;
    }
    else if (val == 'a')
    {
        beraknaArea();
        beraknaArea();
        beraknaArea();
        /*
        float PI = 3.1415;
        float radie;
        cout << "Ange radien ";
        cin >> radie;
        float omkrets = 2*radie*PI;
        cout << "Omkretsen på cirkeln med radien " << radie << " är " << omkrets << endl;
        */

    }
    else {

        cout << "Felaktigt val!" << endl;
    }

    return 0;
}

void beraknaArea()
{
        float PI = 3.1415;
        float radie;
        cout << "Ange radien ";
        cin >> radie;
        float omkrets = 2*radie*PI;
        cout << "Omkretsen på cirkeln med radien " << radie << " är " << omkrets << endl;
}
