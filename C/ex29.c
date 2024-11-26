#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a; int b = 10; int size = 0; int n_print = 0;
    int *vet_normal;
    int *vet_inverso;
    vet_normal = (int*)malloc(sizeof(int)*999);
    vet_inverso = (int*)malloc(sizeof(int)*999);
    printf("insira o numero ai amigao!: ");
    scanf("%d",&a);
    int num = a;
    while(a>0){
        vet_normal[size] = a%10;
        size ++;
        a = num/b;
        b *= 10;
    }
    for(int i = 0; i<size; i++){
        vet_inverso[i] = vet_normal[size-i-1];
        if(vet_normal[i] != vet_inverso[i]){
            printf("N");
            n_print = 1;
            break;
        }
    }
    if(n_print == 0){
        printf("S");
    }
}