#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main () {
  vector<float> calificaciones{6.7, 6.3, 9.1, 8.7};

  for (float &calificacion: calificaciones) {
    calificacion = round(calificacion);
  }
  cout << "Las nuevas calificaciones son: " << endl;
  for (float calificacion: calificaciones) {
    cout << calificacion << endl;  
  }

}
