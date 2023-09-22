#include <iostream>
using namespace std;
int main () {
  int edad1, edad2;
  string nombre1, nombre2;
  cout << "Dame tu edad y nombre" << endl;
  cin >> edad1 >> nombre1;
  cout << "Dame tu edad y nombre" << endl;
  cin >> edad2 >> nombre2;
  if (edad1 > edad2) {
    cout << nombre1 << " es mayor que " << nombre2 << endl;
  } else {
    cout << nombre2 << " es mayor que " << nombre1 << endl;
  }

  return 0;
}