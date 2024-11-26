#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int choice; int times = 1;int soma = 0;
    printf("insira o numero p imprimirmos a soma dos fatoriais entre ele: ");
    scanf("%d", &choice);
    
    for(int i=choice; i>=1; i--){
        for(int j = i; j>=1; j--){
            times *= j;
        }
        soma+=times;
        times = 1;
    }
    printf("soma: %d",soma+1);
}