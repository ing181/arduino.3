// Variabler använbara i hela programmet
int tal;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); // Vi skapar kontakt med "serial monitor" på den egna datorn.
    tal = 0;
 }

//jfr while-sats i c++
void loop() {
  // put your main code here, to run repeatedly:
      while ( tal < 100 ) { // Om sant
          Serial.print("Talet ar");
          Serial.print(tal);
          Serial.print('\n');
          tal = tal + 1;
        }

        tal = 0;
 
}
