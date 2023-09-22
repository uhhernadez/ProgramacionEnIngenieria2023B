// Dado un número n = {1,2,3,4,5,6,7} el programa muestra
// el día de la semana.
#include <iostream>
using namespace std;
int main () {
  int day = 0;
  cout << "Dame un numero entre 1 y 7 : ";
  cin >> day; 
  switch (day) {
    case 1: cout << "Lunes "     << endl; break;
    case 2: cout << "Martes "    << endl; break;
    case 3: cout << "Miercoles " << endl; break;
    case 4: cout << "Jueves "    << endl; break;
    case 5: cout << "Viernes "   << endl; break;
    case 6: cout << "Sabado "    << endl; break;
    case 7: cout << "Domingo "   << endl; break;
    default: cout << "No existe" << endl; break;
  }

  return 0;
}