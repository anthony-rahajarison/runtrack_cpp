#include <iostream>
using namespace std ;

int main() {
    static int tab[] = {10, 5, 16, 4, 25};

    for (int i = 0; i < 5; i++) {
        cout << "Element [" << i << "] = " << tab[i]
             << " | Adresse = " << &tab[i] << endl;
    }
}