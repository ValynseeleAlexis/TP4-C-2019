/**************************************************************
Auteur : Valynseele Alexis
Date :  26/11/2019 - Seance 1
Titre : TP 4 - DA (9h)
Fichier C : Repertoire de fonctions sans rapport direct avec le probleme

**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>
#include "..\prototypes\tab_mots_dynamique.h"

void testPartieI(){
    int i = nbMots(".\\Fichiers\\liste_dev.txt");
    printf("%d\n",i);

    char** tabMots = creationTabMotsDynamique(".\\Fichiers\\liste_dev.txt",i);
    affichageTabMotsDynamique(tabMots,i);
}

void menu()
{
    char menu1;
    printf("Valynseele Alexis\n\n");
    do
    {
        printf("=================================================\n\n");
        printf("< 1 > Programme Test Exo 1\n");
        printf("< 0 > Quitter le programme\n\n");
        printf("=================================================\n\n");
        printf("votre choix: \t");
        scanf("%s", &menu1);
        printf("\n");
        switch (menu1)
        {
        case '0':
            printf("fin du programme\n");
            break;
        case '1':
            testPartieI();
            break;
        default:
            printf("erreur: commande inconnue\n");
            break;
        }
    } while (menu1 != '0');
}
