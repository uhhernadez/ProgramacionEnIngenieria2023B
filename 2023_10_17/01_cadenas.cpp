#include <iostream>
#include <string>
using namespace std;

int main () {
  string test = "Hola mundo";
  cout  << test[0] 
        << test[1]
        << test[2]
        << test[3]
        << test[4]
        << test[5]
        << test[6]
        << test[7]
        << test[8]
        << test[9]
        << endl;
  test[8] = 'D';
  cout << " Size : " <<test.length() << endl;  
  cout << test << endl;
}