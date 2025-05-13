#include <iostream>

void multiplication(int a, int b) {
    int res = a * b;
    std::cout << a << "*" << b << " = "<< res << std::endl;
}

int main() {
    multiplication(2, 3);
    return 0;
}