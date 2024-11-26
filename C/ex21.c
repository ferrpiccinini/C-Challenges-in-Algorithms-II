#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int soma = 0; int a; int b = 10; int size = 0; int* vet;
    vet = (int*)malloc(sizeof(int)*999);
    scanf("%d",&a);
    int num = a;
    while(a>0){
        vet[size] = a%10;
        size++;
        a = num/b;
        b *= 10;
    }
    for(int i = 0; i<size; i++){
        soma += vet[i];
    }
    printf("soma: %d",soma);
    free(vet);
}