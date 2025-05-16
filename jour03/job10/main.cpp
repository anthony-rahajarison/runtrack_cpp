#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;

string order(string str1, string str2) {
    vector<string> strings = {str1, str2};
    sort(strings.begin(), strings.end());
    for (int i; i < 2; i++) {
        cout << strings[i] << endl;
    }
}

int main() {
    string string, string2;

    cout << "Entrez une chaine de caracteres : ";
    cin >> string;

    string2 = "Bonjour";    
    order(string, string2);
}