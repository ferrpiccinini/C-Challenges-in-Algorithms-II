#include <stdio.h>
#include <stdlib.h>

void remove_func(int* lista,int index, int* n_pessoas, int* qnt, int* x_pessoa){
    int num = lista[index];
    for(int i = index; i < *n_pessoas; i++){
        lista[i] = lista[i+1];
    }
    (*n_pessoas)--;
    (*qnt)++;
    if (*qnt == *x_pessoa) {
        printf("\nEliminacao %d: %d", *qnt,num);
    }
}

int main(){
    int n_pessoas; 
    int x_pessoa; 
    int qnt = 0;
    printf("insira a quantidade de pessoas: ");
    scanf("%d", &n_pessoas);
    printf("insira a x-esima pessoa: ");
    scanf("%d", &x_pessoa);
    int lista[n_pessoas];

    for(int i = 0; i<n_pessoas; i++){
        lista[i] = i+1;
    }
    int index = 1;
    while(n_pessoas > 1){
        remove_func(lista, index, &n_pessoas, &qnt, &x_pessoa);
        if(index+1 > n_pessoas){
            index = 1;
        }else if(index+1 == n_pessoas){
            index = 0;
        }else{
            index +=1;
        }
    }
    printf("\nVencedora: %d", lista[0]);
}