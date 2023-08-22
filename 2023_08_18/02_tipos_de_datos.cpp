// Mostrar diferentes tipos de datos
#include <iostream>
using namespace std;

int main () {
  char caracter = 'A'; // Representa un símbolo
  bool bandera = true; // Verdadero o falso, 1 o 0, {true, false}
  int num = 6384; // Es un entero
  float real = 894.34f; // Un número real de precisión simple
  double real2d = 8239.34; // Un número real de precisión doble
  string cadena = "Cadena de caracteres "; // cadena de caracteres
  cout  << caracter << " " << bandera << " " << num << " " 
        << real << " " << real2d << " " << cadena << endl;

  return 0;
}