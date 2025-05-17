#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Staff {
    string nom;
    string prenom;
};

struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    Staff staff1 = {"Cordial", "Alicia"};
    Staff staff2 = {"Malardier", "Pierre"};

    cout << "Prenoms du staff :" << endl;
    cout << "- " << staff1.prenom << endl;
    cout << "- " << staff2.prenom << endl;

    int nbEtudiants;
    cout << "\nCombien d'etudiants voulez-vous saisir ? ";
    cin >> nbEtudiants;

    vector<Etudiant> listeEtudiants;

    for (int i = 0; i < nbEtudiants; ++i) {
        Etudiant etu;
        cout << "\nEtudiant #" << i + 1 << " :" << endl;
        cout << "Nom : ";
        cin >> etu.nom;
        cout << "Prenom : ";
        cin >> etu.prenom;
        listeEtudiants.push_back(etu);
    }

    cout << "\nPrenoms des etudiants :" << endl;
    for (Etudiant etu : listeEtudiants) {
        cout << "- " << etu.prenom << endl;
    }

    return 0;
}
