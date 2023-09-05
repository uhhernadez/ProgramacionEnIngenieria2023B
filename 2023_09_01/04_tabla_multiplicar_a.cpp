#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n;
    cout << "Ingresa un número para conocer su tabla" << endl;
    cin >> n;
    cout << "1 x " << n << " =\t"<< setw(5) << n*1 << endl;
    cout << "2 x " << n << " =\t"<< setw(5) << n*2 << endl;
    cout << "3 x " << n << " =\t"<< setw(5) << n*3 << endl;
    cout << "4 x " << n << " =\t"<< setw(5) << n*4 << endl;
    cout << "5 x " << n << " =\t"<< setw(5) << n*5 << endl;
    cout << "6 x " << n << " =\t"<< setw(5) << n*6 << endl;
    cout << "7 x " << n << " =\t"<< setw(5) << n*7 << endl;
    cout << "8 x " << n << " =\t"<< setw(5) << n*8 << endl;
    cout << "9 x " << n << " =\t"<< setw(5) << n*9 << endl;
    cout << "10x " << n << " =\t"<< setw(5) << n*10 << endl;
    return 0;
}