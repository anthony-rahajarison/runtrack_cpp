#include <iostream>
#include <string>
using namespace std ;

int main() {
    string str;
    cout << "Entrez une chaine de caracteres : ";
    cin >> str;

    cout << str.length() << endl;
    char tab[str.length()+1];

    for (int i = 0; i < str.length(); i++) {
        tab[i] = str[i];
    }
    tab[-1] = '\0';
    cout << tab;
}