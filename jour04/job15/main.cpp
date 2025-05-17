#include <iostream>
using namespace std;

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    cout << "Valeurs du tableau :" << endl;
    for (int &val : tab) {
        cout << val << endl;
    }
}