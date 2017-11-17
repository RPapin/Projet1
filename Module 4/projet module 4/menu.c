#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "menu.h"
#include "donnees.h"



void menu (int maxtab,int choix)
{

		printf("Bienvenue,ce programme permet d'analiser le fichier de relevés de pouls\n\n");
		printf("Veillez choisir une option:\n");
		printf("1)trier en fonction du temps(croissant)\n2)trier en fonction du temps(decroissant)\n");
		printf("3)trier en fonction du pouls(croissant)\n4)trier en fonction du pouls(decroissant)\n5)afficher le maximum\n6)aficher le minimum\n");
        printf("7)rechercher une valeur de pouls\n8)rechercher une valeur de temps\n");
        scanf("%d", &choix);
        lirefichier(choix, maxtab);
}
