/*fonctions.h*/

#ifndef FONCTIONS_H
#define FONCTIONS_H 

/*Includes*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Macros*/

#define MAX_WORD_SIZE 100

/*Global Variables*/

extern int nb_players;
extern char* Dictionary;


/*Functions Prototypes*/

void	hello_world(void);
void	welcome(void);
char*	word_pick(char *Dictionary);
/*void 	word_pick(char *Dictionary);*/
#endif

