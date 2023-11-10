#include <iostream>
#include <vector>
using namespace std;

int ContadorDeCeros (vector<int> valores) {
  int count = 0;
  
  for (int valor : valores) {
    if (valor == 0) {
      count++;
      continue;
    }
  }
  return count;
}

int ContadorDePositivos (vector<int> valores) {
  int count = 0;
  
  for (int valor : valores) {
    if (valor > 0) {
      count++;
    }
  }
  return count;
}

int ContadorDeNegativos (vector<int> valores) {
  int count = 0;
  
  for (int valor : valores) {
    if (valor < 0) {
      count++;
    }
  }
  return count;
}

int ContadorDePares (vector<int> valores) {
  int count = 0;
  
  for (int valor : valores) {
    if (valor % 2 == 0 ) {
      count++;
    }
  }
  return count;
}

int ContadorDeImpares (vector<int> valores) {
  int count = 0;
  
  for (int valor : valores) {
    if (valor % 2 != 0 ) {
      count++;
    }
  }
  return count;
}

int main () {
  int contCeros = 0, contNeg = 0, contPos = 0, contPares = 0 , contImp = 0;
  vector<int> valores{ 1, 0, 0, 3, 9, 0 , 0, 2, 10, 11, -1, -2, -3, -4};
  contCeros = ContadorDeCeros(valores);
  contNeg   = ContadorDeNegativos(valores);
  contPos   = ContadorDePositivos(valores);
  contPares = ContadorDePares(valores);
  contImp   = ContadorDeImpares(valores);
  
  cout << "El numero de ceros es            : " << contCeros << endl;
  cout << "El numero de numeros positivos es: " << contPos << endl;
  cout << "El numero de numeros negativos es: " << contNeg << endl;
  cout << "El numero de numeros pares     es: " << contPares << endl;
  cout << "El numero de numeros impares   es: " << contImp << endl;
}