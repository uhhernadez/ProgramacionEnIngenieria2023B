#include <iostream>
using namespace std;
int main () {
  float a = 2, b = 3, c = 1;

  if (a > b && a > c ) {
    cout << "el mayor es a = " << a << endl;
  }
  if (b > a && b > c ) {
    cout << "el mayor es b = " << b << endl;
  }
  if (c > a && c > b ) {
    cout << "el mayor es c = " << c << endl;
  }
}