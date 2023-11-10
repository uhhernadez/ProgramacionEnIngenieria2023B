#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

string fortuna [] = {
    u8"En tu cuarto periodo, te enfrentarás a nuevos desafíos, pero también tendrás la oportunidad de crecer y desarrollarte como estudiante.",
    u8"Te esforzarás mucho en tus estudios y obtendrás buenos resultados.",
    u8"Te involucrarás en actividades extracurriculares que te ayudarán a desarrollar tus habilidades y ampliar tus horizontes.",
    u8"Harás nuevos amigos que serán importantes para ti en el futuro.",
    u8"Te enamorarás de alguien que compartirá tus intereses y valores.",
    u8"Te enfrentarás a una decisión importante que cambiará el curso de tu vida.",
    u8"Tomarás la decisión correcta y te abrirás nuevas oportunidades.",
    u8"Te graduarás de la universidad con honores.",
    u8"Obtendrás un buen trabajo que te satisfaga.",
    u8"Continuarás tu educación en un posgrado.",
    u8"Harás una contribución significativa al mundo.",
    u8"Te convertirás en un líder en tu campo de estudio.",
    u8"Tu investigación será publicada en una revista científica importante.",
    u8"Te ganarás una beca para estudiar en una universidad extranjera.",
    u8"Te unirás a una organización profesional y te convertirás en un activo valioso para la comunidad.",
    u8"Publicarás un libro o artículo que tendrá un impacto significativo en tu campo.",
    u8"Desarrollarás una nueva tecnología o innovación que cambiará el mundo.",
    u8"Obtendrás un premio o reconocimiento por tu trabajo académico.",
    u8"Te convertirás en un profesor o investigador en una universidad prestigiosa.",
    u8"Fundarás tu propia empresa o organización que tendrá un impacto positivo en el mundo."};

int main () {
  srand (time(NULL));
  int n = rand() % 20;
  cout << fortuna[n] << endl;
}