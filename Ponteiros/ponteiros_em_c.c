#include <stdlib.h>

int main (){
    int *valor1, valor2 = 50;
    char *letra1, letra2 ='k';
    valor1 = &valor2;
    letra1 = &letra2;

    printf("Valor da variavael valor2: %d\n", valor2);
    printf("endereço da varialvel valor2: %p\n", &valor2);
    printf("endereço da varialvel valor1: %p\n", valor1);
    printf("contedudo apontado pela variavel valor1: %d\n", *valor1);

}