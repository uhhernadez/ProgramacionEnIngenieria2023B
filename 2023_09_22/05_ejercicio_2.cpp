#include <iostream>
using namespace std;

int main () {
  float num;
  cout << "Numero: ";
  cin >> num;

  for (int j=1; j < 11; j+=1) {
    cout << num << " x " << j << " = " << num*j << endl;
  }
}