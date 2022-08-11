#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main (){

    setlocale(LC_ALL,"Portuguese");
    char letra = 'f';
    char *p;

    p = &letra;

    printf("\nValor de letra: %c\n", letra);
    printf("\nEndereco de letra: %p\n", &letra);
    printf("\nValor de p: %p\n ", p);
    printf("\nEndereco de p: %p\n", &p);
    printf("\nValor apontado por p: %c\n", *p);
}
