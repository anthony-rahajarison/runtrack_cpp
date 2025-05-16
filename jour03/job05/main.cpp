#include <iostream>
#include <string>
using namespace std ;

int main() {
    string input, h, m;
    int heures, minutes;
    cout << "Tapez une heure (XXhXX) : ";
    cin >> input;

    if (input.length() != 5) {
        return main();
    }

    if (input[2] != 'h') {
        return main();
    }

    h = input[0];
    h += input[1];
    m = input[3];
    m += input[4];

    heures = stoi(h);
    minutes = stoi(m);

    if (heures < 0 || heures > 24 || minutes < 0 || minutes > 59) {
        return main();
    }

    cout << input << " est une heure valide" << endl;
}