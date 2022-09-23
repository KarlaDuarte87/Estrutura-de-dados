#ifndef PILHA_H
#define PILHA_H extern

#include <stdio.h>
#include <stdlib.h>

// Constantes
#define tamanho 6

// Estrutura da pilha
typedef struct pilha {
  int dados[tamanho];
  int inicio;
  int fim;
} Pilha;

// Variaveis globais
extern Pilha pilha;
extern int op;

void pilha_inserir();
void pilha_sair();
void pilha_imprimir();
void menu();

#endif