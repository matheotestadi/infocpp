//QUINTE FLUSH
#include <iostream>
using namespace std;

int couleur(int tab[], int taille);
int valeur(int tab[], int taille);
void quintflush();

int valeurObtenue = 0; //pour vérifier la quinte flush
int couleurObtenue = 0; //pour vérifier la quinte flush

struct CARTE {
    int Valeur[5] = {4,4,4,4,4};
    int Couleur[5] = {2,2,2,2,2}; // 1 = trefle; 2 = coeur; 3 = carreau; 4 = pique
};

int main() {
    quintflush();
}

int couleur(int tab[], int taille){
    int i;
    int k;
    int fig;
    cout << "la main du joueur : ";
    for (i = 0; i <5; i++) {
        cout << tab[i];
        if(tab[i] == tab[i+1] && tab[i] == tab[i+2] && tab[i] == tab[i+3] && tab[i] == tab[i+4]){
            fig = tab[i];
            k = 1;
        }
    }
    if(k == 1){
        cout<<" couleur";
        couleurObtenue = 1;
    }
    else{
        cout<<" rien"<<"\n";
        couleurObtenue = 0;
    }
}

int valeur(int tab[], int taille){
    int i;
    int k;
    int fig;
    cout << "la main du joueur : ";
    for (i = 0; i <5; i++) {
        cout << tab[i];
        if(tab[i] == tab[i+1] && tab[i] == tab[i+2] && tab[i] == tab[i+3] && tab[i] == tab[i+4]){
            fig = tab[i];
            k = 1;
        }
    }
    if(k == 1){
        cout<<" valeur"<<"\n";
        valeurObtenue = 1;
    }
    else{
        cout<<" rien"<<"\n";
        valeurObtenue = 0;
    }
}

void quintflush(){
    struct CARTE joueur;
    valeur(joueur.Valeur, 5);
    couleur(joueur.Couleur, 5);
    if(valeurObtenue == 1 && couleurObtenue == 1){
        cout<<"\n"<<"une quinte flush";
    }
    else if(valeurObtenue == 0 && couleurObtenue == 1){
        cout<<"\n"<<"une couleur";
    }
    else{
        cout<<"\n"<<"riennn";
    }
}