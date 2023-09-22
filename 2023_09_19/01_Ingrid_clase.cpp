//Dado un caracter diga si es una vocal o consonante
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char L;

    cout << "Ingresa un caracter" << endl;
    cin >> L;
    if(isalpha(L)) {
      if (L == 'a' || L == 'e' || L == 'i' || L == 'o' || L == 'u') {
        cout << "Es una vocal"<< endl;   
      } else if (L == 'A' || L == 'E' || L == 'I' || L == 'O' || L == 'U') {
        cout << "Es una vocal"<< endl; 
      } else {
        cout << "Es una consonante"<< endl; 
      }
    } else {
      cout << "El caracter no es una letra" << endl;
    }

return 0;
}
