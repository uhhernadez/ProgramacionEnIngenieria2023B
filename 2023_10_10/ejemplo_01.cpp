#include <iostream>
using namespace std;

float AddThreeValues (float a, float b, float c) {
  float retval = a + b + c;
  return retval;
}

bool IsBiggerThan(float a, float b) {
  return a > b;
}

void MultTable (float num) {
  for (float i = 1; i <= 10; i++) {
    cout << num << " x "<< i << " = " << num * i << endl;
  }
}

int main () {
  // Tabla del 1
  MultTable(1);
  // Tabla del 7
  MultTable(7);
  // Tabla del 9
  MultTable(9);
}