#include <iostream>
using namespace std ;

int main() {
    int a, b;
    cout << "Donner un premier nombre : ";
    cin >> a;
    cout << "Donner un second nombre : ";
    cin >> b;

    for (int i = a; i<=b; i++) {
        cout << i << endl;
    }
}