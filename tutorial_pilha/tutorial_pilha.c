#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p; // variavel do tipo pessoa
    struct no *proximo; //ponteiro para o proximo no e esse proximo no é exatamente a estrutura criada aqui 
}No;

Pessoa ler_pessoa(){
    Pessoa p;
    printf("\nDigite o nome e data de nascimento dd mm aaaa");
    scanf("%49[^\n]%d%d%d", p.nome, p.data.dia, p.data.mes, p.data.ano);
    return p;
}
void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

//função para a operação push (empilhar)
No* empilhar(No *topo){ // No* = ponteiro para um no   novo é ium tipo de variavel do tipo ponteiro para  no
    No *novo = malloc(sizeof(No));


    if (novo){
        novo->p = ler_pessoa();// ponteiro que vai la no tipo pessoa e cria umas pessoa preenchendo as informações através da  funçã ler_pessoa
        novo->proximo = topo;
        return novo;
    } else {
        printf("\nErro ao alocar memoria...\n");
    }
    return NULL;
}

No* desempilhar(No **topo){
    if (*topo == NULL){
        No *remover = *topo; //variável do tipo ponteiro 
        *topo = remover ->proximo;
        return remover;
    } else{
        printf("\nPilha vazia!!\n");
    }
    return NULL;
}

void imprimir_pilha(No *topo){
    printf("\n------------PILHA------------\n");
    while (topo){// enquanto o topo for != de null
        imprimir_pessoa(topo->p);
        topo = topo->proximo;

    }

    printf("\n-----------FIM PILHA----------\n");
}
int main(){
    No *remover, *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d",&opcao);
        getchar();

        switch(opcao){
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                remover = desempilhar(&topo);
                printf("elemento removido com sucesso\n");
                if (remover){
                    imprimir_pessoa(remover->p);
                    free(remover);
                } else{
                    printf("\nSem no a remover.\n");
                }
                break;
            case 3:
                imprimir_pilha(topo);
                break;
            default:
                if(opcao != 0){
                    printf("\nOpcao Invalida!!!\n");
                }

    }while(opcao != 0);

    return 0;
}
