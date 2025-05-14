#include <iostream>
using namespace std ;

main() {
    int i, n, som;
    som = 0;
    for (i=0; i<4; i++) {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
    }
    cout << "Somme : " << som;
}