#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>




void troca(char *vet){
    int i;
     for (i = 0; i < strlen(vet); i++){
        switch(vet[i]){
            case 'a':
                vet[i] = 'u';
                break;
            case 'e':
                vet[i] = 'o';
                break;
            case 'i':
                vet[i] = 'u';
                break;
            case 'o':
                vet[i] = 'a';
                break;
            case 'u':
                vet[i] = 'e';
                break;
        }
        
    }
}

void imprime(char *vet){
    printf("\nA Frase com as modificacoes eh: %s\n",vet);
}

int main(){
  setlocale(LC_ALL, "Portuguese");
   char frase[100];
  printf("\n\n\nAtividade aula3 EXE03\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\nEnunciado:  Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor. Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. Usar uma função void (procedimento) para realizar a troca e uma função para realizar a impressão da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor. Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. use o switch para realizar as trocas. Só considere as letras minúsculas\n\n\n\n");
   printf("Digite uma frase:\n");
   gets(frase);
   printf("\nA Frase eh: %s\n", frase);
   troca(frase);
   imprime(frase);
   return 0;
}