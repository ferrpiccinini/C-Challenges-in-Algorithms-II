#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int l; int j; int num = 0;
    int printed = 0;
    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    printf("insira o valor l: ");
    scanf("%d",&l);
    
    printf("insira o valor j: ");
    scanf("%d",&j);

    if(l>j){
        int temp = j;
        j = l;
        l = temp;
    }
    if(j<=n && l>0){
        for(int i = 0; i<n; i++){
            if(i > j){
                break;
            }
            else if(i >= l){
                num += lista[i];
            }
        }

        printf("\n");
        printf("soma: %d",num);
    }
    else{
        printf("INVALIDO");
    }

    free(lista);
}