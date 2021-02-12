#include <iostream>
using namespace std;

int main()
{
   system("chcp 1252"); // Sv. tecken
   
   
   
   
   
   // \ tecknet före betyder att nästa tecken inte är ett
   // specialtecken
   cout << " \" ";

   // \ tecknet före betyder att nästa tecken är ett specialtecken
   cout << "n"; // n är inget specialtecken
   // men
   cout << "\n"; // Nu blir det ett specialtecken
   // \n betyder new line, samma som endl
   cout << "Hej n på dig" << endl;
   cout << "Hej\npå dig" << endl;

   cout << "\\\\\\       ///" << endl;

   cout << "\"\"\"" << endl;

   cout << "\n\n\n" << endl;
   cout << "nnn" << endl;
   cout << "Namn:\tKalle" << endl;
   cout << "Namn:\tEva" << endl;

   return 0;
}
