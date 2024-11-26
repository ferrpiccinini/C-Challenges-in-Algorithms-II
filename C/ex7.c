#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; int n1;
    printf("insira um numero N: ");
    scanf("%d",&n);
    int choice = n;


    printf("insira seu expoente: ");
    scanf("%d",&n1);


    for(int i = 1;i<n1;i++){
        n *= choice;
    }

    printf("%d",n);
}