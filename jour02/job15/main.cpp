#include <iostream>
using namespace std ;

int main() {
    int n1, n2, somme, limite;
    n1 = 0;
    n2 = 1;

    cout << "\nJusqu'ou generer la suite ? : ";
    cin >> limite;

    while (n2<limite) {
        somme = n1 + n2;
        cout << somme << endl;
        n1 = n2;
        n2 = somme;
    }
}