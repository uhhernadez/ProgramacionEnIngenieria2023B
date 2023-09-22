// Dado un número muestra si es par o impar.
#include <iostream>
using namespace std;
int main () {
  int n;
  cout << "Dame un numero: ";
  cin >> n;

  if ( n % 2 == 0) {
    cout << "Numero par" << endl;
  } else {
    cout << "Numero impar" << endl;
  }

  return 0;
}