#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
  public:
    int x;
    int y;
    std::string name;

    Joueur();
    Joueur(int posX, int posY);
    Joueur(int posX, int posY, std::string playerName);

    void showInfo();

    void move(int moveX, int moveY);
};

#endif