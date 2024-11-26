#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* listaA = (int*)malloc(sizeof(int)*999);
    int* listaB = (int*)malloc(sizeof(int)*999);
    int* listaC = (int*)malloc(sizeof(int)*999);
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
    
    listaC[0] = listaA[0];

    for (int i = 0; i < n; i++) {
        listaC[2 * i] = listaA[i];       
        listaC[2 * i + 1] = listaB[i];   
    }

    printf("\n");

    for(int i = 0; i < n*2; i++){
        printf("%d ",listaC[i]);
    }

    free(listaA);
    free(listaB);
    free(listaC);
}