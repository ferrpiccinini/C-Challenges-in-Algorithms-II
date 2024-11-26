#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* soma_listas(int* A, int* B, int max){
    int* c = (int*)malloc(sizeof(int)*max);
    for(int i = 0; i<max; i++){
        c[i] = A[i]+B[i];
    }
    return c;
}

int main(){
    int* listaA = (int*)malloc(sizeof(int)*999);
    int* listaB = (int*)malloc(sizeof(int)*999);
    int n;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&listaA[i]);
    }

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&listaB[i]);
    }

    int* lista = soma_listas(listaA,listaB,n);


    for(int i = 0; i < n; i++){
        printf("%d ",lista[i]);
    }

    free(listaA);
    free(listaB);
    free(lista);
}