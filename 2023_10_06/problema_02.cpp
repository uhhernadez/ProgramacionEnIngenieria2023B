#include <iostream>
using namespace std;
int main () {
  char letra = ' ';
  char diferencia = 32;
  char dif = 'a' - 'A';

  // minúsculas
  if ( letra >= 'a' && letra <= 'z') {
    cout << letra << " " << static_cast<char>(letra-32) << "\n";
    return 0;
  }

  if ( letra >= 'A' && letra <= 'Z') {
    char minuscula = letra + dif;
    cout << letra << " " << minuscula << "\n";
    return 0;
  }

  cout << "No es una letra" << endl;
  return 0;
}