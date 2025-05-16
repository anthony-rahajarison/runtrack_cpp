#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;


int main() {
    srand(time(0));
    int userGuess;
    int randomInt = rand() % 101;

    while (userGuess != randomInt) {
        userGuess = 0;
        cout << "\nDonner un nombre entre 0 et 100 : " << endl;
        cin >> userGuess;
        
        if (userGuess>randomInt) {
            cout << "Trop grand" << endl;
        }
        else if (userGuess<randomInt) {
            cout << "Trop petit" << endl;
        }
        else if (userGuess == randomInt) {
            cout << "Bravo" << endl;
        }
    }   
}