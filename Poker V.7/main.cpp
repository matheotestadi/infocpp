#include <stdio.h>
#include <iostream>

using namespace std;
#define SIZE 5

void trieur(int tab[], int taille);
void Paire(int tab[], int taille);
void Paire2(int tab[], int taille);
void Hauteur(int tab[], int taille);
void brelan(int tab[], int taille);
void full(int tab[], int taille );
void doublepaire(int tab[], int taille );
void Quinte(int tab[], int taille);
void quintflush(int tab[], int tab2[], int taille);
void Carre(int tab[], int taille);
void couleur(int tab[], int taille);
void quintflushRoyal(int tab[], int tab2[], int taille);

int valeurObtenue = 0; //pour vÃ©rifier la quinte flush
int couleurObtenue = 0; //pour vÃ©rifier la quinte flush

struct CARTE {
    int Valeur[5] = {4,9,3,9,2};
    int Couleur[5] = {2,2,2,2,2}; // 1 = trefle; 2 = coeur; 3 = carreau; 4 = pique
};

int tabl[5] = {10,11,12,13,14};//valeur
int tablo[5] = {1,1,2,1,1}; //1 = trefle; 2 = coeur; 3 = carreau; 4 = pique

int Full;
int paire;
int Brelan;

//Paire
int i1, combi;

//Paire2
int i2, combi2;
int paire2, Pairee2;

//quinte
int quinte1;
int quinte2;
int quinteValide;

//brelan
int x, combis;
int paires;

//carre
int i3;

//couleur
int i;
int k;
int fig;

//quinte flush royal
int royal;

int main () {
    struct CARTE joueur;
    trieur(tabl, SIZE);
    cout<<"\n";
    for(int i = 0; i<5; i++){
        cout<<tablo[i]<<"   ";
    }
    printf("\n");
    full(tabl, SIZE);
    doublepaire(tabl, SIZE);
    Carre(tabl, SIZE);
    couleur(tablo, SIZE);
    quintflush(tabl, tablo, SIZE);
    quintflushRoyal(tabl, tablo, SIZE);
}

