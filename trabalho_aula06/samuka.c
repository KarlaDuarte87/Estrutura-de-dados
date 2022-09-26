// Criar um tipo abstrato de dados que represente uma pessoa, 
// contendo nome, data de nascimento e CPF. Aloque dinamicamente 
// uma variável desse novo TAD (no programa principal). Depois 
// crie uma função que receba este ponteiro e preencha os dados da 
// estrutura. A seguir crie também uma uma função que receba este 
// ponteiro e imprima os dados da estrutura. Finalmente, faça a chamada 
// a esta função na função principal.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo o tipo abstrato de dados
typedef struct {
    char nome[50];
    char data_nascimento[10];
    char cpf[11];
} Pessoa;

// Função para alocar memória dinamicamente
Pessoa *alocar_pessoa() {
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    return pessoa;
}

// Função para ler os dados da pessoa
void ler_pessoa(Pessoa *pessoa) {
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n\t Digite o nome da pessoa: ");
    gets(pessoa->nome);
    fflush(stdin);

    printf("\n\t Digite a data de nascimento da pessoa: ");
    gets(pessoa->data_nascimento);
    fflush(stdin);

    printf("\n\t Digite o CPF da pessoa: ");
    gets(pessoa->cpf);
    fflush(stdin);
}

// Função para imprimir os dados da pessoa
void imprimir_pessoa(Pessoa *pessoa) {
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n\t Nome: %s", pessoa->nome);
    printf("\n\t Data de nascimento: %s", pessoa->data_nascimento);
    printf("\n\t CPF: %s", pessoa->cpf);
    printf("\n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

// Função principal
int main() {

    // ponteiro que ira virar uma pessoa
    Pessoa *pessoa; 

    // alocando memória dinamicamente
    pessoa = alocar_pessoa(); 

    // lendo os dados da pessoa
    ler_pessoa(pessoa); 
    
    // imprimindo os dados da pessoa
    imprimir_pessoa(pessoa); 
    
    // liberando a memória alocada
    free(pessoa); 

    return 0;
}