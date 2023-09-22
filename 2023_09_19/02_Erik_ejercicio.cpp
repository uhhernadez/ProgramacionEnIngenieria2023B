#include <iostream>
using namespace std;
int main() {
    char L;
    cout << "Escribe una letra " << endl;
    cin >> L;
    if (L>='a' && L<='z'){
        cout << "La letra " << L << " es minuscula" << endl;
    }else if (L>='A' && L<='Z'){
        cout << "La letra " << L << " es mayuscula" << endl;
    }else{
        cout << "No es una letra" << endl;
    }
    return 0;
}