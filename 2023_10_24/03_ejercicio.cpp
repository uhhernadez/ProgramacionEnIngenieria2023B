#include <iostream>
#include <vector>
using namespace std;

vector<int> leerValores(int N) {
  vector<int> valores(N);

  for (int k = 0; k < valores.size(); k++) {
    cout << "Dame el valor "<< (k+1) << endl;
    cin >> valores[k];
  } 

  return valores;
}

int main () {
  vector<int> valores = leerValores(10);
  int num;
  bool existe = false;
  cout << "Que valor quieres buscar?" << endl;
  cin >> num;
  for (int v: valores) {
    if (v == num) {
      existe = true;
    }
  }
  if (existe) {
    cout << "El arreglo si contiene el numero "<< num << endl;
  } else  {
    cout << "No contiene el valor" << endl;
  }
  return 0;
}

