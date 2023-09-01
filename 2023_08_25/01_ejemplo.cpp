//Operaciones aritméticas 
#include <iostream>
using namespace std;

int main () {
  int a = 9;
  float b = 0.8723;

  cout << "Suma: " << a+b << endl;   
  cout << "Suma sin agrupacion " << a + b * a  + 1 << endl;
  cout << "Suma con agrupacion " << ( a + b ) * a  + 1 << endl;  
  cout << "Elevar al cuadrado b" << b * b << endl;
  cout << "Elevar al cubo b" << b * b * b << endl;
  return 0;
}