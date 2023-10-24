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

  for (int valor : valores) {
    cout << valor << " ";
  }
  cout << endl;
  return 0;
}

