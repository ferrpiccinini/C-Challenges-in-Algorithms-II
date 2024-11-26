#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int seq = 0; int maior = 0;
    int n; int num; int size = 0; int* vet; int* vet_maiores;
    vet = (int*)malloc(sizeof(int)*999);
    vet_maiores = (int*)malloc(sizeof(int)*999);
    printf("insira a quantidade de numeros: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("insira o numero %d p entrar na lista: ",i);
        scanf("%d",&num);
        vet[size] = num;
        size++;
    }
    for(int i = 0;i<size;i++){
        seq = 0;
        for(int j = i+1;j<size; j++){
            if(vet[i] < vet[j]){
                seq++;
            }
            else{
                vet_maiores[i] = seq;
                break;
            }
        }
    }
    for(int i = 0;i<size;i++){
        if(maior < vet_maiores[i]){
            maior = vet_maiores[i];
        }
    }
    printf("\na maior seq eh: %d",maior+1);
}