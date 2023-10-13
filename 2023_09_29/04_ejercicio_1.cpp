#include <iostream>
using namespace std;

int main() {
    int n = 3;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }

    cout << "// ------" << endl;

    int m = 4;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}