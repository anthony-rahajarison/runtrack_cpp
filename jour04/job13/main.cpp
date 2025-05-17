#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Destination {
    string nom;
    float tempsVol;
};

int main() {
    vector<Destination*> destinations;
    int nombre;

    cout << "Combien de destinations voulez-vous entrer ? ";
    cin >> nombre;

    for (int i = 0; i < nombre; ++i) {
        Destination* dest = new Destination;
        cout << "\nDestination #" << i + 1 << " :" << endl;

        cout << "Entrez le nom de la destination : ";
        cin >> dest->nom;

        cout << "Entrez le temps de vol depuis Marseille (en heures) : ";
        cin >> dest->tempsVol;

        destinations.push_back(dest);
    }

    // Affichage des destinations
    cout << "\n--- Destinations saisies ---" << endl;
    for (int i = 0; i < destinations.size(); ++i) {
        cout << "Destination #" << i + 1 << " : " << destinations[i]->nom
             << " - Temps de vol : " << destinations[i]->tempsVol << " heures" << endl;
    }

    // Modification des données
    cout << "\n--- Modification des donnees ---" << endl;
    for (int i = 0; i < destinations.size(); ++i) {
        cout << "\nModifier la destination #" << i + 1 << endl;

        cout << "Nouveau nom de destination : ";
        cin >> destinations[i]->nom;

        cout << "Nouveau temps de vol : ";
        cin >> destinations[i]->tempsVol;

    }

    cout << "\n--- Donnees modifiees ---" << endl;
    for (int i = 0; i < destinations.size(); ++i) {
        cout << "Destination #" << i + 1 << " : " << destinations[i]->nom
             << " - Temps de vol : " << destinations[i]->tempsVol << " heures" << endl;
    }

    for (Destination* ptr : destinations) {
        delete ptr;
    }

    return 0;
}
