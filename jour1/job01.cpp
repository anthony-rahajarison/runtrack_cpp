#include <iostream>

int main() {
    char c = '\x01';
    short int p = 10;

    short int x = p+3;
    std::cout << "p + 3 = " << x << std::endl; // x est un short int

    short int y = c + 1;
    std::cout << "c + 1 = " << y << std::endl; // y est un short int

    short int z = p + c;
    std::cout << "p + c = " << z << std::endl; // z est un short int

    short int w = 3 * p + 5 * c;
    std::cout << "3 * p + 5 * c = " << w << std::endl; // w est un short int
}