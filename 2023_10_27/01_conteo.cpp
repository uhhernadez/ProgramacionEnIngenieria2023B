#include <iostream>
#include <vector>
using namespace std;

int main () {
  int count = 0, counter = 0, contador = 0, acumulador = 0;
  int contCeros = 0, contNeg = 0, contPos = 0, contPares = 0 , contImp = 0;
  vector<int> valores{ 1, 0, 0, 3, 9, 0 , 0, 2, 10, 11, -1, -2, -3, -4};
  // Iterar sobre los valores, 
  for (int valor : valores) {
    if (valor == 0) {
      contCeros++;
      continue;
    }
    if (valor < 0) {
      contNeg++;
    } 
    if (valor > 0 ) {
      contPos++;
    }
    if ( valor % 2 == 0) {
      contPares++;
    } else {
      contImp++;
    }
  }
  cout << "El numero de ceros es            : " << contCeros << endl;
  cout << "El numero de numeros positivos es: " << contPos << endl;
  cout << "El numero de numeros negativos es: " << contNeg << endl;
  cout << "El numero de numeros pares     es: " << contPares << endl;
  cout << "El numero de numeros impares   es: " << contImp << endl;
}