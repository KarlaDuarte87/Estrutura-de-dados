#include<stdlib.h>
#include<stdio.h>


typedef struct{
    int dia, mes, ano;
}Data;

typedef struct {
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;



Pessoa ler_pessoa (){
    Pessoa p;
    printf("\nDigite o nome: \n");
    scanf("%s49[^\n]", p.nome);
    fflush(stdin);
    printf("Digite a data de nascimento dd mm aa: \n");
    scanf("%d%d%d", &p.data.dia, &p.data.mes, &p.data.ano);
    fflush(stdin);
    return p;
}
void imprimir_pessoa(Pessoa p)
{
    printf("Nome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}


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
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    printf("\n------------FIM PILHA----------");
}


int main (){
    int opcao;
    printf("\n -------------------MENU----------------\n");
    printf("\n1-empilhar \n2-desempilhar \n3-imprimir \n4-limpar tudo \n5-sair\n");
    scanf("%d", &opcao);
switch (opcao){
case 1:
    topo = empilhar(&topo);
    break;
case 2:
    imprimir_pessoa 
    break;
case 3:
    empilhar;
    break;
default:
    break;
}
}