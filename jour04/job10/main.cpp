#include <iostream>
#include <string>
#include <vector>
using namespace std ;

struct Note {
    string name;
    string fname;
    float note;
};

Note add_note() {
    Note newEntry;
    cout << "Entrez le prenom : ";
    cin >> newEntry.fname;
    cout << "Entrez le nom : ";
    cin >> newEntry.name;
    cout << "Entrez la note : ";
    cin >> newEntry.note;

    return newEntry;
}

void showNotes(vector<Note> vect) {
    int i = 1;
    cout << "\n-----Liste des Notes-----" << endl;
    for (Note note : vect) {
        cout << i << ".  "<<note.fname << " " << note.name << " : " << note.note << endl;
        i++;
    }
}

void getNotesAverage(vector<Note> vect) {
    float average = 0;
    int i = 0;

    for (Note note : vect) {
        average += note.note;
        i++;
    }

    average /= i;
    cout << "Moyenne : " << average << endl;
}

void showMenu() {
    cout << "\n\n\n===== MENU =====" << endl;
    cout << "1. Ajouter une note" << endl;
    cout << "2. Afficher la liste des notes" << endl;
    cout << "3. Supprimer une note d'un etudiant" << endl;
    cout << "4. Afficher la moyenne des notes" << endl;
    cout << "5. Quitter" << endl;
    cout << "Choix : ";
}


int main () {
    vector<Note> vectNotes;
    int choice, idDel;
    // vectNotes.push_back(add_note());
    // vectNotes.push_back(add_note());

    // showNotes(vectNotes);
    // getNotesAverage(vectNotes);
    while (true) {
        showMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                vectNotes.push_back(add_note());
                break;
            case 2:
                showNotes(vectNotes);
                break;
            case 3:
                showNotes(vectNotes);
                cout << "Quel note supprimer ? : ";
                cin >> idDel;
                vectNotes.erase(vectNotes.begin() + (idDel-1));
                break;
            case 4:
                getNotesAverage(vectNotes);
                break;
            case 5:
                return 0;
            
            default:
                break;
            }
    }
}