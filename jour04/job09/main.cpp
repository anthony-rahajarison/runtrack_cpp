#include <iostream>
using namespace std ;

int main() {
    int sizeTab;
    cout << "Combien d'entiers ? : ";
    cin >> sizeTab;

    int* tab = new int[sizeTab];

    for (int i = 0; i < sizeTab; i++) {
        cout << "Entrer un entier ("<< i+1 << "/" << sizeTab << ") : ";
        cin >> tab[i];
    }

    for (int i = 0; i < sizeTab; i++) {
        cout << "Entier [" << i << "] = " << tab[i] << endl;
    }

    delete[] tab;
}