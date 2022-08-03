#include <stdio.h>
/*Faça um programa onde a variável A é do tipo int. A variável B é um
ponteiro para um inteiro e a variável C é um ponteiro para ponteiro de
inteiro. A variável B recebe o endereço da variável A, mas não pode
receber o endereço da variável C. A variável C pode receber o endereço
da variável B, mas não pode receber o endereço da variável A*/ 

int     a;
int    *b; 
int   **c;

 int main(){
  printf("digite uma valor para a: ");
   scanf ("%d", &a);

   b = &a;
   c = &b;
   printf("endereço de a: %p valor: %d\n\n", &a, a);
   printf("endereço de b: %p valor: %p\n\n", &b, b);
   printf("valor do ponteiro para a: %d\n\n", *b);
   printf("endereço de c: %p valor: %p\n\n", &c, c);
   printf("valor do ponteiro ponteiro para c: %d\n\n", **c);
   printf("valor do ponteiro para c: %p\n\n", *c);
   }