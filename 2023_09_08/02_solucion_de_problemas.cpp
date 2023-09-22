#include <iostream>
using namespace std;
int main () {
  int aux;
  cout << "Tienes un problema ?, 1 Si, 0 No" << endl;
  cin >> aux;
  if (aux == 1) {
    cout << "Tiene solucion ?, 1 Si, 0 No " << endl;
    cin >> aux;
    if ( aux == 1) {
      cout << "Solucionalo" << endl;
      cout << "Se soluciono?  1 Si, 0 No " << endl;
      cin >> aux;
      cout << "No te preocupes" << endl;
    } else {
      cout << "No te preocupes" << endl;
    }
  } else {
    cout << "No te preocupes :) " << endl;
  }

  return 0;
}