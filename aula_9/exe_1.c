#include <stdlib.h>
#include <stdio.h>


typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

typedef struct {
    No *topo;
    int tam;
}Pilha;
