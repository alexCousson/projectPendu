#include "fonctions.h"

/*Variables definitions*/

int nb_players = 0;
char* Dictionary = "wordDico.txt";


/*Functions definitions*/

void 
hello_world(void) {
	printf("Hello world!\n");
}

/****************************************************************/

void 
welcome(void) {
	printf("Bienvenue dans le jeu du pendu\n");
	while(nb_players < 1 || nb_players > 2) {
		printf("Veuillez selectionner le mode de jeu :\n1. Solo\n2. 2 joueurs\n");
		scanf("%d", &nb_players);
		if (nb_players < 1 || nb_players > 2) {
			printf("Selection non valide\n");
		}
	}
	printf("Vous avez choisi le mode de jeu à %d joueur(s)\n", nb_players);
}

/****************************************************************/

char*
word_pick(char *Dictionary) {
	char* word = malloc(MAX_WORD_SIZE*sizeof(char));
	FILE* file = NULL;
	file = fopen(Dictionary,"r");
	if ( file !=  NULL ) {
		printf("%s's opening successful\n", Dictionary);
		fgets(word, MAX_WORD_SIZE, file);
		printf("Le mot choisi est %s\n", word);
		fclose(file);
	}
	else {
		printf("%s's opening unsuccessful\n",Dictionary);
	}
return word;	
}

