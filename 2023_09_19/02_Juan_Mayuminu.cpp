//Mayuscula o minuscula
#include <iostream>
using namespace std;

int main () {
  char m;

  cout << "Ingresa un caracter" << endl;
  cin >> m;

  if (isalpha(m)) {
    if (m >= 'a' && m <= 'z') { 
      cout << "es minuscula" << endl;
    } 
    if (m >= 'A' && m <= 'Z') {
      cout << "es mayuscula" << endl;
    }
  } else {
      cout << "No es un caracter valido" << endl;
  }

return 0;
}