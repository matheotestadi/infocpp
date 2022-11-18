#include <stdio.h>
#define SIZE 5

void trieur(int tab[], int taille);
void tableau(int tab[], int taille);
void Paire(int tab[], int taille);
void Hauteur(int tab[], int taille);
void brelan(int tab[], int taille);
void full(int tab[], int taille );

int Full;
int paire;
int Brelan;

int main () {
    int tab[5];
    tableau(tab, 5);
    trieur(tab, SIZE);
    printf("\n");
    brelan(tab, SIZE);
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

void tableau(int tab[], int taille){// La main
    int i;
    for (i = 0; i < 5; i = i + 1) {
        printf("Quelle valeur pour la case %d ?\n", i);
        scanf("%d", &tab[i]);
    }
    printf("Voici le tableau que vous avez rempli :\n");
    for (i = 0; i < 5; i = i + 1) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void Paire(int tab[], int taille){
    int i, combi;
    int paire;
    for (i=0 ; i < SIZE; i++){
        //printf("i : position %d:%4d\n",i ,tab[i]);
        if(tab[i] == tab[i+1]){
            paire = tab[i];
            combi = 1;
        }
    }
    if(combi == 1){
        printf("une paire de:%4d  ", tab[i] = paire);
        paire = 1;
    }
    else{
        //printf("pas de paire\n");
        Hauteur(tab, SIZE);
    }
}

void brelan(int tab[], int taille){
    int x, combis;
    int paires;
    for (x=0 ; x < SIZE; x++){
        //printf("i : position %d:%4d\n",i ,tab[i])
        if (tab[x] == tab[x + 1] && tab[x] == tab[x + 2]) {
            paires = tab[x];
            combis = 1;
        }

    }
    if(combis == 1){
        printf("un brelan de:%4d  ", tab[x] = paires);
        Brelan = 1;
    }
    else{
        //printf("pas de paire\n");
        Paire(tab, SIZE);
    }
}

void full(int tab[], int taille){
    if(paire == 1 && Brelan == 1){
        printf("un full");
    }
}
void Hauteur(int tab[], int taille){
    int i, combi, hauteur;
    for (i=0 ; i < SIZE; i++){
        //printf("i : position %d:%4d\n",i ,tab[i]);
        if(tab[i] != tab[i+1]){
            hauteur = tab[i];
            combi = 2;
        }
    }
    if(combi == 2){
        printf("une hauteur de:%4d  ", tab[0]);
    }
    else{
        printf("pas de hauteur\n");

    }
}
