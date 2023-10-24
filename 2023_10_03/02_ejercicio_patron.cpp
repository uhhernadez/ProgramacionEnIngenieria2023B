#include <iostream>
using namespace std;
int main () {

  int N = 5;
  for (int j = 0; j < N; j++) {
    for (int k = 0; k < N; k++) {
      if (k % 2 == 0) {
        cout << '*';
      } else {
        cout << '+';
      }
    }
    cout << "\n";
  }
  cout << "\n\n";
  int i = 0, j = 0;
  while (j < N) {
    i = 0;
    while (i < N) {
      char c = (i % 2 == 0)?'*':'+';
      cout << c;
      i++;
    }
    j++;
    cout << "\n";
  }
  i = 0, j = 0;
  cout << "\n\n";
  do {
    i = 0;
    do {
      char c = (i % 2 == 0)?'*':'+';
      cout << c;
      i++;
    } while ( i < N);
    j++;
    cout << "\n";
  } while (j < N);
}
