#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remover(int* vet, int num, int* size) {
    for (int i = 0; i < *size; i++) {
        if(vet[i] == num){
            for (int y = i; y < *size; y++) {
                vet[y] = vet[y + 1];
            }
            (*size)--;
            return "";
        }
    }
}

int main(){
    int maiores[2]; int maiores_size = 0;
    int n;int num;
    int *vet; int size = 0;
    vet = (int*)malloc(sizeof(int)*999);
    printf("insira a quantidade de numeros: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("insira o numero %d p entrar na lista: ",i);
        scanf("%d",&num);
        vet[size] = num;
        size++;
    }
    while(maiores_size != 2){
        int maior = 0;
        for(int i = 0;i<size;i++){
            if(maior < vet[i]){
                maior = vet[i];
            }
        }
        remover(vet,maior,&size);
        maiores[maiores_size] = maior;
        maiores_size++;
    }   
    printf("Os dois maiores numeros: %d %d !",maiores[0],maiores[1]);
    free(vet);
}