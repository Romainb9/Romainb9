#include <stdio.h>
#include "STRUCTURE.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 255
#define MIN 0
#define NB_LIGNES_MAX 100
#define NB_COLONNES_MAX 100
#define TAILLE_PHYSIQUE 50

int* initBisTab1D(int* pN){
    printf("Veuillez saisir la taille de votre tableau:\n");
    scanf("%d", pN);
    int* tab = (int*)calloc(*pN, sizeof(int));
    return tab;
}

float* initTab1D(float* pN) {
    printf("Veuillez saisir la taille de votre tableau:\n");
    scanf("%d", pN);
    float *tab = (float *) calloc(*pN, sizeof(float));
    return tab;
}

int** creermat2D(int nbLignes, int nbColonnes){
    int** matrice2D = NULL;
    int i = 0;
    matrice2D = (int**) calloc(nbLignes, sizeof(int*));
    for (i = 0; i < nbLignes; i++){
        matrice2D[i]= (int*) calloc(nbColonnes, sizeof(int));

    }
    return matrice2D;
}

int getRandomInteger(){
    srand(time(NULL));
    int nombrealeatoire = (rand() % (MAX-MIN+1))+MIN;
    return nombrealeatoire;
}

void remplirTableau2(int** matrice, int nbLignes, int nbColonnes) {
    srand(time(NULL));
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            matrice[i][j] = rand()%256;

        }
    }
}

void afficherTableau2(int** matrice, int nbLignes, int nbColonnes){
    for (int i = 0; i < nbLignes; i++) {
        printf("\n");
        for (int j = 0; j < nbColonnes; j++){
            printf("%5d", matrice[i][j]);
        }
    }

    }

void libererTableau2D(int** matrice, int nbLignes, int nbColonnes) {
    int i = 0;
    if (nbColonnes > 0) {
        for (i = 0; i < nbLignes; i++) {
            free(matrice[i]);
        }
    }
    if(nbLignes > 0) {
        free(matrice);
    }
}


char** lectureMots(char* motEnAttente) {
    int longueur = 0;
    char** tableauMots = (char**) calloc(10, sizeof(char*));
    printf("Veuillez rentrer 10 mots au clavier.");
    for (int i = 0 ; i < 10 ; i++) {
        printf("\n>");
        fflush(stdin);
        fgets(motEnAttente, LONGUEUR_MAX, stdin);
        longueur = strlen(motEnAttente);
        tableauMots[i] = (char*) calloc(longueur, sizeof(char));
        strcpy(tableauMots[i] , motEnAttente);
        /*for (int j = 0 ; j < longueur ; j++) {
            tableauMots[i][j] = motEnAttente[j];
        } */
    }
    return tableauMots;
}

void afficherMots(char** tableauMots) {
    for (int i = 0 ; i < 10 ; i++) {
        printf("%s\n" , tableauMots[i]);
    }
}

void freeMots(char** tableauMots, int nbL) {
    for (int i = 0 ; i < nbL ; i++) { free(tableauMots[i]); }
    free(tableauMots);
}