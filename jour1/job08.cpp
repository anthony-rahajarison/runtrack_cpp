#include <iostream>
#include <string>


int isBissextile() {
    int input;
    std::cout << "Ecrire une annee : ";
    std::cin >> input;
    if (input%4 != 0) {
        std::cout << "Votre annee n'est pas bissextile";
    }
    else if (input%4 == 0) {
        std::cout << "Votre annee est bissextile";
    }
    
    return 0;
}

int main() {
    isBissextile();
    return 0;
}