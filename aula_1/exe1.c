#include <stdio.h>

int main(void) {
char *p, letra = 'k';

  p=&letra;
  
  printf("valor apontado por p: %c\n", *p);
}