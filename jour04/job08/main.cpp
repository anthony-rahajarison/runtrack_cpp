#include <iostream>
using namespace std ;

int main() {
    int annee = 2019;
    char nom[] = "La Plateforme";
    float flottant = 3.14;
    char categorie[] = "Etudiant";

    void *tab[4] = {&annee, &nom, &flottant, &categorie};

    cout << "Valeur: " << *(int*)tab[0] << " | Adresse: " << tab[0] << endl;
    cout << "Valeur: " << (char*)tab[1] << " | Adresse: " << tab[1] << endl;
    cout << "Valeur: " << *(float*)tab[2] << " | Adresse: " << tab[2] << endl;
    cout << "Valeur: " << (char*)tab[3] << " | Adresse: " << tab[3] << endl;

}