#include <stdlib.h>
#include <stdio.h>


//função inicializar a matriz com 0s
void inicializar(int **matriz){
    int i, j;
    matriz = malloc(10* sizeof(int*)); // tamanho do ponteiro para inteiro
    for (i=0; i< 10; i++){
        matriz[i]= malloc(10 * sizeof(int)); //tamanho do tipo inteiro na arquitetura do computador 
    }

    for (i=0; i< 10; i++){
        for(j= 0; j< 10; j++){
          matriz[i]=   
        //*(*(matriz + i)+j) = ;
        }    
    }  
}



void imprimir(int **matriz){
    int i, j;
    for (i=0; i< 10; i++){
        for (j=0; j< 10; j++){
            printf("%d", *(*(matriz + i) + j)); // aritimética de ponteiros
            printf  ("\n");
        }
    }

}

int main(void){
    int matriz;
    printf("\n\n\nAtividade aula3 EXE04\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\nEnunciado: Escreva um programa que declare uma matriz 10x10 de inteiros. Você crie uma função void (procedimento) para inicializar a matriz com zeros usando um ponteiro para a matriz. Faça outra função void para preencher depois a matriz com os números de 99 a 0, também usando ponteiro para matriz como parâmetro. Por fim, o programa deve imprimir a matriz\n\n\n");
    printf("Antes:\n");
    imprimir(matriz);
    printf("Depois:\n");
    inicializar(matriz);
    imprimir(matriz);
}