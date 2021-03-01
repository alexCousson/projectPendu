/*dico.h*/

#ifndef DICO_H
#define DICO_H 

/*Includes*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "functions.h"

/*Macros*/
#define MAX_WORD_SIZE 100

/*Global Variables*/

extern char* Dictionary;
extern char chosen_word[MAX_WORD_SIZE];

/*Functions Prototypes*/

char*	word_pick(char *Dictionary);
void 	display_word(char* word, int* letters);
#endif

