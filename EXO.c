#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "STRUCTURE.h"
#include "EXO.h"

void exo1(){
    int n = 0;
    int* tabBis = initBisTab1D(&n);

    printf("la taille est %d, l'adresse est %d.\n", n, tabBis);
    for (int i = 0; i < n; i++) {
        printf( "%3d", tabBis[i]);
    }
    free(tabBis);
    tabBis = NULL;
}

void exo2(){
    int n = 0;
    float moyenne = 0.0f;
    float somme = 0.0f;
    float* tabBis = initTab1D(&n);
    for (int i = 0; i < n; i++) {
        printf("Rentrer la valeur de la %d case:\n", i);
        scanf("%f", &tabBis[i] );
        somme = somme + tabBis[i];
    }
    moyenne = (float)somme / (float) n;
    printf(" La moyenne des notes est %f", moyenne);
}

void exo3(){

    int nbLignes = 0, nbColonnes = 0;
    printf("Saisir le nombre de lignes et de colonnes de votre tableau:\n");
    scanf("%d %d", &nbLignes, &nbColonnes);
     int** matrice = creermat2D(nbLignes, nbColonnes);
     remplirTableau2(matrice, nbLignes, nbColonnes);
    afficherTableau2(matrice, nbLignes, nbColonnes);
    libererTableau2D(matrice, nbLignes, nbColonnes);


}

void exo4() {
    char motEnAttente[LONGUEUR_MAX];
    char** tableauMots = lectureMots(motEnAttente);
    afficherMots(tableauMots);
    freeMots(tableauMots, 10);
}


