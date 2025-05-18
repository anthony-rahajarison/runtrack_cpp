#include <iostream>
#include "Personne.hpp"
#include <iostream>

int main() {
    Personne perso1 = Personne("John", 100, 40);
    perso1.afficherVie();
    perso1.afficherDef();

    std::cout << std::endl;
    
    Personne perso2 = Personne("Mario", 120, 30);
    perso2.changerNom("Wario");

    perso2.afficherVie();
    perso2.afficherDef();

    std::cout << std::endl;

    Personne perso3 = Personne("Luigi", 110, 55);
    perso3.changerVie(80);

    perso3.afficherVie();
    perso3.afficherDef();
}