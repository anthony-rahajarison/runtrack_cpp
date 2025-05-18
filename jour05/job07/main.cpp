#include <iostream>
#include "Contact.hpp"

int main() {
    Contact obj1 = Contact("John", 567890);
    obj1.afficherContact();

    Contact obj2 = Contact("Mario", 333333);
    obj2.afficherContact();

    Contact obj3 = Contact("Luigi", 555555);
    obj3.afficherContact();

    Contact obj4 = obj1;
    obj4.changerNumero(44444);
    obj4.afficherContact();

    Contact obj5 = obj2;
    obj5.changerNumero(66666);
    obj5.afficherContact();

    Contact obj6 = obj3;
    obj6.changerNumero(77777);
    obj6.afficherContact();
}