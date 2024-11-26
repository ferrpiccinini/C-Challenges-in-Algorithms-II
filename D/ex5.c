#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int index_fun(int* lista, int num, int max){
    int n = 0;
    for(int i = 0; i < max; i++){
        if(lista[i] == num){
            n++;
        }
    }
    return n;
}


int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int x;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    printf("insira o valor de x: ");
    scanf("%d",&x);

    int retorno = index_fun(lista,x,n);
    printf("\n");
    printf("%d",retorno);
    
    free(lista);
}