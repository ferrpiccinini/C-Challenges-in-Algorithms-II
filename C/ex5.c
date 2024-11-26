#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int soma = 0;
    int pares = 0; 
    int impares = 0; 
    int x;
    printf("informe um numero: ");
    scanf("%d", &x);
    
    while(x != 0){
        if(x%2 == 0){
            pares += x;
        }
        else{
            impares += x;
        }
        soma += x;
        printf("informe um numero: ");
        scanf("%d", &x);
    }
    printf("pares: %d ",pares);
    printf("impares: %d ",impares);
    printf("soma total: %d ",soma);
}