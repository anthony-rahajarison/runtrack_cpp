#include <iostream>
using namespace std ;

int main() {
    int note;
    cout << "Donner une note (0 a 20): " << endl;
    cin >> note;

    if (note>=0 && note<10) {
        cout << "Non Valide" << endl;
    } else if (note>=10 && note<=20) {
        cout << "Valide" << endl;
    } else {
        cout << "Note non comprise entre 0 et 20" << endl;
    }
}