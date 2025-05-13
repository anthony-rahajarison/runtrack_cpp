#include <iostream>

int main() {
    float sum, val;

    for (int i = 1; i < 6; ++i) {
        std::cout << "Entrer le nombre (" << i << " sur 5) : ";
        std::cin >> val;
        sum += val;
    }

    std::cout << "Moyenne : " << (sum/5);
    return 0;
}