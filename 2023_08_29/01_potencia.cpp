// Toma un número y lo eleva al cuadrado y al cubo.
#include <iostream>
#include <cmath>
using namespace std;
int main () {
  float num;
  cout << "Numero : ";
  cin >> num;
  //cout << "Cuadrado : " << num * num << endl;
  //cout << "Cubo : " << num*num*num << endl;
  float cuadrado = 2;
  float num2 = pow(num, cuadrado); // pow (num, 2)
  cout << "Cuadrado : " << num2 << endl;
  cout << "Cubo : " << pow(num, 3) << endl;
  return 0;
}