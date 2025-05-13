#include <iostream>

int estPair() {
    int input;
    char *rep;
    std::cout << "Ecrire un nombre : ";
    std::cin >> input;

    if (input%2 == 0) {
        rep = "Pair";
    }
    else if (input%2 == 1) {
        rep = "Impair";
    }

    std::cout << "Votre nombre est " << rep;
    return 0;
}

int main() {
    estPair();
    return 0;
}