#include <iostream>
using namespace std;

int main () {
  char tecla = ' ';

  while (tecla != 's') {
    cout << "Para salir presione s" << endl;
    cout << "Seleccione la operacion a realizar [1-3]";
    cin >> tecla;
    switch (tecla) {
      case '1': cout << "Selecciono la opcion 1" << endl; break;
      case '2': cout << "Selecciono la opcion 2" << endl; break;
      case '3': cout << "Selecciono la opcion 3" << endl; break;
      default: cout << "operacion no soportada" << endl;
    }
  }


  return 0;
}
