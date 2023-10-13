#include <iostream>
using namespace std;

int main () {

  int  n = 20;
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++) {
      cout << '*';
    }
    cout << endl;
  }
  cout << "Usando ciclos while \n";
  
  int j = 0;
  while ( j < n ) {
    int k = 0;
    while ( k < n ) {
      cout << '*';
      k++;
    }
    cout << endl;
    j++;
  }

}