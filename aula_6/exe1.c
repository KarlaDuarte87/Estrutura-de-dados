/*Faça um programa que leia um valor 𝑛 e crie dinamicamente um vetor de n 
elementos e passe esse vetor para uma função que vai ler os elementos desse vetor. 
Depois, no programa principal, o vetor preenchido deve ser impresso. Além disso, 
antes de finalizar o programa, deve-se liberar a área de memória alocada.*/



#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main (void){
    int quant_element;
    int *p;
    int i;
    printf("digite um a quantidade de elementos do vetor : ");
    scanf ("%d", &quant_element);

    //alocar a memória do vet de acordo com a quant de elementos do vet
    p = (int *)(malloc(quant_element*sizeof(int)));
     

    // (quant_element*sizeof(int)) é o mesmo que multiplicar a 
    // quantidade de elementos pelo tamanho ocupado pelo inteiro
    //malloc aloca a quantidade de bytes no vetor em formato void
    // (int *) converte para inteeiro esse valor da memória q está em void devido a função malloc 


    //caso não seja posível alocar memória suficiente, enviar mensagem de erro 

    if ( p == NULL){

        printf("Erro na alocação de memória ");
        system ("pause");
        exit (1);
    }
    printf("\n");



//laço de repetição
for ( i = 0; i < quant_element; i++)
{
    printf("Digite o numero para o indice indice [%d]: ", i);
    scanf("%d", &p[i]); 
}

printf("\n");

for (i=0; i< quant_element; i++){
    printf("Valor armazenado no elemento de indice [%d] = %d\n", i, p[i]);
}

printf("\n");

//liberar a nmemória alocada
free(p);
system ("pause");
return 0;
}