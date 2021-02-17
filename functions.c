#include "functions.h"

/*Variables definitions*/



/*Functions definitions*/

void 
hello_world(void) {
	printf("Hello world!\n");
}

/****************************************************************/

void 
welcome(void) {
	printf("Bienvenue dans le jeu du pendu\n");
	while (nb_players < 1 || nb_players > 2) {
		printf("Veuillez selectionner le mode de jeu :\n1. Solo\n2. 2 joueurs\n");
		scanf("%d", &nb_players);
		if (nb_players < 1 || nb_players > 2) {
			printf("Selection non valide\n");
		}
	}
	printf("Vous avez choisi le mode de jeu à %d joueur(s)\n", nb_players);
}

/****************************************************************/

