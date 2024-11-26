#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;

    printf("insira um numero N: ");
    scanf("%d",&n);
    int fatorial = n;


    for(int i = n-1; i>0; i--){
        fatorial *= i;
    }

    printf("%d", fatorial);
}