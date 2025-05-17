#include <iostream>
using namespace std ;

struct Point{
    int x;
    int y;
} obj;

int main() {
    Point *ptr = &obj;
    ptr->x = 1;
    ptr->y = 2;

    cout << "Valeurs : x = " << obj.x << ", y = " << obj.y << endl;
}