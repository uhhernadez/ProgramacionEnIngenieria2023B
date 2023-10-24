#include <iostream>
#include <vector>
using namespace std;

int main () {
  float v[] = {1, 2, 3 ,4};
  float w[3] = {2, 3, 4};
  vector<float> x{2,3,4,5};

  cout << v[3] << endl;
  v[3] = 10;
  cout << v[3] << endl;
  // Acceso típico a los datos de un arreglo
  for (int k = 0; k < x.size(); k++) {
    cout << x[k] << endl;
  } 
  cout << "-----------------";
  // Acceso a través de una operación de rango
  for (float a : x) {
    cout << a << endl;
  } 
}