#include <iostream>
using namespace std ;

int main() {
    int a = 1;
    int b = 7;
    int c = 20;

    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    cout << "Valeurs : A = " << *ptrA << ", B = " << *ptrB << ", C = " << *ptrC << endl;

    a = 2;
    b = 14;
    c = 40;

    cout << "Valeurs : A = " << *ptrA << ", B = " << *ptrB << ", C = " << *ptrC << endl;
}