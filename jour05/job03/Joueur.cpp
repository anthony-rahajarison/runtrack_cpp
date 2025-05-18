#include "Joueur.hpp"

Joueur::Joueur() : x(0), y(0) ,name("Inconnu") {}
Joueur::Joueur(int posX, int posY) : x(posX), y(posY), name("Inconnu") {}
Joueur::Joueur(int posX, int posY, std::string playerName) : x(posX), y(posY), name(playerName) {}

void Joueur::showInfo() {
        std::cout << name << " : "<< "X = " << x << "    Y = " << y << std::endl;
    }
    
void Joueur::move(int moveX, int moveY) {
        x += moveX;
        y += moveY;
    }