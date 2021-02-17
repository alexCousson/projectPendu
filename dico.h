/*dico.h*/

#ifndef DICO_H
#define DICO_H 

/*Includes*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "functions.h"

/*Macros*/

#define MAX_WORD_SIZE 100

/*Global Variables*/

extern int nb_players;
extern char* Dictionary;


/*Functions Prototypes*/

char*	word_pick(char *Dictionary);
#endif

