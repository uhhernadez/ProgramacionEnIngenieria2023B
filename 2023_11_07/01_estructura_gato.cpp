#include <iostream>
#include <vector>
using namespace std;

struct Gato {
  string nombre;
  float peso;
  int edad;
};

void MuestraGato (Gato &gato) {
  cout  << "Nombre : " << gato.nombre 
        << " peso: " << gato.peso 
        << " edad: " << gato.edad
        << endl;
}

int main () {
  //vector<string>  nombres{"Bola", "Figaro", "Canela"};
  //vector<float> pesos{7.1, 4.5, 3.7};
  //vector<int> edades{10, 9, 14};
  Gato gato;
  gato.nombre = "Bola";
  gato.peso = 7.1;
  gato.edad = 10;
  MuestraGato(gato);
  Gato figaro{"Figaro", 4.5, 9};
  MuestraGato(figaro);
  vector<Gato> gaterio;
  gaterio.push_back({"Canela",3.7,14});
  MuestraGato(gaterio[0]);
}