#include <iostream>

int TTC() {
    int nKilo;
    float prixTTC, prixHT, TVA;
    
    std::cout << "Prix HT : ";
    std::cin >> prixHT;

    std::cout << "Nombres de kilos : ";
    std::cin >> nKilo;

    std::cout << "TVA (%): ";
    std::cin >> TVA;

    prixTTC = prixHT * nKilo * (TVA/100 + 1);
    std::cout << "Prix TTC : " << prixTTC;

    return 0;
}

int main() {
    TTC();
    return 0;
}