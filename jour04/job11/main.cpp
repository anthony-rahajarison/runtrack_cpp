#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit[5] = {"Pomme", "Banane", "Fraise", "Orange", "Mangue"};

    cout << "Liste des fruits disponibles :" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << fruit[i] << endl;
    }

    int nbFavoris;
    cout << "\nCombien de fruits preferez-vous ? ";
    cin >> nbFavoris;

    if (nbFavoris <= 0) {
        cout << "Nombre invalide !" << endl;
        return 1;
    }

    string* favoris = new string[nbFavoris];

    cout << "\nEntrez vos fruits preferes (exemple : Pomme, Fraise...) :" << endl;
    for (int i = 0; i < nbFavoris; ++i) {
        cout << "Fruit prefere #" << (i + 1) << " : ";
        cin >> favoris[i];
    }

    cout << "\nVos fruits preferes sont :" << endl;
    for (int i = 0; i < nbFavoris; ++i) {
        cout << "- " << favoris[i] << endl;
    }

    delete[] favoris;

    return 0;
}
