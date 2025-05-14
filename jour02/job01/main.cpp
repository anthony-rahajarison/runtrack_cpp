#include <iostream>

int main () {
    int n = 0;
    while (n<=0) {
        std::cout << "Donner un nombre > 0 : ";
        std::cin >> n;
    }
    return 0;
}
