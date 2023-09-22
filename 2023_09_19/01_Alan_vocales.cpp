#include <iostream>
using namespace std;
int main() {
    char letra;
    cout<<"Ingresa una letra: ";
    cin>>letra;
    if ((letra=='a'||letra =='A')||(letra=='e'||letra=='E')||(letra=='i'||letra=='I')||(letra=='o'||letra=='O')||(letra=='u'||letra=='U')){
      cout<<"Es una vocal"<<endl;
    } else if ((letra>='a'&&letra<='z')||(letra>='A'&&letra<='Z')){
      cout<<"Es una consonante"<<endl;
    } 
    return 0;
}
    