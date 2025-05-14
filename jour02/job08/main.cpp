#include <iostream>
using namespace std ;

int main() {
    int a, b, i;
    cout << "Donner un premier nombre : ";
    cin >> a;
    cout << "Donner un second nombre : ";
    cin >> b;

    i = a;
    while (i<=b) {
        cout << i << endl;
        i++;
    }
}