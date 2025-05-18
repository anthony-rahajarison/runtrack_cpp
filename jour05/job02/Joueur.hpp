#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
  public:
    int x;
    int y;

    Joueur(int posX = 0, int posY = 0);

    void showPos();

    void move(int moveX, int moveY);
};

#endif