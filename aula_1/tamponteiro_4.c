//independete do tipo de ponteiro, não há diferença no tamannho de um ponteiro
//todos ponteiros guardam endereço de memória
//endereço de memória possuem o mesmo tamanho

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int *p1;
    char *p2;
    float *p3;

    printf("tamanho de p1: %d\n", (int)sizeof(p1));
    printf("tamanho de p2: %d\n", (int)sizeof(p2));
    printf("tamanho de p3: %d\n", (int)sizeof(p3));
}