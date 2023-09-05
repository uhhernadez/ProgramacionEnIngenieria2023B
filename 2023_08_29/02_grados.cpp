// Convierte de grados Fahrenheit a centígrados
#include <iostream>
using namespace std;
int main () {
  float C, F;
  cout << " Grados Fahrenheit : " ;
  cin >> F; 
  C = ( F - 32 ) / 1.8;
  cout << " Centígrados : " << C << endl;
  return 0;
}