#include <iostream>
using namespace std;

int main() {
    int tab[] = {1, 2, 3, 5, 4};
    int max = tab[0];
    for (int val : tab) {
        if (val > max) {
            max = val;
        }
    }
    cout << "Valeur maximale : " << max << endl;

    return 0;
}