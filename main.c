#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "functions.h"
#include "dico.h"

int main(void) {

/* Array of MAX_WORD_SIZE bytes (number of lettters) to store the word to guess */	
char hidden_word[MAX_WORD_SIZE] = "";

/* Initiate the time */
srand(time(NULL));

/**
 * functions asks for the number of players
 */
welcome();

/* Picks a word in the dictionary and copy it in hidden_word & chosen_word tab */
strcpy(hidden_word, word_pick(Dictionary));
strcpy(chosen_word, hidden_word);

/* Counts the number of letters in the word */
wl = strlen(hidden_word) - 2;

/* Allocate wl*bytes for the found_letter array : 00101 means that the 3rd and 5th letter have been discovered */ 
found_letters = calloc(wl,sizeof(int));

/* Displays the found letters of the hidden word */
display_word(hidden_word, found_letters);

/**
 * Asks for a letter and checks if it has already been encountered by returning a boolean and if the letter is present in the word
 */ 
while(!input_letter()); 
printf("Bravo vous avez trouvé la lettre\n");

printf("Le mot a deviner est :");
display_word(hidden_word,found_letters);
return 0;
}

