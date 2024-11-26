#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; int choice;
    printf("insira o numero escolhido: ");
    scanf("%d", &choice);
    while(n>=0){
        printf("insira o numero escolhido: ");
        scanf("%d", &n);
        if(n>choice){
            choice = n;
        }
    }
    printf("%d maior num",choice);
}