#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; int choice;
    int rep = 0;
    printf("insira o numero escolhido: ");
    scanf("%d", &n);
    choice = n;

    while(n >= 0){
        scanf("%d", &n);
        if(n == choice){
            rep++;
        }
    }
    printf("apareceu %d vezes",rep);
}