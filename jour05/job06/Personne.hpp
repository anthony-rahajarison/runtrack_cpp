#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>

class Personne {
    private:
        std::string nom;
        int pv;
        float def;
    public:
        Personne(std::string nom, int pv, float def);
        void afficherVie();
        void afficherDef();

        void changerVie(int pv);
        void changerDef(float def);
        void changerNom(std::string nouveauNom);
};

Personne::Personne(std::string nom, int pv, float def) {
    this->nom = nom;
    this->pv = pv;
    this->def = def;
}

void Personne::afficherVie() {
    std::cout << nom << " a " << pv << " points de vie" << std::endl;
}

void Personne::afficherDef() {
    std::cout << nom << " a " << def << " points de defense" << std::endl;
}

void Personne::changerVie(int pv) {
    this->pv = pv;
}

void Personne::changerDef(float def) {
    this->def = def;
}

void Personne::changerNom(std::string nouveauNom) {
    this->nom = nouveauNom;
}

#endif