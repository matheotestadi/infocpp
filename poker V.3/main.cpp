#include <iostream>
using namespace std;

struct CARTE {
    int Valeur[5] = {1,4,6,2,9};
    string Couleur[5] = {"trefle", "trefle", "trefle", "trefle", "trefle"};
};

int main(){
    int i;
    int k;
    int couleur;
    struct CARTE joueur;
    cout<<"la main du joueur : "<<"\n";
    for(i = 0; i <5; i++){
        //cout<<joueur.Valeur[i]<<" de ";
        cout<<joueur.Couleur[i]<<"\n";
    }
    if(joueur.Couleur[i+2] == "trefle"){
        cout<<"couleur";
    }
    else{
        cout<< "rien";
    }
}
