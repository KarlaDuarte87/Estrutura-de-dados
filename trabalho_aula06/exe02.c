#include <stdlib.h>
#include <stdio.h>


//função de alocar vlores
void *alocar (int n){
   int *vetor;
    vetor = malloc(n * sizeof(int*));
    return  vetor;
}


void ler_elementos(int *vetor, int valor){
    int i;
   
    for (i=0; i<valor; i++){
        printf("Digite o valor do elementos: %d\n", i+1);
        scanf("%d", &vetor[i]);
    }

}
void imprimir(int *vetor, int valor){

    printf("Vetores: ");
    for (int i=0; i<valor; i++){
        printf(" %d\t", vetor[i]);
    }
    printf("\n\n");

}


void liberar_memoria(int *vetor){
    free(vetor);
}



int main(){

    int valor;
    int *vet;

    printf("\n\n\nAtividade aula6 EXE02\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\nEnunciado: Faça uma função que receba um valor 𝑛 e crie dinamicamente um vetor de 𝑛 elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um vetor e um valor 𝑛 e imprima os 𝑛 elementos desse vetor. Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. Ao final, crie uma função principal que leia um valor 𝑛 e chame a função criada acima. Depois, a função principal deve ler os 𝑛 elementos desse vetor. Então, a função principal deve chamar a função de impressão dos 𝑛 elementos do vetor criado e, finalmente, liberar a memória alocada através da função criada para liberação.\n\n\n\n");
    printf ("digite um valor: ");
    scanf ("%d", &valor);

    vet = alocar(valor);
    ler_elementos(vet,valor);
    imprimir(vet,valor);
    liberar_memoria(vet);

return 0;

}