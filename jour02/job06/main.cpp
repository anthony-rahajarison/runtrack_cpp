#include <iostream>
using namespace std ;

int main() {
    int n;
    cout << "Donner un nombre" << endl;
    cin >> n;

    for (int i = 0; i<n+1; i++) {
        cout << i << endl;
        if (i%3 == 0) {
            cout << i << " est un multiple de 3"<< endl;
        }
        if (i%5 == 0) {
            cout << i << " est un multiple de 5"<< endl;
        }
    }

    return 0;
}