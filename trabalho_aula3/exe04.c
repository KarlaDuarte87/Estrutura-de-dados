/*Enunciado: Escreva um programa que declare uma matriz 
10x10 de inteiros. Você crie uma função void (procedimento)
 para inicializar a matriz com zeros usando um ponteiro para
  a matriz. Faça outra função void para preencher depois a 
  matriz com os números de 99 a 0, também usando ponteiro
   para matriz como parâmetro. Por fim, o programa deve
    imprimir a matriz\n\n\n");
*/
#include <stdlib.h>
#include <stdio.h>



//função inicializar a matriz com 0s
void inicializar(int *matriz){
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i * 10 + j] = 0;
        }    
    }  
}


void preencher(int *matriz){
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i * 10 + j] = 0 + (i * 10 + j);
        }
    }    
}


void imprimir(int *matriz){
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (matriz[i * 10 + j]>=0 && matriz[i * 10 + j]<10) {
                printf("  %d ", matriz[i * 10 + j]);
            } else {
                printf(" %d ", matriz[i * 10 + j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int matriz[10][10];
    printf("\n Karla Duarte Ferreira RA: 21144154-2\n\n");
    inicializar(&matriz[0][0]);
    imprimir(&matriz[0][0]);
 
    printf("\n");

    preencher(&matriz[0][0]);
    imprimir(&matriz[0][0]);


    return 0;
}