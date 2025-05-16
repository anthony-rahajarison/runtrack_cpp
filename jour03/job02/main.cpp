#include <iostream>
#include <string>
using namespace std ;

int main() {
    string result;
    string str = "vive la plateforme";

    cout << str << endl;
    for (int i = 0; i<str.length(); i++) {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' 
            || str[i] == 'o' || str[i] == 'u' || str[i] == 'y') {
                // On passe à la boucle suivante sans ajouter la lettre dans result
                continue;
            }
            
        result += str[i];
    }

    cout << result << endl;
}