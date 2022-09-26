#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[100];
    char data[10];
    char cpf[11];
} Pessoa;


Pessoa *alocar(){
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    return pessoa;
}

void ler(Pessoa *pessoa){
    printf("Qual o nome da pessoa: ");
    gets(pessoa->nome);
    fflush(stdin);

    printf("\n\t Qual a data de nascimento: ");
    gets(pessoa->data);
    fflush(stdin);

    printf("\n\t Insira o CPF: ");
    gets(pessoa->cpf);
    fflush(stdin);
}


void imprimir(Pessoa *pessoa){
    printf("\n\n");
    printf("Nome da pessoa: %s", pessoa->nome);
    printf("data de nascimento: %s", pessoa->data);
    printf("cpf: %s", pessoa->cpf);
    printf("\n\n");



int main(){
    Pessoa *pessoa;

    pessoa = alocar();
    ler(pessoa);
    imprimir(pessoa);

    free(pessoa);
    return 0;
}