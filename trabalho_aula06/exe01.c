#include <stdio.h>
#include <stdlib.h>

void alocar(int **vetor, int valor){
    *vetor = malloc(valor * sizeof(int));//tamanho do vetor de inteiros
}

void liberar(int *vetor){
    free(vetor);
}

void preencher(int *vetor, int valor){
    for(int i=0; i<valor; i++){
        printf("Digite os valores a serem armazenados no vetor: %d: ", i);
        scanf("%d",&vetor[i]);
    }
}

void imprimir(int *vetor, int valor){
    for (int i=0; i<valor; i++){
        printf("%d \t",vetor[i]);
    }
    printf("\n");
}



int main(){
    int **vetor;
    int tamvetor;//ponteiro que indicará o valor para virar um vetor

    printf("\n\n\nAtividade aula6 EXE01\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\nEnunciado:Faça um programa que leia um valor 𝑛 e crie dinamicamente um vetor de 𝑛 elementos e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no programa principal, o vetor preenchido deve ser impresso. Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada.");

    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&tamvetor);
    alocar(&vetor, tamvetor);
    preencher(vetor, tamvetor);
    imprimir(vetor, tamvetor);
    liberar(vetor);
  
    return 0;

    
}
