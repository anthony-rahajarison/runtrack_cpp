#include <iostream>
using namespace std ;

main() {
    int i, n, som;
    som = 0;
    i = 0;
    while (i<4) {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som;
}