#include <iostream>
using namespace std ;

main() {
    int i, n, som;
    som = 0;
    i = 0;
    do {
        cout << "Donner un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i<4);
    cout << "Somme : " << som;
}