#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
  cout << setprecision (1) << PI << endl; 
  cout << setprecision (2) << PI << endl; 
  cout << setprecision (3) << PI << endl; 
  cout << setprecision (4) << PI << endl; 
  cout << setprecision (10) << PI << endl; 
  cout << setprecision (20) << PI << endl; 
  cout << setprecision (30) << PI << endl; 
  return 0;
}