#include <iostream>
using namespace std ;

void addition(int a, int b) {
    cout << a << " + " << b << " = " << a+b << endl;
}

void soustraction(int a, int b) {
    cout << a << " - " << b << " = " << a-b << endl;
}

void multiplication(int a, int b) {
    cout << a << " * " << b << " = " << a*b << endl;
}

void division(int a, int b) {
    if (b == 0) {
        cout << "Operation impossible (Division par 0)" << endl;
        return;
    }
    cout << a << " / " << b << " = " << a/b << endl;
}

int main() {
    int n1, n2, res, choice;
    res = 0;
    cout << "Menu \n";
    cout << "1.Addition\n";
    cout << "2.Soustraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Division\n";
    cout << "Quel operation ? : ";
    cin >> choice;

    cout << "\nPremier nombre : ";
    cin >> n1;
    cout << "Second Nombre : ";
    cin >> n2;

    switch(choice) {
        case (1) : addition(n1, n2); break;
        case (2) : soustraction(n1, n2); break;
        case (3) : multiplication(n1, n2); break;
        case (4) : division(n1, n2); break;
        default : cout << "Choix invalide" << endl;
    }
    return 0;
}