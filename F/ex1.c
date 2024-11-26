#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LINHAS 3
#define NUM_COLUNAS 3

int print_dinamica(int** matriz, int num_linhas, int num_colunas){
    for(int i = 0; i<num_linhas; i++){
        for(int j = 0; j<num_colunas; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int sequencia = 0;
    int** matriz;
    matriz = (int**)malloc(sizeof(int*)*NUM_LINHAS);
    for(int i = 0;i<NUM_LINHAS;i++){
        matriz[i] = (int*)malloc(sizeof(int)*NUM_COLUNAS);
    }

    for(int i = 0; i<NUM_LINHAS; i++){
        for(int j = 0; j<NUM_COLUNAS; j++){
            matriz[i][j] = sequencia;
            sequencia++;
        }
    }

    print_dinamica(matriz,NUM_LINHAS,NUM_COLUNAS);

    free(matriz);
}