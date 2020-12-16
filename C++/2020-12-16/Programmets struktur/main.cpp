// inkluderar biblioteket "iostream"
// Ett bibliotek för kod. Gör att vi kan använda oss av
// saker som finns i "iostream"
// "iostream" hanterar in- och utmatning från tangentbord
// och ut till skärmen,
#include <iostream>
// Talar om att vi använder klasser som finns i namnrymden
// eller namespace "std". Klasser som vi använder ofta är
// "cout", "cin", "endl". De här klasserna är definierade i
// biblioteket "iostream".
using namespace std;
// Här börjar programmet. Allt som vi vill ska hända
// skall skrivas mellan "{" och "}". Uppträder
// alltid i par.
// När det står "int main()" betyder det att ett heltal
// ska skickas (kommer från) programmet. Den som tar emot
// är den som ansvarar för att programmet startar.
// Det är operativsystemet (Windows 10) som startar vårt program.
// Programmet körs i Windows 10.

int main()
{
    int tal;
    cin >> tal;
    cout << "Hello world!" << endl;
    // Vi konstruerar en bugg som får programmet att krascha

    // Definition: "Ett heltal skilt från 0 skickas till operativsystemet"
    cout << 3/tal << endl; // OBS! Division med 0
    // Alltid sist, precis före sista måsvingen
    // dyker "return 0;" upp
    return 0; // return "skicka tillbaka heltalet 0"
              // till operativsystemet.
              // Varför?
              // Om programmet lyckas komma till sista raden
              // komma till "return 0;" så vet operativsystemet
              // att programmet körts klart och att allt fungerat.
}
