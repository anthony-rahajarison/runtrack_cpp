#include <iostream>

int main() {
    int n;
    std::cin >> n;
    switch (n) {
        case 0 : std::cout << "Nul\n";
        case 1:
        case 2 : std::cout << "Petit\n";
                        break;
        case 3 :
        case 4 :
        case 5 : std::cout << "Moyen\n";
        default : std::cout << "Grand\n";
    }
    return 0;
}

// Pour n=0 on affiche : Nul, Petit
// Pour n=1 on affiche : Petit
// Pour n=4 on affihe : Moyen, Grand
// Pour n=10 on affiche : Grand
// Pour n=-5 on affiche : Grand