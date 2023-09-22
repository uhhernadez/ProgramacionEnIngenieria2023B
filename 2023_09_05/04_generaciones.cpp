#include <iostream>
using namespace std;
int main () {
  int year;
  cout << "En que anio naciste " << endl;
  cin >> year;

  if (year >= 1965) {
    if ( year <= 1980) {
      cout << "Eres Generacion X" << endl;
    }
  }
  if (year >= 1981) {
    if ( year <= 1996) {
      cout << "Eres Millenial" << endl;
    }
  }
  if (year >= 1997) {
    if ( year <= 2012) {
      cout << "Eres Generacion Z" << endl;
    }
  }
  return 0;
}