#include <iostream>
using namespace std;
int main()
{
    cout << "Välj mellan + och -" << endl;
    cout << "Plus, välj 1" << endl;
    cout << "Minus, välj 2" << endl;
    int val;
    cin >> val;
    if ( val == 1)   // Kod för att addera
    {
        int tal1;
        cout << "Mata in tal 1: ";
        cin >> tal1;
        int tal2;
        cout << "Mata in tal 2: ";
        cin >> tal2;
        int summa;
        // Tilldelningsoperatorn "="
        //
        summa = tal1+tal2; // Här läggs talen ihop, summan tilldelas (summa får värdet)
                           // av tal1 + tal2
        cout << "Summan av " << tal1 << " och " << tal2 << " är " << summa << endl;
    }
    if ( val == 2)   // Kod för att subtrahera
    {
        int tal1;
        cout << "Mata in tal 1: ";
        cin >> tal1;
        int tal2;
        cout << "Mata in tal 2: ";
        cin >> tal2;

        cout  << tal1 << " minus " << tal2 << " är " << tal1-tal2 << endl;


    }
    return 0;
}
