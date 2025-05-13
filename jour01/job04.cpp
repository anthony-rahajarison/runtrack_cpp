#include <iostream>

void addition(int a, int b) {
    int res = a + b;
    std::cout << a << "+" << b << " = "<< res << std::endl;
}

int main() {
    addition(10, 15);
    return 0;
}