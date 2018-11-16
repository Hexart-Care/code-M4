#include <stdio.h>
#include <stdlib.h>
#include "action.h"

int menu(int *Tabpouls,int *Tabtemps,int compteur)  //Cette fonction sert à savoir le choix de l'utilisateur, suite a ce choix nous appelons les fonctions contenu dans action.c
{
    int menu, temps, min, max;
    do{
    printf("Choisissez l'action a realiser :\n0) Lire le fichier CSV.\n1) Trier les valeurs.\n2) Faire la moyenne des pouls d'une intervalle de temps.\n3) Rechercher une valeur pour un temps specifique.\n4) Compter le nombre de lignes en memoire.\n5) Rechercherle min et max avec le temps associe.\n");
    scanf("%d", &menu);

    switch(menu){

    case 0:
        trie(menu, Tabpouls, Tabtemps);
    break;

    case 1:
        trie(menu, Tabpouls, Tabtemps);
    break;

    case 2:
        moyenne(Tabpouls, Tabtemps, compteur);
    break;

    case 3:
        printf("Pour quelle valeur de temps voulez vous le pouls\n");
        scanf("%d", &temps);
        dichotomie(Tabtemps, Tabpouls, temps, compteur);
    break;

    case 4:
        printf("le nombre de ligne du CSV est : %d \n", compteur - 1);
    break;

    case 5:
        min = minimum(Tabpouls, compteur - 2);
        max = maximum(Tabpouls, compteur - 1);
        printf("le minimum de poul est : %d au temps %d\n", Tabpouls[min], Tabtemps[min]);
        printf("le maximum de poul est : %d au temps %d\n", Tabpouls[max], Tabtemps[max]);
    break;
    }
    printf("voulez vous refaire une action = 1 ou quittez = 0\n");
    scanf("%d", &menu);
    }while(menu == 1);
    return 0;
}
