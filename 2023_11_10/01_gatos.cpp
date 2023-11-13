#include <iostream>
#include <vector>
#define EDAD_MAXIMA 15
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

void MuestraGato() {
  cout <<" /\\_/\\" << endl;
  cout <<"( o.o )" << endl;
  cout <<" > ^ <"  << endl;
}


void Maullar (Gato &g) {
  g.edad += 1;
  if (g.edad < EDAD_MAXIMA) {
    cout << g.nombre << ": miau-miau-miau-miau-miau ..." << endl;
  } else {
    cout << g.nombre << ": miaubuuuUuuU (espanta)" << endl;
  }
}

void Rascar (Gato &g) {
  g.edad += 1;
  cout << g.nombre << ":(sonido de rascar)" << endl;
}

void Comer (Gato &g) {
  g.edad += 1;
  cout << g.nombre << ": ñam-ñam-ñam " << endl;
}

void TirarCosas (Gato &g) {
  g.edad += 1;
  cout << g.nombre << ": pluff (se cayó un objeto)" << endl;
}

void VaALaCajaDeArena (Gato &g) {
  g.edad += 1;
  cout <<"    )    " << endl;
  cout <<"   (     " << endl;
  cout <<"     ,   " << endl;
  cout <<"  ___)\\ " << endl;
  cout <<" (_____) " << endl;
  cout <<"(_______)" << endl;
}


int main () {
  Gato figaro{"Figaro", 4.5, 9};
  MuestraGato();
  Maullar (figaro);
  figaro.edad = -100;
  Rascar (figaro);
  Comer (figaro);
  VaALaCajaDeArena(figaro);
  VaALaCajaDeArena(figaro);
  Rascar (figaro);
  Maullar (figaro);
}