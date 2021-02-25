/*functions.h*/

#ifndef functions_H
#define functions_H 

/*Includes*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "dico.h"

/*Macros*/

/*Global Variables*/
extern int nb_players;
extern int wl;
extern int* found_letters;
extern char letters[26];


/*Functions Prototypes*/

void	hello_world(void);
void	welcome(void);

bool 	input_letter(void); 
bool 	check_letter(char letter);
#endif

