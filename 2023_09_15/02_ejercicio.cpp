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

  if (letra >= 'a' && letra <= 'z') {
    cout << "El caracter '"<< letra << "' es una letra minuscula " << endl;
  }
  
  if (letra >= 'A' && letra <= 'Z') {
    cout << "El caracter '"<< letra << "' es una letra mayuscula " << endl;
  }

  return 0;
}
