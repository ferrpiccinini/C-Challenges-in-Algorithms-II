#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int idade;int idadex;int maior;int qnt = 0;
    printf("insira a idade da sua prima: ");
    scanf("%d",&idade);
    int vet[idade];
    for(int i = 0; i < idade; i++){
        printf("insira a pos %d: ",i);
        scanf("%d",&idadex);
        vet[i] = idadex;
    }
    maior = vet[0];
    for(int i = 0; i<idade; i++){
        for(int y = i; y<idade; y++){
            if(vet[y] > maior){
                maior =  vet[y];
            }
        }
    }
    for(int i = 0; i < idade; i++){
        if(vet[i] == maior){
            qnt ++;
        }
    }
    printf("quantidade: %d",qnt);
}