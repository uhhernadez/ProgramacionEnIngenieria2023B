#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main () {
  srand(time(NULL));
  vector <string> fortuna {
    "Tendrás suerte en el futuro", 
    "Tendrás un examen sorpresa",
    "Algo malo sucederá esta semana",
    "Sacarás 6.9 en el examen",
    "Ganarás la lotería",
    "Te romperás el pie",
    "Atravesarás un obstáculo y lo superarás si lo intentas",
    "Cosas buenas pasarán esta semana",
    "Si buscas resultados distintos no hagas siempre lo mismo",
    "Encontrarás el amor",
    "Se te presentará una gran oportunidad",
    "Recibirás una buena noticia",
    "Encontrarás al amor de tu vida el viernes",
    "Si sigues así, viviras en un puente no tan inseguro",
    "No te escaparas de latinoamérica",
    "No todo es posible, pero lo que no se intenta es imposible",
    "Alguien de tu círculo cercano te traicionará",
    "Te ganarás un viaje a las vegas todo pagado",
    "Ya rindete, por favor",
    "Volverá tu ex y te dira algo inesperado",
    "Te va a dar diarrea en el momento más importante de tu vida",
    "Volverá alguien de tu pasado"
    };  
  int numAleatorio = rand() % fortuna.size();
  cout << "Después de invocar a los dioses antiguos, decubrí que tu fortuna es: " << endl;
  cout << fortuna[numAleatorio] << endl;
}