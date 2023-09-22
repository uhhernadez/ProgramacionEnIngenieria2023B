// Muestra si es un número divisible entre 11 y 5
#include <iostream>
using namespace std;
int main () {
  int n, aux = 0;
  cout << "Dame un numero : ";
  cin >> n;

  if (n % 5 == 0) {
    aux += 5;
  } 
  if (n % 11 == 0) {
    aux += 11;
  }

  switch (aux) {
    case 0:  cout << "No es multiplo de ninguno" << endl; break;
    case 5:  cout << "n es multiplo de 5" << endl; break;
    case 11: cout << "n es multiplo de 11" << endl; break;
    case 16: cout << "n es multiplo de de 5 y de 11" << endl; break;
    default: cout << "Algo muy malo ocurrio" << endl;
  }

  return 0;
}
