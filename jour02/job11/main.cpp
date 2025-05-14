#include <iostream>
using namespace std ;

int main () {
    double n, res;
    res = 1;
    cout << "Donnez un nombre entier :  ";
    cin >> n;
    for (int i = n; i>0; i--) {
        res *= i;
    }

    cout << res;
}