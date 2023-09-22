#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int calificacion = 0;
    cout<<"hola usuario. ingresa tu calificacion: "<<endl;
    cin>>calificacion;
    
    if (calificacion >= 10){
        cout<<"a"<<endl;
    }
    else if (calificacion == 9){
        cout<<"b"<<endl;
    }
    else if (calificacion == 8){
        cout<<"c"<<endl;
    }
    else if (calificacion == 7){
        cout<<"d"<<endl;
    }
    else if (calificacion <= 6){
        cout<<"f"<<endl;
    }
    else {
        cout<<"calificacion reprobatoria"<<endl;
    }
    return 0;
}
