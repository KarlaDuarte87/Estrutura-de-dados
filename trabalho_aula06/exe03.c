#include <stdlib.h>
#include <stdio.h>


//alocar valor
int **alocar(int linha, int coluna){
    int **vetor = malloc(linha * sizeof(int*));
    for (int i = 0; i < linha; i++){
        vetor[i] = malloc( coluna * sizeof(int));
    }
    return vetor;
}

void liberar(int **vetor, int linha){
    for(int i = 0; i < linha; i++){
    free(vetor[i]);
    }
    free(vetor);
}

void ler(int **vetor, int linha, int coluna){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
        printf("Digite o valor do elemento [%d] [%d]: ", i+1, j+1);
        scanf("%d", &vetor[i][j]); 
        }
    }
}


void imprimir(int **vetor, int linha, int coluna){
    printf("Resultado da Matriz\n");
    for (int i = 0; i < linha; i++){
        printf("\n");
        for(int j = 0; j < coluna; j++){
            printf("%d\t", vetor[i][j]);
        }
        printf("\t");
    }
}



int main(){

    int linha, coluna;
    int **mat;

    printf("\n\n\nAtividade aula6 EXE03\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\nEnunciado:Construa um programa que aloque em tempo de execução (dinamicamente) uma matriz de ordem 𝑚 × 𝑛 (linha por coluna). A função deve receber como parâmetros 𝑚 e ?? aloque uma matriz de ordem 𝑚 × 𝑛 e retorne um ponteiro para esta matriz alocada. Crie ainda uma função para liberar a área de memória alocada pela matriz. Finalmente, crie um novo programa (main) que teste/use as duas funções criadas acima.\n\n\n\n");
    printf("Digit o valor da matriz\n");
    printf("Qual a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Qual a quantidade de colunas: ");
    scanf("%d", &coluna);

    mat =  alocar(linha, coluna);
    ler (mat, linha, coluna);
    imprimir(mat, linha, coluna);
    liberar(mat, linha);

return 0;
}