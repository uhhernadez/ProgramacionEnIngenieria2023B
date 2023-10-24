#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> valores(5);

  for (int k = 0; k < valores.size(); k++) {
    cout << "Dame el valor "<< (k+1) << endl;
    cin >> valores[k];
  } 

  for (int valor : valores) {
    cout << valor << " ";
  }
  cout << endl;
  return 0;
}

