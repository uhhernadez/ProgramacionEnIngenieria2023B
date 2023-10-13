#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingresa un numero: ";
    cin>>n;
    cout<<"n="<<n<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"//--------"<<endl;
    cout<<"Ingresa un numero: ";
    cin>>n;
    int i=1;
    cout<<"n="<<n<<endl;
    while (i<=n) {
        int j=1;
        while (j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}