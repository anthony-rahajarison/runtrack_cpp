#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <iostream>

class Etudiant {
    private:
        std::string nom;
        std::string prenom;
        int age;
        int matricule;
    public:
        Etudiant(std::string nom, std::string prenom, int age, int matricule);
        void afficherEtudiant();
};

Etudiant::Etudiant(std::string nom, std::string prenom, int age, int matricule) {
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
    this->matricule = matricule;
};

void Etudiant::afficherEtudiant() {
    std::cout << this->prenom << " " << this->nom << " | " << this->age << " ans | Matricule : " << this->matricule << std::endl;
};

#endif