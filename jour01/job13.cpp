#include <iostream>

int main() {
    int N;
    std::cout << "Entrez un entier N superieur a 5 : ";
    std::cin >> N;

    if (N<5) {
        std::cout << "N est inferieur a 5";
        return 1;
    }

    int somme = 0;
    for (int i = 5; i <= N; ++i) {
        somme += i*i*i;
    }

    std::cout << "Resultat : " << somme;
    return 0;
}