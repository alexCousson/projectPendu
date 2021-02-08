#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(void) {
int i = 0;
int j = 2;
Dictionary test;

test.value = 5;
test.name = "Alexandre";


HelloWorld();


printf("i vaut : %d et j vaut : %d\n", i, j);
printf("value : %d / name : %s\n", test.value, test.name);

return 0;
}
