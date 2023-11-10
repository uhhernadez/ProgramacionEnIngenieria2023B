#include <iostream>
#include <vector>
using namespace std;

void MostrarInformacionGato (string nombre, float peso, int edad) {
  cout << "El nombres del gato es: " << nombre << endl;
  cout << "Peso: " << peso << endl;
  cout << "Edad: " << edad << endl;
}

int main () {
  string nombre_gato1 = "Bola", nombre_gato2 = "Figaro", nombre_gato3 = "Canela"; //nombre_gato4
  float peso_gato1 = 7.1, peso_gato2 = 4.5 , peso_gato3 = 3.7; // peso_gato4
  int edad_gato1 = 10, edad_gato2 = 9, edad_gato3 = 14; // edad_gato4

  vector<string>  nombres{"Bola", "Figaro", "Canela"};
  vector<float> pesos{7.1, 4.5, 3.7};
  vector<int> edades{10, 9, 14};

  MostrarInformacionGato(nombre_gato1, peso_gato1, edad_gato1);
  MostrarInformacionGato(nombre_gato2, peso_gato2, edad_gato2);
  MostrarInformacionGato(nombre_gato3, peso_gato3, edad_gato3);

  for (int k = 0; k < nombres.size(); k++) {
    MostrarInformacionGato(nombres[k], pesos[k], edades[k]);
  }
}