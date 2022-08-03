#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

void imprimir(Data *x){
    printf("%d/%d%d\n",x->dia,x->mes,x->ano);
}

int main(void){
    Data data;
    Data *p;

    printf("$endereço de data: %p\")
}