#include <iostream>
using namespace std;
// om
int main()
{
    int tal;
    tal = 10;
    int inmatattal;

    cout << "Mata in ett heltal ";
    cin >> inmatattal;
    // Kollar om detta är sant
    if (inmatattal < tal)
    {

        cout << "Mindre än tio" << endl;
    }
    else
    {
       cout << "Tio eller mer än tio" << endl;
    }

    return 0;
}
