#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int imin = 0; int imax = 0;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    int min = lista[0]; 
    int max = lista[0];

    for(int i = 0; i < n; i++){
        if(min>lista[i]){
            min = lista[i];
            imin = i;
        }
        if(max<lista[i]){
            max = lista[i];
            imax = i;
        }
    }

    int temp = lista[0];
    lista[0] = min;
    lista[imin]  = temp;

    temp = lista[n-1];
    lista[n-1] = max;
    lista[imax]  = temp;
        
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ",lista[i]);
    }

    free(lista);
}