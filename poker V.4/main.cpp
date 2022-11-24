//COULEUR
#include <iostream>
using namespace std;

struct CARTE {
    int Valeur[5] = {1,4,6,2,9};
    int Couleur[4] = {2,2,2,2}; // 1 = trefle; 2 = coeur; 3 = carreau; 4 = pique
};
int main() {
    struct CARTE joueur;
    int i;
    int k;
    int fig;
    cout << "la main du joueur : " << "\n";
    for (i = 0; i <4; i++) {
        cout << joueur.Couleur[i] << "\n";
        if(joueur.Couleur[i] == joueur.Couleur[i+1] && joueur.Couleur[i] == joueur.Couleur[i+2] && joueur.Couleur[i] == joueur.Couleur[i+3]){
            fig = joueur.Couleur[i];
            k = 1;
        }
    }
    if(k == 1){
        cout<<"couleur";
    }
    else{
        cout<<"rien";
    }
}