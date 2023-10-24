#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int num;
  cout << "Limite : ";
  cin >> num;

  for (int i = 1; i <= num; i++) {
    //cout << "El numero " << i << " elevado al cubo es " << i*i*i << endl;
    cout << "El numero " << i << " elevado al cubo es " << pow(i, 3) << endl;
  } 
}