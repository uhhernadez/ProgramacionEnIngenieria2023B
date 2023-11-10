#include <iostream>
#include <vector>
using namespace std;

int main () {
  int aux;
  vector<int> valores{ 1, 3, 0, 3, 9, 0 , 0, 2, 10, 11, -1, -2, -3, -4};
  aux = valores[0];
  for (int v : valores) {
    if(aux < v) {
      aux = v;
    }
  }
  cout << "El maximo valor es: " << aux <<endl;
}