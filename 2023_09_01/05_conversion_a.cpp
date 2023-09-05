#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  float DC;
  float p;
  cout << "¿ Cuantos Dogecoins tienes? :";
  cin >> DC;
  p = DC * 1.09;
  cout << "Eso equivale a :" << setprecision(3) << p << endl; 
}