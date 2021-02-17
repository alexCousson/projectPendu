#include "dico.h"

/*Variables definitions*/

int nb_players = 0;
char* Dictionary = "wordDico.txt";


/*Functions definitions*/

char*
word_pick(char *Dictionary) {
	int random_nb = 0;	
	int word_nb = 0;
	int read_char = 0;


	char* word = malloc(MAX_WORD_SIZE*sizeof(char));
	FILE* file = NULL;

	file = fopen(Dictionary,"r");

	if ( file !=  NULL ) {
		printf("%s's opening successful\n", Dictionary);
		do {
			read_char = fgetc(file);
			if (read_char == '\n') {
				word_nb++;	
			} 
		}
		while (read_char != EOF);	
		random_nb = rand() % word_nb;	
		printf("Il y a %d mots dans le dictionnaire\n", word_nb);
		printf("Le nombre choisi est %d\n", random_nb);

		rewind(file);
		word_nb = 0;
		
		do {
			if (word_nb == random_nb -1) {
			 	fgets(word,MAX_WORD_SIZE, file);
				printf("Le mot choisi est %s\n", word);
				break;
			}
		
			read_char = fgetc(file);
			if (read_char == '\n') {
				word_nb++;
			}
		}
		while (read_char != EOF);
		printf("Le mot choisi est %s\n", word);
		fclose(file);
	}
	else {
		printf("%s's opening unsuccessful\n",Dictionary);
	}

	/*Pick a random word*/	
	

	

return word;	
}

/****************************************************************/
