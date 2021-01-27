#include <iostream>
#include <math.h>
using namespace std;
// Funktionen deklareras
// utvärde, namn och invärde eller invärden
// Funktion som beräknar arean på en rektangel
// invärden är sidornas längd
float rektangel(float, float);
int main()
{
    float a;
    float b;
    cout << "Hej välkommen till Areauträknaren!" << endl;
    cout << "Mitt program beräknar arean av en rektangel, du anger sidornas längd" << endl;
    cout << "och mitt program beräknar arean åt dig" << endl;
    cout << "Ange ena sidan (ett decimaltal eller ett heltal): ";
    cin >> a;
    cout << "Ange andra sidan (ett decimaltal eller ett heltal): ";
    cin >> b;
    float utvarde = rektangel(a,b); // Här hoppar programmet till rad 26
    cout << "Din rektangel har arean " << utvarde << " areaenheter" << endl;
    cout << "Din rektangel har arean " << (a*b) << " areaenheter" << endl;



    return 0;
}
float rektangel(float x, float y)
{
    return x*y; // Här hoppar programmet till rad 20
}
