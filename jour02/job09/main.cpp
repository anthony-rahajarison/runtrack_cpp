#include <iostream>
using namespace std ;

int main() {
    int a, b, n;
    a = 10; b = 14;
    cout << "Donner un nombre : ";
    cin >> n;

    if (n >= a && n <= b) {
        cout << "Gagne" << endl;
    }
    else {
        cout << "Perdu" << endl;
    }
}