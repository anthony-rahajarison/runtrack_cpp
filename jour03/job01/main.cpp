#include <iostream>
#include <string>
using namespace std ;

int main() {
    string str = "vive la plateforme";
    cout << str << endl;
    for (int i = 0; i<str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
}