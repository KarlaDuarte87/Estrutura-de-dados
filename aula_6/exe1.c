/*Faça um programa que leia um valor 𝑛 e crie dinamicamente um vetor de n 
elementos e passe esse vetor para uma função que vai ler os elementos desse vetor. 
Depois, no programa principal, o vetor preenchido deve ser impresso. Além disso, 
antes de finalizar o programa, deve-se liberar a área de memória alocada.*/



#include<stdio.h>
#include<stdlib.h>

int main (){
    int quant_element;
    int *p;
    printf("digite um a quantidade de elementos do vetor : ");
    scanf ("%d", &quant_element);

    //alocar a memória do vet de acordo com a quant de elementos do vet
    p= (int *)(malloc(quant_element*sizeof(int)));
     

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

}

//laço de repetição
for (int i = 0; i < quant_elemento; i++){
    printf("o valor armazenado no elemento de indice [%d]: %d", i,p[i]);
    
}