#include <iostream>
using namespace std;

void RowPattern6(int k) {
  for (int i = 0; i < k; i++) {
    cout << ' ';
  }
  cout << '*' << endl;
}

void RowChar(int k) {
  for (int i = 0; i < k; i++) {
    cout << '*';
  }
  cout << endl;
}

void ExampleUsingFixValues() {
  for(int k = 0; k < 8; k++) {
    if (k == 0) {
      RowChar(8);
    } else if (k==7) {
      RowChar(8);
    } else {
      RowPattern6(k);
    }
  }
}

void Pattern6 (int n) {
  for(int k = 0; k < n; k++) {
    if (k == 0) {
      RowChar(n);
    } else if (k == n-1) {
      RowChar(n);
    } else {
      RowPattern6(k);
    }
  }

}

void RowPattern9 (int width, int row) {
  int n = width - 1;
  for (int i = 0, j = n; i < width; i++, j--) {
    if (i == j && width %2 == 1) {
      cout << '*';
      continue;
    }
    if (i == row) {
      cout << '*';  
    }
    if (j == n - row) {
      cout << '*';
    }
    cout << ' ';
  }
  cout << endl;
}

int main () {
  RowPattern9(7, 2);
}