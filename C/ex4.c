#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x; int y;int soma = 0;
    printf("insira x: ");
    scanf("%d", &x);
    printf("insira y: ");
    scanf("%d", &y);
    if(y<x){
        printf("impossivel fazer y e menor que x");
    }
    else{
        for(int i = x; i <= y; i++){
            soma += i;
        }
        printf("soma resultante = %d",soma);
    }
}