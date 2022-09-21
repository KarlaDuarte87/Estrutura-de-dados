#include <stdlib.h>
#include <stdlib.h>

void imprimirvet(int *v,int tam){   
    int i;
    for(i = 0; tam < v; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
}

void preencervetorInt( int *v,int tam){
    int i;
    for (i = 0; i < tam; i++){
    printf("digit qualquer valor\n");
    scanf("%d", v + i);
    } 
}
int main (){
    
    int i, vet[10] = {1,2,3,4,5,6,7,8,9,10};

    preencervetorInt(vet,10);
    imprimirvet(vet,10);  

}