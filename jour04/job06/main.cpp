#include <iostream>
using namespace std ;

int main() {
    int entier = 17;
    float flottant = 3.14;
    float reel = 123.345;
    char caractere[] = "La Plateforme";

    cout << "-----Variables-----" << endl;
    cout << "\nentier \nAdresse : " << &entier << "  Valeur : "<< entier << endl;
    cout << "\nflottant \nAdresse : " << &flottant << "  Valeur : "<< flottant << endl;
    cout << "\nreel \nAdresse : " << &reel << "  Valeur : "<< reel << endl;
    cout << "\ncaractere \nAdresse : " << &caractere << "  Valeur : "<< caractere << endl;
}

