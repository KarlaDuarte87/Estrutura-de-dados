#ifndef FILA_H
#define FILA_H  extern

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//constantes
#define tamanho 5



//Estrutura da fila
typedef struct fila{    
  int dados[tamanho];
  int inicio;
  int fim;
}Fila;

//variáveis globais
extern Fila fila;
extern int opcao;

//Prototipação
void entrar();
void sair();
void imprimir();
void menu();
#endif