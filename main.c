#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fonctions.h"

int main(void) {
char hidden_word[MAX_WORD_SIZE] = "";

srand(time(NULL));
welcome();

strcpy(hidden_word, word_pick(Dictionary));
printf("Le mot choisi est effectivement %s\n",hidden_word);



return 0;
}

