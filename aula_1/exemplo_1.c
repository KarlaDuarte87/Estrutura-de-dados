#include <stdio.h>
#include <stdlib.h>

int main (){
    int *p, num = 10;
    p = &num;

    printf("valor apontado por p: %d\n", *p);

}

// a linha 8 imprime o conteúdo do endereço apontado por p