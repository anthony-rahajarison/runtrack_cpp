#include <iostream>
using namespace std;

int main() {
    int x = 12;
    cout << "x = " << x << endl;

    int &ref = x;
    ref = 42;
    cout << "x = " << x << endl;
}