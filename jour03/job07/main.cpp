#include <iostream>
using namespace std ;

int main() {
    int T[10];
    int max, idMax;
    max = 0;
    for (int i = 0; i<10; i++) {
        cout << "Entrez un nombre entier (" << i+1 << "/10) : ";
        cin >> T[i];
        if (T[i] >= max) {
            max = T[i];
            idMax = i;
        }
    }
    cout << "Le plus grand nombre est " << max << endl;
    cout << "Son indice dans T est " << idMax << endl;
}