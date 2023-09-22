#include <iostream>
using namespace std;
int main () {
  int n;
  cout << "Dame un número" << endl;
  cin >> n;

  if ( n > 0) {
    cout << "n es positivo" << endl;
  }
  if ( n == 0) {
    cout << "n es igual a cero" << endl;
  }
  if ( n < 0) {
    cout << "n es negativo" << endl;
  }

  if (n > 0 ) {
    cout << "n es positivo" << endl;
  } else if (n < 0) {
    cout << "n es negativa" << endl;
  } else {
    cout << "n es igual a cero" << endl;
  }

  return 0;
}