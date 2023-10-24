// Cantidad dada en segundos, convertirlo a días, horas, minutos, segundos.
#include <iostream>
using namespace std;

int main () {
  // 60 segundos es un minuto
  // 60 minutos es una hora
  // 24 horas es un día
  int segundos = 98563;
  int diaSegundos = 60 * 60 * 24;
  int horaSegundos = 60 * 60;
  int minutoSegundos = 60; 

  int dias = segundos / diaSegundos; 
  int restoSegundosDia = segundos % diaSegundos;
  int horas = restoSegundosDia / horaSegundos;
  int restoSegundosHora = restoSegundosDia % horaSegundos;
  int minutos = restoSegundosHora / minutoSegundos;
  int restoSegundosMinutos = restoSegundosHora % minutoSegundos;

  cout  << restoSegundosMinutos << " segundos "
        << minutos << " minutos " 
        << horas <<" horas " 
        << dias << " dias" << endl;
  return 0;
}
