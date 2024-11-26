#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num_linhas; int num_colunas;
    int num = 0;
    int** matriz;
    int soma = 0;
    printf("insira o numero de linhas e colunas: ");
    scanf("%d %d", &num_linhas, &num_colunas);
    matriz = (int**)malloc(sizeof(int*)*num_linhas);
    for(int i = 0;i<num_linhas;i++){
        matriz[i] = (int*)malloc(sizeof(int)*num_colunas);
    }
    for(int i = 0; i<num_linhas; i++){
        for(int j = 0; j<num_colunas; j++){
            printf("insira o numero da pos %d %d: ",i,j);
            scanf("%d",&num);
            matriz[i][j] = num;
        }
    }

    for(int i = 0; i<num_linhas; i++){
        for(int j = 0; j<num_colunas; j++){
            soma += matriz[j][i];
        }
        printf("\n%d",soma);
        soma = 0;
    }   
}