#include <iostream>
#include <string>
using namespace std ;

string invert(string *str, int strSize) {
    string res = "";
    for (int i = strSize-1; i >= 0; i--) {
        res += (*str)[i];
    }
    return res;
}

int main() {
    string str = "Plateforme";
    string *ptrStr = &str;

    int strSize = str.length();

    cout << "Chaine originale : " << str << endl;
    cout << "Chaine inversee : " << invert(ptrStr, strSize) << endl;
}