/*escriba un programa que lea diez números desde el teclado, calcule la suma y el promedio de dichos números.
Numero 1: 1
Numero 2: 1
Numero 3: 1
Numero 4: 1
Numero 5: 1
Numero 6: 1
Numero 7: 1
Numero 8: 1
Numero 9: 1
Numero 10: 1
El promedio es: 1
La suma de los valores es: 10
*/
#include <iostream> 
using namespace std;

int main () {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, promedio, suma;
    cout << "escribe 10 números" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10; 
    cout << "\n";
    cout << "Numero 1: " << n1 << endl;
    cout << "Numero 2: " << n2 << endl;
    cout << "Numero 3: " << n3 << endl;
    cout << "Numero 4: " << n4 << endl;
    cout << "Numero 5: " << n5 << endl;
    cout << "Numero 6: " << n6 << endl;
    cout << "Numero 7: " << n7 << endl;
    cout << "Numero 8: " << n8 << endl;
    cout << "Numero 9: " << n9 << endl;
    cout << "Numero 10: " << n10 << endl;
    promedio = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10)/10;
    suma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    cout << "El promedio es : " << promedio << endl;
    cout << "La suma de los valores es: " << suma;

}