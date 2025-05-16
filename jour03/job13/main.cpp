#include <iostream>
using namespace std ;

int main() {
    int tab1[] = {1, 2, 6, 14, 63};
    int tab2[] = {3, 5, 20, 37};
    
    // On calcule les tailles des tableaux
    int sizeTab1 = (sizeof(tab1))/sizeof(int[1]);
    int sizeTab2 = (sizeof(tab2))/sizeof(int[1]);
    int sizeTab3 = (sizeof(tab1)+sizeof(tab2))/sizeof(int[1]);

    // On initialise tab3 avec la taille calculé au dessus
    int tab3[sizeTab3];

    // On remplit tab3 jusqu'à ce que tab1 ou tab2 soit terminé
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < sizeTab1 && j < sizeTab2) {
        if (tab1[i] <= tab2[j]) {
            tab3[k] = tab1[i];
            i++;
            k++;
        }
        else if (tab1[i] > tab2[j]) {
            tab3[k] = tab2[j];
            j++;
            k++;
        }
    }

    // On ajoute le reste de tab1 ou de tab2
    while (i < sizeTab1) {
        tab3[k] = tab1[i];
        i++;
        k++;
    }
    while (j < sizeTab2) {
        tab3[k] = tab2[j];
        j++;
        k++;
    }

    // On affche le contenu de tab3
    for (int i : tab3) {
        cout << i << endl;
    }

    return 0;
}