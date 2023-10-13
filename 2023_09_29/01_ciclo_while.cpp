#include <iostream>
using namespace std;

int global;

int main () {
  global = 2;
  cout << global << endl;
  int i = 10;
  for (int i = 0; i < 10 ; i++) {
    cout << i + global << endl;
  }
  cout << i << endl;

  return 0 ;
}