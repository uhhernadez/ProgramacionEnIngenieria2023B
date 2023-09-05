#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float dgc;
    float mxn= 1.09;
    cout << "Ingrese sus dogecoins" << endl;
    cin >> dgc;
    cout << "En pesos mexicanos usted tiene" << dgc*mxn << endl;
    return 0;
}