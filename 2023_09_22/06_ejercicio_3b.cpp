#include <iostream>
using namespace std;

  int main () {
  int num, j;
  cout << "Hasta que numero: ";
  cin >> num;

  for (int j = 1 ; j <= 10; j++) {
    for (int i = 1; i <= num; i++) {
      if (i != num) {
        cout << i << "x" << j << "=" << i * j << ", "; 
      } else {
        cout << i << "x" << j << "=" << i * j; 
      } 
    }
    cout << endl;
  }
}