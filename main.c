#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "functions.h"
#include "dico.h"

int main(void) {
char hidden_word[MAX_WORD_SIZE] = "";

srand(time(NULL));
welcome();

strcpy(hidden_word, word_pick(Dictionary));
strcpy(chosen_word, hidden_word);
wl = strlen(hidden_word) - 2;
printf("Le mot choisi est effectivement %s\n",hidden_word);

found_letters = calloc(wl,sizeof(int));
display_word(hidden_word, found_letters);
input_letter();
while(!input_letter()); 
printf("Bravo vous avez trouvé la lettre\n");

for (int i = 0; i < wl; i++) {
	printf("found_letters[%d] : %d\n", i, found_letters[i]);
}
printf("Le contenu des lettres proposées :\n");
for (int i = 0; i < 26; i++) {
	printf("%c\n",letters[i]);
}		
printf("Le mot a deviner est :");
display_word(hidden_word,found_letters);
return 0;
}

