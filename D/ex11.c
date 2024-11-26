#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int* listaA = (int*)malloc(sizeof(int)*999);
    int n; int num; int iA = 0;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    printf("insira o valor p num: ");
    scanf("%d",&num);

    for(int i = 0; i < n; i++){
        if(lista[i]>num){
            listaA[iA] = lista[i];
            iA++;
        }
    }

    printf("\n");
    for(int i = 0; i < iA; i++){
        printf("%d ",listaA[i]);
    }

    free(lista);
    free(listaA);
}