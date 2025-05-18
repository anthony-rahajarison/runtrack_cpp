#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur(0, 0);
    joueur.showPos();

    joueur.move(10, -5);
    joueur.showPos();

    joueur.move(0, 10);
    joueur.showPos();
}