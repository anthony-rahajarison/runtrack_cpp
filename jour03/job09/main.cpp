#include <iostream>
#include <string>
using namespace std ;

bool isIncluded(string a, string b) {
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == a[0]) {
            for (int j = 0; j < a.length(); j++) {
                if (b[i+j] != a[j]) {
                    return false;
                }
            }
            return true;
        }
    }
    return false;
}

int main() {
    string str1, str2;
    cout << "Entrez une chaine de caracteres : ";
    cin >> str1;

    cout << "Entrez une chaine de caracteres : ";
    cin >> str2;

    if (isIncluded(str1, str2)) {
        cout << "True";
    } else {
        cout << "False";
    }


}