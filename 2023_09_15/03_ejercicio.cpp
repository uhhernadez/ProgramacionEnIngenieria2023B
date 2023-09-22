// Dado un caracter diga si es un numero o una letra
#include <iostream>
using namespace std;
int main () {
  char letra = 'a';
  cout << "Dame un caracter " << endl;
  cin >> letra;
  cout << "El codigo " << (int)letra << endl;
  // Número entre 0 y 9
  if (letra >= '0' && letra <= '9') {
    cout << "El caracter '"<< letra << "' es un numero " << endl;
  }
  bool p = letra >= 'a' && letra <= 'z';
  bool q = letra >= 'A' && letra <= 'Z';
  if (p || q) {
    cout << "El caracter '"<< letra << "' es una letra" << endl;
  }
  return 0;
}
