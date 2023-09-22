#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
  float payment, rate = 0.01, N = 36, L = 10000;

  payment = ((rate * pow( 1 + rate , N))/(pow(1+rate, N)-1))*L;
  cout << fixed << setprecision(2);
  cout << "Cliente Uriel" << endl;
  cout << "Monto del prestamo: " << L << endl;
  cout << "Interes mensual: " << (rate * 100) << endl;
  cout << "Numero de pagos: " << N << endl;
  cout << "Pago mensual: " << payment << endl;
  float total = payment * N;
  cout << "Intereses pagados: "  <<  (total - L) << endl;
  cout << "Monto pagado por el prestamo: " << total << endl;

  return 0;
}