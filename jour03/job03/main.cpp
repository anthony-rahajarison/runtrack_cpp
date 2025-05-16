#include <iostream>
#include <string>
using namespace std ;

int isSameString(string str1, string str2) {
    if (str1 == str2) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    string a = "Bonjour";
    string b = "Bonjour";

    if (isSameString(a, b) == 0) {
        cout << "Les strings sont les memes" << endl;
    }
    else {
        cout << "Les strings sont differentes" << endl;
    }
}