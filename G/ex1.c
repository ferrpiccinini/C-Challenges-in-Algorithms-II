#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int X; int I;

    printf("insira o valor N: ");
    scanf("%d",&n);

    printf("insira o valor de X e a pos I: ");
    scanf("%d %d",&X,&I);
    if(I<0){
        printf("Invalido");
    }
    else{
        if(I >= n){
            I = n-1;
        }
        for(int i = 0; i < n; i++){
            if(i != I){
                printf("insira o num na pos %d: ",i);
                scanf("%d",&lista[i]);
            }
            else{
                lista[I] = X;
            }
        }
    }












    free(lista);
}