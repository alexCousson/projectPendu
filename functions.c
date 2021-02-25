#include "functions.h"

/*Variables definitions*/
int nb_players = 0;
int wl = 0;
int *found_letters;
char letters[26] = "";


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
bool
input_letter(void) {
	char letter;
	bool ok = false;
	printf("Veuillez entrer une nouvelle lettre :\n");
	scanf(" %c", &letter);
	int position = (letter - 'a');
	if (letters[position] == 0) {
		letters[position] = letter;
		ok = true;
		printf("Case vide / ok = %d\n", ok);
		check_letter(letter);
	}
	else if (letters[position] == letter) {
		printf("Case non vide : Vous avez déjà entré cette lettre / ok = %d\n", ok);
	}
	return ok;
}


/****************************************************************/
bool 	check_letter(char letter) {
	bool result = false;		
	for (int i =0; i < wl; i++) {
		if (letter == chosen_word[i]) {
			found_letters[i] = 1;
			result = true;
		}
	}	
return result;	
}
