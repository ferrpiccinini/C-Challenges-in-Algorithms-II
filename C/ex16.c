#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int choice; int times = 0;int soma = 0;
    printf("insira o numero p imprimirmos a soma dos primos entre ele: ");
    scanf("%d", &choice);
    
    for(int i=2; i<=choice; i++){
        for(int j = 1; j<=i; j++){
            if(i%j == 0){
                times++;
            }
        }
        if(times<=2){
            soma+=i;
        }
        times = 0;
    }
    printf("soma: %d",soma);
}