#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int X;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    printf("insira o valor de X: ");
    scanf("%d",&X);

    
    for(int i = 0; i<n; i++){
        if(lista[i] == X){
            for(int j = i; j<n; j++){
                lista[j] = lista[j+1];
            }
            n--;
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",lista[i]);
    }

    free(lista);
}