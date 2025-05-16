#include <iostream>
#include <string>
using namespace std ;

bool isPalindrome(string str) {
    int i = 0;
    // Si le nombre de lettres n'est pas impair, on retourne false
    if (str.length()%2 == 0) {
        return false;
    }

    // On incrémente dans str en partant du début et de la fin, si 
    // on trouve une dfférence on retourne false
    while (i < str.length()/2) {
        if (str[i] != str[str.length()-1-i]) {
            return false;
        };
        i++;
    }

    // Sinon on retourne true
    return true;
}

int main() {    
    string tab[] = {"radar", "hello", "stats", "world"};
    
    for (string str : tab) {
        if (isPalindrome(str) == true) {
            cout << str << endl;
        }
    }
    return 0;
}