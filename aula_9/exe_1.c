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


void criar_pilha(Pilha *p){
    p -> topo = NULL;
    p -> tam = 0;
}

 void empilhar(Pilha *p){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> p = ler_pessoa();
        novo -> proximo = p->topo;
        p -> topo = novo;
        p -> tam++;
    }else   
        printf("\nErro ao alocar memória...\n");
 }

No *desempilhar(Pilha *p){
    if(p->topo){
        No *remover = p ->topo;
        p-> topo= remover->proximo;
        p->tam--;
        return remover;
    }else
        printf("\nPilha vazia!\n");
        return NULL;
}