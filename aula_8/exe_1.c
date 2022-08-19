#include<stdlib.h>
#include<stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct {
    char nome[50];
    Data data;
}Pessoa;

Pessoa ler_pessoa (){
    Pessoa p;
    printf("\Digite o nome: \n");
    scanf("%49[^\n]", p.nome);
    printf("Digite a data de nascimento dd mm aa: \n");
    scanf("%d%d%d", &p.data, &p.data.mes. &p.data.mes.ano);
    return p;
}
void imprimir_pessoa(Pessoa p){
    printf("Nome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

No *empilhar(No *topo){
    No *novo = malloc (sizeof(No));

    if(novo){
        novo ->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }else
    printf("\nErro ao alocar memória...\n");
    return NULL;
}
//procedimento para imprimir pilha 
/*recebe o ponteiro para o topo da pilha 
quando o topo for != de null imprime as informações de cada pessoa
*/
void imprimir_pilha (No *topo){
    printf("\n-------------PILHA------------");
    while (topo){
        \imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    printf("\n------------FIM PILHA----------");
}
    