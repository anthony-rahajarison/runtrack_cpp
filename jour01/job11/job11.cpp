#include <iostream>

int switchNumbers() {
    int n, m, a;
    
    std::cout << "Premier nombre : ";
    std::cin >> n;

    std::cout << "Second nombre : ";
    std::cin >> m;

    std::cout << "Vos nombres : n = " << n << " et  m = "<< m << std::endl;

    a = n;
    n = m;
    m = a;

    std::cout << "Les nombres ont ete inverse " << std::endl;
    std::cout << "Vos nombres : n = " << n << " et  m = "<< m << std::endl;
    return 0;
}

int main() {
    switchNumbers();
    return 0;
}