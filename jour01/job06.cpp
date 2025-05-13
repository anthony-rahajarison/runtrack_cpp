#include <iostream>

void multiplication(int a, int b) {
    int res = a * b;
    std::cout << a << "*" << b << " = "<< res << std::endl;
}

void afficher_table(int n) {
    short int i = 1;
    while (i < 11 )
    {
        multiplication(n, i);
        i += 1;
    }
    
}

int main() {
    afficher_table(4);
    return 0;
}