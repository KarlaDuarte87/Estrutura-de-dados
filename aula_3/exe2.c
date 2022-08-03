
// 2. Seja o trecho de código a seguir, que valor de c será impresso no comando printf?
// int a=5, b=12, c;
// int *p;
// int *q;
// p = &a;
// q = &b;
// c = *p + *q;
// printf("c = %d", c);

#include <stdio.h>
#include <stdlib.h>

int main (){
  int a=5, b=12, c;
  int *p, *q;

  p = &a;
  printf("p=%p a=%d",p, a);
}