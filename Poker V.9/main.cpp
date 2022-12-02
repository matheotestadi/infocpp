#include <stdio.h>
#include <iostream>
#include "fonctions.h"

using namespace std;
//#define SIZE 5

/*struct CARTE {
    int Valeur[5] = {4,9,3,9,2};
    int Couleur[5] = {2,2,2,2,2}; // 1 = trefle; 2 = coeur; 3 = carreau; 4 = pique
};*/


int main () {
    trieur(tabl, SIZE);
    cout<<"\n";
    for(int i = 0; i<5; i++){
        cout<<tablo[i]<<"   ";
    }
    printf("\n");
    quintflushRoyal(tabl, tablo, SIZE);
}

