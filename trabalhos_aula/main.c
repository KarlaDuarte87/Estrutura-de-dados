#include "pilha.h"


//função principal
int main(){
    Pilha pilha;
    op = 1;
    pilha.inicio=0;
    pilha.fim=0;
    while ( op!=0 ){
        system("clear");
        pilha_imprimir();
        menu();
        switch (op){
            case 1:
              pilha_inserir();
              break;
            case 2: 
              pilha_sair();
              break;
            case 0:
              printf("Arrivederci!!");
              break;
            default:
              printf("Error");
              break;
        }
    }    
    return(0);
}