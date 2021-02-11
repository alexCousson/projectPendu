#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <string.h>

int main(void) {
char hidden_word[MAX_WORD_SIZE] = "";

welcome();

strcpy(hidden_word, word_pick(Dictionary));
printf("Le mot choisi est effectivement %s\n",hidden_word);



return 0;
}
