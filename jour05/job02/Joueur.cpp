#include "Joueur.hpp"

Joueur::Joueur(int posX, int posY) : x(posX), y(posY) {}

void Joueur::showPos() {
        std::cout << "X = " << x << "    Y = " << y << std::endl;
    }
    
void Joueur::move(int moveX, int moveY) {
        x += moveX;
        y += moveY;
    }