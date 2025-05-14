#include <iostream>
using namespace std ;

int recupererChiffres(int n, int &unite, int &dix, int &cent) {
    unite = n%10; 
    dix = (n%100 - n%10)/10;
    cent = (n - (n%100 - n%10) - n%10)/100;
    return unite, dix, cent;
}

int main() {
    int n, unite, dix, cent;
    cout << "\nDonnez un nombre a 3 chiffres : ";
    cin >> n;

    // On recupere le chiffre des centaines, des dixaines et des unités
    recupererChiffres(n, unite, dix, cent);
    cout << cent << " " << dix << " " << unite << endl;

    // Un nombre est dit "d'Armstrong" si la somme des cubes de ses chiffres est égal à lui même
    if (cent*cent*cent + dix*dix*dix + unite*unite*unite == n) {
        cout << n << " est un nombre d'Armstrong\n" << endl;
    } else {
        cout << n << " n'est pas un nombre d'Armstrong" << endl;
        cout << "Resultat de la somme des carre des chiffres : " << cent*cent*cent+dix*dix*dix+unite*unite*unite << "\n" << endl;
    }
}
    
    