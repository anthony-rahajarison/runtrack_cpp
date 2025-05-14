#include <iostream>
using namespace std ;

int main () {
    double n, res;
    res = 0;
    cout << "Donnez un nombre entier :  ";
    cin >> n;
    for (double i = n; i>0; i--) {
        res += 1/i;
    }

    cout << res;
}