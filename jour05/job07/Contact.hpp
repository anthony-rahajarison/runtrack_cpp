#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        std::string nom;
        int numero;
    public:
        Contact(std::string nom, int numero);
        Contact(const Contact& copie);
        void afficherContact();
        void changerNumero(int numero);
};

Contact::Contact(std::string nom, int numero) {
    this->nom = nom;
    this->numero = numero;
}

Contact::Contact(const Contact& copie){
    this->nom = copie.nom;
    this->numero = copie.numero;
}

void Contact::afficherContact() {
    std::cout << this->nom << " | " << this->numero << std::endl;
}

void Contact::changerNumero(int numero) {
    this->numero = numero;
}

#endif