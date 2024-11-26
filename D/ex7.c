#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    for(int i = 0; i<n; i++){
        if(i+2>n){
            break;
        }
        else{
            int temp = lista[i+1];
            lista[i+1] = lista[i];
            lista[i] = temp;
            i++;
        }
    }

    printf("\n");


    for(int i = 0; i < n; i++){
        printf("%d ",lista[i]);
    }

    free(lista);
}