#include <iostream>
using namespace std;
// Uppgift
// Nu behöver du två int variabler
// Låt användaren mata in ett heltal
// i respektive variabel.
// Låt programmet beräkna och skriva
// ut summan av de två talen
// Ledtråd: + fungerar precis som ni
// är vana vid
int main()
{

    int variabel1; // Kan endast hantera heltal
                   // EX -3, 0, 56
    int variabel2;
    cout << "Skriv in värdet på variabel1 ";
    cin >> variabel1; // 3
    cout << "SKriv in värdet på variabel2 ";
    cin >> variabel2; // 2
    cout << "Summan av " << variabel1 << " och " << variabel2 \
    << " är "  << variabel1 / variabel2 << endl;
    // Vad tror ni händer om man
    // byter till -, * eller / ?
    // För att hantera "resten vid division med heltal"
    // Behöver vi räkneoperatorn % modulus
    cout << "Resten vid divisionen av " << variabel1 << " och " \
<< variabel2 << " är " << variabel1 % variabel2 << endl;



    return 0;
}
