#include <iostream>
#include <vector>
using namespace std;

int main () {
  int a[10]; // Vacía 
  int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Arreglo inicializado
  vector<int> c(10); // Vacía

  cin >> a[0];
  cin >> b[0];
  cin >> c[0];

  cout << a[0] << endl;
  cout << b[0] << endl;
  cout << c[0] << endl;
}