void trieur(int tab[], int taille){
    int i, j, tmp;
    for (i=0 ; i < SIZE-1; i++){
        for (j=0 ; j < SIZE-i-1; j++){
            if (tab[j] < tab[j+1]){
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
    for (i=0; i < SIZE; ++i){
        printf("%4d", tab[i]);
    }
}

void Paire(int tab[], int taille){
    if(Brelan == 1){
        for (i1=0 ; i1 < SIZE; i1++){
            if(tab[i1] == tab[i1+1] && tab[i1] != tab[x]){
                paire = tab[i1];
                combi = 1;
            }
        }
        if(combi == 1){
            printf("une paire de:%4d  ", tab[i1] = paire);
            paire = 1;
            //Paire2(tab, SIZE);
        }
        else{
            //printf("pas de paire\n");
            //Hauteur(tab, SIZE);
        }
    }
    else{
        for (i1=0 ; i1 < SIZE; i1++){
            if(tab[i1] == tab[i1+1]){
                paire = tab[i1];
                combi = 1;
            }
        }
        if(combi == 1){
            printf("une paire de:%4d  ", tab[i1] = paire);
            paire = 2;
            //Paire2(tab, SIZE);
        }
        else{
            //printf("pas de paire\n");
            Quinte(tabl, SIZE);
        }
    }
}

void Paire2(int tab[], int taille){//paire differente de l'autre
    if(paire == 2){
        for (i2 = 0 ; i2 < SIZE-1; i2++){
            //printf("i : position %d:%4d\n",i ,tab[i]);
            if(tab[i2] == tab[i2+1] && tab[i2] != tab[i1] && tab[i2] != tab[i1]){
                paire2 = tab[i2];
                combi2 = 1;
            }
        }
        if(combi2 == 1){
            printf("\nune paire2 de:%4d  ", tab[i2] = paire2);
            Pairee2 = 1;
            if(Brelan == 1){
                full(tab,SIZE);
            }
        }
        else{
            //printf("pas de paire\n");
            //Hauteur(tab, SIZE);
        }
    }
    else{
        for (i2 = 0 ; i2 < SIZE-1; i2++){
            //printf("i : position %d:%4d\n",i ,tab[i]);
            if(tab[i2] == tab[i2+1] && tab[i2] != tab[i1]){
                paire2 = tab[i2];
                combi2 = 1;
            }
        }
        if(combi2 == 1){
            printf("\nune paire2 de:%4d  ", tab[i2] = paire2);
            Pairee2 = 1;
            if(Brelan == 1){
                full(tab,SIZE);
            }
        }
        else{
            //printf("pas de paire\n");
            //Hauteur(tab, SIZE);
        }
    }
}

void brelan(int tab[], int taille){
    for (x=0; x < 5; x++){
        if (tab[x] == tab[x+1] && tab[x] == tab[x+2]) {
            paires = tab[x];
            combis = 1;
        }
    }
    if(combis == 1){
        printf("\nun brelan de:%4d  ", tab[x] = paires);
        Brelan = 1;
    }
    else{
        //printf("\npas de brelan\n");
        //Paire(tab, taille);
    }
}

void full(int tab[], int taille){
    brelan(tabl, SIZE);
    Paire(tabl, SIZE);
    if(paire == 1 && Brelan == 1){
        printf("\nun full");
    }
    else if(paire == 1 && Brelan == 1 && tab[x] == tab[i1]){
        printf("Un brelan");
    }

}
void Hauteur(int tab[], int taille){
    int i, combi, hauteur;
    for (i=0 ; i < SIZE; i++){
        if(tab[i] != tab[i+1]){
            hauteur = tab[i];
            combi = 2;
        }
    }
    if(combi == 2){
        printf("une hauteur de:%4d  ", tab[0]);
    }
}

void doublepaire(int tab[], int taille ){
    Paire(tabl, SIZE);
    Paire2(tabl, SIZE);
    if(Pairee2 == 1 && paire == 2){
        printf("une double paire  ");
    }
}

void Carre(int tab[], int taille){
    int carre, carreValide;
    for (i3=0 ; i3 < SIZE; i3++){
        if(tab[i3] == tab[i3+1] && tab[i3] == tab[i3+2] && tab[i3] == tab[i3+3]){
            carre = tab[i3];
            carreValide = 1;
        }
    }
    if(carreValide == 1){
        printf("\nun carre de:%4d  ", tab[i3] = carre);
        carre = 1;
        //Paire2(tab, SIZE);
    }
    else{
        //printf("pas de paire\n");
        //Hauteur(tab, SIZE);
    }
}

void couleur(int tab[], int taille){
    for (i = 0; i <5; i++) {
        if(tab[i] == tab[i+1] && tab[i] == tab[i+2] && tab[i] == tab[i+3] && tab[i] == tab[i+4]){
            fig = tab[i];
            k = 1;
        }
    }
    if(k == 1){
        cout<<"\ncouleur";
    }
    else{

    }
}

void Quinte(int tab[], int taille){
    for(int i = 0; i <5; i++){
        if(tab[i] == tab[i+1] +1 && tab[i+1] == tab[i+2] +1 && tab[i+2] == tab[i+3] +1 && tab[i+3] == tab[i+4] +1){
            quinteValide = 1;
        }
    }

    if(quinteValide == 1){
        cout<<"\n"<<"Une Quinte";
    }
    else{
        Hauteur(tabl, SIZE);
    }
}

//pour la quinte fluh
void quintflush(int tab[], int tab2[], int taille){
    Quinte(tablo, SIZE);
    couleur(tablo, SIZE);
    if(quinteValide == 1 && k == 1){// si quinte et couleur alors --> quinte flush
        cout<<"\nQuinte Flush";
    }
}

void quintflushRoyal(int tab[], int tab2[], int taille){
    /* Quinte(tablo, SIZE);
     couleur(tablo, SIZE);*/
    for(int i = 0; i < 5; i++){
        if(tab[i] == 14 && tab[i+1] == 13 && tab[i+2] == 12 && tab[i+3] == 11 && tab[i+4] == 10 && tab[i] == tab[i+1] && tab[i] == tab[i+2] && tab[i] == tab[i+3] && tab[i] == tab[i+4]){
            cout<<"\n"<<"Une quinte flush royale";
        }
    }
}