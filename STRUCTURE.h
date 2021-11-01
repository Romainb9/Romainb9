//
// Created by francois on 27/10/2021.
//
#define NB_LIGNES_MAX 100
#define NB_COLONNES_MAX 100


#ifndef TP8_STRUCTURE_H
#define TP8_STRUCTURE_H
int* initBisTab1D(int* pN);
float* initTab1D(float* pN);
int** creermat2D(int nbLignes, int nbColonnes);
int getRandomInteger();
void remplirTableau2(int** matrice, int nbLignes, int nbColonnes);
void libererTableau2D(int** matrice, int nbLignes, int nbColonnes);
void afficherTableau2(int** matrice, int nbLignes, int nbColonnes);
void afficherMots(char tableauMots);
char lectureMots(char* motEnAttente);
void freeMots(char matrice, int nbL);
#endif //TP8_STRUCTURE_H
