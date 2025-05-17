#include <iostream>
#include <string>
using namespace std ;

int main() {
    int a = 5;
    int b = 8;

    int *ptrA = &a;
    int *ptrB = &b;
    
    // Avant échange
    cout << "a = " << a << " et b = " << b << endl; 

    int c = *ptrA;
    a = *ptrB;
    b = c;

    // Après échange
    cout << "a = " << a << " et b = " << b << endl; 
}