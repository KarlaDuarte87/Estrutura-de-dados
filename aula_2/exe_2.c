#include <stdio.h>
 int main(){
    int a, *b, **c, ***d; 

    printf("digite um valor para a: ");
    scanf("%d",&a);
    printf("\ndigite um valor para b: ");
    scanf("%d", &b);
    printf ("os valore de a e b são: %d, %d ", a, &b);

    c = &b;
    b = a;
    a = **c;

    printf ("os valore de a e b são ")

 }