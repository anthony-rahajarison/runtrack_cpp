#include <iostream>
#include <string>
using namespace std ;

int main() {
    int T[10];
    int count = 0;
    for (int i = 0; i<10; i++) {
        cout << "Entrez un nombre entier (" << i+1 << "/10) : ";
        cin >> T[i];
        if (T[i] >= 5) {
            count++;
        }
    }
    cout << "Il y a " << count << " entiers superieur ou egaux a 5";
}