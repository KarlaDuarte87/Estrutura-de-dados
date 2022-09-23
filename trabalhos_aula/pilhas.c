#include "pilha.h"



//variaveis globais
Pilha pilha;
int op;

//add um elemento no final da fila
void pilha_inserir(){
    int valor;
    if(pilha.fim == tamanho){
        printf("A prilha está cheia, impossível empilhar!\n\n");
        system("pause");
    }else{
        printf("Digite o valor a ser empilhado: ");
        scanf("%d", &valor);
        pilha.dados[pilha.fim]=valor;
        pilha.fim++;
    }
}

void pilha_sair(){
    if (pilha.inicio == pilha.fim){
        printf("A pilha está vazia!\n\n");
        system("pause");
    }else{
        printf("removendo: %d\n", pilha.dados[pilha.fim-1]);
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

void pilha_imprimir(){
    int i;
    printf("[");
    for(i=0; i<tamanho; i++){
        printf(" %d ",pilha.dados[i]);
    }
    printf("]\n\n");
}

void menu(){
    printf("\nEscolha uma opcao: \n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
    scanf("%d",&op);
}


 
