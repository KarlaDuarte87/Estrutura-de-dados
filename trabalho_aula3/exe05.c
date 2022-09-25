#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void calc_hexa(float l, float *area, float *perimetro);

int main (){
    setlocale(LC_ALL, "Portuguese");
printf("\n\n\nAtividade aula3 EXE04\n\nAuluna: Karla Duarte Ferreira RA: 21144154-2\n\n\nEnunciado: Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve implementar uma função chamada calc_hexa que calcula a área e o perímetro de um hexágono regular de lado L. O programa deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o perímetro do polígono. O programa termina quando for digitado um valor negativo qualquer para o lado. A função deve obedecer o seguinte protótipo:\nvoid calc_hexa(float l, float *area, float *perimetro);\nLembrando que a área e o perímetro de um hexágono regular são dados por:\nPara os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow da biblioteca math.h.");

    float l, area, perimetro;
    printf("\n\nQual o valor do Lado: ");
    scanf("%f", &l);

    if (l>0){
        calc_hexa(l, &area, &perimetro);
        printf("A area eh: %.2f \n", area);
        printf("O perimetro eh %.2f \n", perimetro);
       
    } else {
        printf("Somente valores poitivos: \n");
        system("pause");
        exit(1); 
    }

    system("pause");
    return 0;

}


void calc_hexa(float l,float *area, float *perimetro){
    *area = (3 * pow(l,2) * sqrt(3))/2;
    *perimetro= 6 * l;
}