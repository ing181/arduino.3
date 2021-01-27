#include <iostream>
using namespace std;
// 4. Kolla "uppgift7.png" Användaren behöver mata in sitt namn och födelsedatum. Sen fixar programmet resten.
int main()
{
    string namn;
    int fodelsear;
    cout << "Hej vad heter du? ";
    cin >> namn;
    cout << "Viket år är du född? ";
    cin >> fodelsear;

    cout << "Hej " << namn << " du är " << (2021-fodelsear) << " år gammal" << endl;

    return 0;
}
