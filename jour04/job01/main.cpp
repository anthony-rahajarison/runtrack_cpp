#include <iostream>
using namespace std ;

int main() {
    int number = 2019;
    int *ptr = &number;
    cout << "La valeur de \"number\" est : " << *ptr << endl;
}