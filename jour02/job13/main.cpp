#include <iostream>
using namespace std ;

int main () {

    //Barre supérieure
    cout << "   I ";
    for (int i = 1; i < 11; i++) {
        cout << i << "   ";
    }
    cout << endl;
    for (int i = 0; i < 46; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        if (i<10) { // Si i < 10 on ajoute un espace
            cout << i << "  I ";
        } else {
            cout << i << " I ";
        }
        
        for (int j = 1; j<=10; j ++) {
            if (j*i < 10) { // Si le résultat < 10 on ajoute 2 espaces
                cout << j*i << "   ";   
            } else if (j*i < 100) { // Si le résultat < 100 on ajoute un espace
                cout << j*i << "  ";
            } else {
                cout << j*i << " "; 
            }
        }
        cout << endl;
    }



}