#include <iostream>


int plusGrandNombre() {
    int input1, input2, input3;
    std::cout << "Premier nombre : ";
    std::cin >> input1;

    std::cout << "Second nombre : ";
    std::cin >> input2;

    std::cout << "Troisieme nombre : ";
    std::cin >> input3;

    int rep = input1;
    if (rep < input2) {
        rep = input2;
    }
    if (rep < input3) {
        rep = input3;
    }

    std::cout << "Plus grand nombre : " << rep;
    return 0;
}

int main() {
    plusGrandNombre();
    return 0;
}