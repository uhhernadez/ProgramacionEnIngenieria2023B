#include <iostream>
using namespace std;

int main () {
  int n = 0;

  while (true) {
    cout << "Esto es una acción desde el ciclo" << endl;
    break;
  }

  while (false) {
    cout << "Esto nunca se ejecuta" << endl;
    break;
  }

  while ( n < 10 ) {
    cout << "El valor de n: " << n << endl;
    n++;
  }

  return 0;
}