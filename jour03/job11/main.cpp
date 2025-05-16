#include <iostream>
#include <string>
using namespace std ;

int sumEvenNumbers(int *tab, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i]%2 == 0) {
            sum += tab[i];
        }
    }
    return sum;
}

int main() {
    int tab[] = {45 ,11 , 87 ,98, 14, 32 ,12};
    int size = sizeof(tab)/sizeof(tab[0]);

    cout << sumEvenNumbers(tab, size) << endl;
}