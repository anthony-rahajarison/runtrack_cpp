#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur obj1 = Joueur();
    obj1.showInfo();

    Joueur obj2 = Joueur(10, 10);
    obj2.changeName("Mario");
    obj2.showInfo();

    Joueur obj3 = Joueur(5, -5, "Jean");
    obj3.showInfo();
}