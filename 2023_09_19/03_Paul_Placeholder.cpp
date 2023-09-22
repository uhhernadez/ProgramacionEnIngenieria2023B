// Escriba un programa. Escriba la nota A, B, C, D, E y F, dependiendo de
// los siguientes rangos.

//                      Nota
// 9 >= Califiación     A
// 8 >= Califiación     B
// 7 >= Califiación     C
// 6 >= Califiación     D
// 5 >= Califiación     E
// 4 >= Califiación     F

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // 1. Denominación del tipo de carácter:
    char c;

    cout << "Inserte una letra o un numero:" << endl;
    cin >> c;

    if (c >= '0') {
        if (c <= '9') {
            cout << "El caracter " << c << " es un numero." << endl;
        }
    }

    bool p = c >= 'A' && c <= 'Z';
    bool q = c >= 'a' && c <= 'z';
    bool a = c >= 'A' && c <= 'F';

    if (p) {
        cout << "\nEl caracter " << c << " es una letra mayuscula." << endl;
    }

    if (q) {
        cout << "\nEl caracter " << c << " es una letra minuscula." << endl;
    }||

    // 2. Asignación de valores:

    int Caracter_int;
    float c = 8.5;

    if (a) {
        if (c == 'A') {Caracter_int = 1;}
        if (c == 'B') {Caracter_int = 2;}
        if (c == 'C') {Caracter_int = 3;}
        if (c == 'D') {Caracter_int = 4;}
        if (c == 'E') {Caracter_int = 5;}
        if (c == 'F') {Caracter_int = 6;}
    }

    switch (Caracter_int) {
        case 1: cout << "Su nota es A" << endl; break;
        case 2: cout << "Su nota es B" << endl; break;
        case 3: cout << "Su nota es C" << endl; break;
        case 4: cout << "Su nota es D" << endl; break;
        case 5: cout << "Su nota es E" << endl; break;
        case 6: cout << "Su nota es F" << endl; break;

        default: cout << "El caracter insertado no corresponde." << endl; break; 
    }

    return 0;

}
    