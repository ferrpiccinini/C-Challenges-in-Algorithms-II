#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LINHAS 3
#define NUM_COLUNAS 3

int print_dinamica(int** matriz, int num_linhas, int num_colunas){
    int soma = 0;
    for(int i = 0; i<num_linhas; i++){
        for(int j = 0; j<num_colunas; j++){
            soma += matriz[i][j];
        }
        printf("%d",soma);
        printf("\n");
        soma = 0;
    }
}

int main(){
    int num = 0;
    int** matriz;
    matriz = (int**)malloc(sizeof(int*)*NUM_LINHAS);
    for(int i = 0;i<NUM_LINHAS;i++){
        matriz[i] = (int*)malloc(sizeof(int)*NUM_COLUNAS);
    }

    for(int i = 0; i<NUM_LINHAS; i++){
        for(int j = 0; j<NUM_COLUNAS; j++){
            printf("insira o numero da pos %d %d: ",i,j);
            scanf("%d",&num);
            matriz[i][j] = num;
        }
    }

    print_dinamica(matriz,NUM_LINHAS,NUM_COLUNAS);

    free(matriz);
}