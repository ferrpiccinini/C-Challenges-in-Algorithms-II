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
    
    int maior = lista[0];
    int pos = 0;

    for(int i = 1; i < n; i++){
        if(lista[i]>maior){
            maior = lista[i];
            pos = i;
        }
    }
    printf("\n");
    printf("maior: %d\npos: %d",maior,pos);

    free(lista);
}