#include <iostream>
using namespace std;

int main(){
    float n;
    cout << "Ingrese la calificacion" << endl;
    cin >> n;

    if(n >= 9){
        cout << "La nota es A" << endl;
    } else if (n >= 8){
        cout << "La nota es B" << endl;
    } else if (n >= 7){
        cout << "La nota es C" << endl;
    } else if (n >= 6){
        cout << "La nota es D" << endl;
    } else if (n >= 4){
        cout << "La nota es E" << endl;
    } else if (n < 4){
        cout << "La nota es F" << endl;
    }
    return 0;
}