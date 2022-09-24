#include "fila.h"

//função principal
int main() {
  setlocale(LC_ALL, "Portuguese");
  opcao = 1;
  fila.inicio = 0;
  fila.fim = 0;
  while (opcao != 0) {
    system("clear");
    imprimir();
    menu();
  scanf("%d", &opcao);
  switch (opcao){
    case 1:
      entrar();
      break;
    case 2:
      sair();
      break;
    case 0:
      printf("Saindo\n");
      break;
    default:
      printf("Opção inválida!");
      break;
    } 
    
  }
return (0);
}