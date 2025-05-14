#include <iostream>
#include <cmath>
using namespace std ;

int main() {
    double n;
    cout << "Donnez un nombre positif :  ";
    cin >> n;

    if (n < 0) {
        cout << "SVP positif" << endl;
        return main();
    }

    cout << "Sa racine carre est :  " << sqrt(n);

    return 0;
}