#include <iostream>
#include <string>
using namespace std;
// Prototipos de la función
int ReadInt(string message) {
  int value;
  cout << message << endl;
  cin >> value;
  return value;
}

int AddTwoVariables (int x, int y) {
  return x + y;  
}

int main () {
  int a, b, c;
  a = ReadInt("Dame el primer valor");
  b = ReadInt("Dame el segundo valor");
  cout << "a = " << a << " b = " << b << " c = " << c << endl;
  c = AddTwoVariables(a, b);
  cout << "La suma es: "<< c << endl; 
}

