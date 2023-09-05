// Calcular las raíces de una ecuación cuadrática
#include <iostream>
#include <cmath>
using namespace std;
int main () {
  float a = 1, b = -10, c = 16;

  float x1 = (-b + sqrt( b * b - 4 * a * c))/(2*a);
  float x2 = (-b - sqrt( b * b - 4 * a * c))/(2*a);
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;
  return 0;
}