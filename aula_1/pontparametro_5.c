#include <stdio.h>
#include <stdlib.h>

void imprimir(int *num){
        printf("%d\n", *num);
        *num = 80;    
    }

int main (){
    int idade = 35;

    imprimir(&idade);
    printf("Idade: %d\n", idade);
}