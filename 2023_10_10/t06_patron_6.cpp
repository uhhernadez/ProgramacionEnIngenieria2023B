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
  int line1 = row;
  int line2 = n - row;
  
  if (line1 == line2) {
    for (int i = 0; i < width; i++) {
      if (i == 0) {
        cout << '*';
        continue;
      }
      if (i == n) {
        cout << '*';
        continue;
      }      
      if (line1 == i) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }
  } else {
    for (int i = 0; i < width; i++) {
      if (i == 0) {
        cout << '*';
        continue;
      }
      if (i == n) {
        cout << '*';
        continue;
      }
      if (line1 == i) {
        cout << '*';
        continue;
      }
      if (line2 == i) {
        cout << '*';
        continue;
      }
      cout << ' ';
    }
  }
  cout << endl;
}

void Pattern9 (int width) {
  for (int k = 0; k < width;k++) {
    if (k == 0 || k == width-1) {
      RowChar(width);
      continue;        
    }
    RowPattern9(width, k);
  }
}

int main () {
  Pattern9(7);
}