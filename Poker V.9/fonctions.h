//
// Created by erwan on 01/12/2022.
//

#ifndef MAIN_CPP_FONCTIONS_H
#define MAIN_CPP_FONCTIONS_H

#endif //MAIN_CPP_FONCTIONS_H

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

int tabl[5] = {7,8,1,4,5};//valeur
int tablo[5] = {1,1,1,2,1}; //1 = trefle; 2 = coeur; 3 = carreau; 4 = pique

/*struct CARTE {
    int Valeur[5] = {4,9,3,9,2};
    int Couleur[5] = {2,2,2,2,2}; // 1 = trefle; 2 = coeur; 3 = carreau; 4 = pique
};*/

int paire;
int Brelan;

//Paire
int i1, combi, Pairre;

//Paire2
int i2, combi2;
int paire2, Pairee2;

//quinte
int quinteValide;

//brelan
int x, combis;
int paires;

//carre
int c;

//couleur
int i;
int k = 0;
int fig;

//quinte flush royal
int royal = 0;

void trieur(int tab[], int taille){
    int i, j, tmp;
    for (i=0 ; i < taille-1; i++){
        for (j=0 ; j < taille-i-1; j++){
            if (tab[j] < tab[j+1]){
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
    for (i=0; i < taille; ++i){
        printf("%4d", tab[i]);
    }
}

void Paire(int tab[], int taille){
    if(Brelan == 1){
        for (i1=0 ; i1 < taille; i1++){
            if(tab[i1] == tab[i1+1] && paires != tab[i1]){
                combi = 1;
                paire = tab[i1];
            }
        }
        if(combi == 1){
            printf("\nune paire %4d", paire);
            Pairre = 1;
        }
        else{
            Pairre = 0;
        }
    }
    else{
        for (i1=0 ; i1 < taille; i1++){
            if(tab[i1] == tab[i1+1]){
                combi = 1;
                paire = tab[i1];
            }
        }
        if(combi == 1){
            printf("\nune paire %4d", paire);
            Pairre = 1;
        }
        else{
            Pairre = 0;
        }
    }
}

void Paire2(int tab[], int taille){//paire differente de l'autre
        if(Pairre == 1){
            for (i2 = 0 ; i2 < taille; i2++){
                if(tab[i2] == tab[i2+1] && tab[i2] != paire){
                    combi2 = 1;
                    paire2 = tab[i2];
                }
            }
            if(combi2 == 1){
                printf("\nune paire2 %4d", paire2);
                Pairee2 = 1;
            }
            else{
                Pairee2 = 0;
            }
        }
        else{
            for (i2 = 0 ; i2 < taille; i2++){
                if(tab[i2] == tab[i2+1]){
                    combi2 = 1;
                    paire2 = tab[i2];
                }
            }
            if(combi2 == 1){
                printf("\nune paire2 %4d", paire2);
                Pairee2 = 1;
            }
            else{
                Pairee2 = 0;
            }
        }
    }

void brelan(int tab[], int taille){
    for (x=0; x < taille; x++){
        if (tab[x] == tab[x+1] && tab[x] == tab[x+2]) {
            paires = tab[x];
            combis = 1;
        }
    }
    if(combis == 1){
        printf("\nun brelan de:%4d  ", paires);
        Brelan = 1;
    }
    else{
        Brelan = 0;
    }
}

void full(int tab[], int taille){
    brelan(tabl, taille);
    Paire(tabl, taille);
    if(Pairre == 1 && Brelan == 1 && paires != paire){
        printf("\nun full");
    }
    if(Pairre == 1 && Brelan == 1 && paires == paire){
        printf("\nun brelan");
    }
    else if(Pairre == 0 && Brelan == 0){
        couleur(tablo, SIZE);
    }

}
void Hauteur(int tab[], int taille){
    int i, combi, hauteur;
    for (i=0 ; i < taille; i++){
        if(tab[i] != tab[i+1]){
            combi = 2;
        }
    }
    if(combi == 2){
        printf("\nune hauteur de:%4d  ", tab[0]);
    }
}

void doublepaire(int tab[], int taille ){
    Paire(tabl, SIZE);
    Paire2(tabl, SIZE);
    if(Pairee2 == 1 && Pairre == 1){
        printf("\nune double paire  ");
    }
    else if(Pairee2 == 0 && Pairre == 1){
        printf("\nune paire  ");
    }
    else if(Pairee2 == 0 && Pairre == 0){
        Hauteur(tabl, SIZE);
    }
}

void Carre(int tab[], int taille){
    int carre, carreValide;
    for (c=0 ; c < taille; c++){
        if(tab[c] == tab[c+1] && tab[c] == tab[c+2] && tab[c] == tab[c+3]){
            carre = tab[c];
            carreValide = 1;
        }
    }
    if(carreValide == 1){
        std::cout<<"\n"<<"un carre";
    }
    else{
        full(tabl, SIZE);
    }
}

void couleur(int tab[], int taille){
        for (i = 0; i <taille; i++) {
            if(tab[i] == tab[i+1] && tab[i] == tab[i+2] && tab[i] == tab[i+3] && tab[i] == tab[i+4]){
                fig = tab[i];
                k = 1;
            }
        }
        if(k==1){
            std::cout<<"\n"<<"une couleur";
        }
        else if(k != 1){
            doublepaire(tabl, SIZE);
        }
    }


void Quinte(int tab[], int taille){
        for(int i = 0; i <taille; i++){
            if(tab[i] == tab[i+1] +1 && tab[i+1] == tab[i+2] +1 && tab[i+2] == tab[i+3] +1 && tab[i+3] == tab[i+4] +1){
                quinteValide = 1;
            }
        }
        if(quinteValide == 1){
            std::cout<<"\n"<<"Une Quinte";
        }
    }

//pour la quinte fluh
void quintflush(int tab[], int tab2[], int taille){
    Quinte(tabl, SIZE);
    couleur(tablo, SIZE);
    if(quinteValide == 1 && k == 1) {// si quinte et couleur alors --> quinte flush
        std::cout << "\nQuinte Flush";
    }
    else if(quinteValide == 0 && k == 1){
        std::cout << "\nCouleur";
    }
    else if(quinteValide == 1 && k == 0){
        std::cout << "\nQuinte";
    }
    else if(quinteValide == 0 && k == 0){
        Carre(tabl,  SIZE);
    }
}

void quintflushRoyal(int tab[], int tab2[], int taille){
        for(int i = 0; i < 5; i++) {
            if (tab[i] == 14 && tab[i + 1] == 13 && tab[i + 2] == 12 && tab[i + 3] == 11 && tab[i + 4] == 10 &&
                tab2[i] == tab2[i + 1] && tab2[i] == tab2[i + 2] && tab2[i] == tab2[i + 3] && tab2[i] == tab2[i + 4]) {
                royal = 1;
            }
        }
        if(royal == 1){
            std::cout << "\n" << "Une quinte flush royale";
        }
        else{
            quintflush(tabl, tablo, SIZE);
        }
}
