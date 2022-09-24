#include "fila.h"
//variáveis globais 
 Fila fila;
 int opcao;
//add um elemento no final da fila

void entrar(){
  int valor;
  if(fila.fim == tamanho){
    printf("\nA fila está cheia\n\n");
    system("pause");
  } else {
    printf("\nInsira um valor: ");
    scanf("%d", &valor);
    fila.dados[fila.fim] = valor;
    fila.fim++;
  }
}

//retirar o primeiro elemento da fila 
void sair(){
   int i;
  if (fila.inicio == fila.fim){
    printf("\nFila vazia, ufaaa!\n\n");
    system("pause");
  }  else {
    printf("\nO valor removido foi: %d\n", fila.dados[fila.inicio]);
     for ( i = 0; i < tamanho; i++){
     fila.dados[i] = fila.dados[i+1];
    }
    fila.dados[fila.fim] = 0;
    fila.fim--;
  }
}

//Mostrar o conteúdo da Fila
void imprimir(){
  int i;
  printf("\n\n");
  printf("[");
  for (i =0 ; i < tamanho; i++){
  printf("%d - ",fila.dados[i]);
  }
  printf("]\n\n");
}

void menu(){
  printf("\nEscolha uma opção:\n");
  printf(" 1 - Incluir na Fila\n");
  printf(" 2 - Excluir da fila\n ");
  printf("0 - Sair\n\n");
}