#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_dinamica(int** matriz, int num_linhas, int num_colunas){
    for(int i = 0; i<num_linhas; i++){
        for(int j = 0; j<num_colunas; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int** matriz; int num;
    int NUM_LINHAS;
    int NUM_COLUNAS;
    printf("insira o numero de linhas e colunas: ");

    scanf("%d %d", &NUM_LINHAS, &NUM_COLUNAS);
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
    printf("\n");
    for(int i = 0; i<NUM_LINHAS; i++){
        for(int j = 0; j<NUM_COLUNAS; j++){
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
    free(matriz);
}