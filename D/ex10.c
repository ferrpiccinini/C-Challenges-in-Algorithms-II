#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* listaA = (int*)malloc(sizeof(int)*999);
    int* listaB = (int*)malloc(sizeof(int)*999);
    int n; int iA = 0; int iB = 0;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        int temp;
        printf("insira o num: ",i);
        scanf("%d",&temp);
        if(temp%2 == 0){
            listaA[iA] = temp;
            iA++;
        }
        else{
            listaB[iB] = temp;
            iB++;
        }
    }
    printf("\n");
    for(int i = 0; i < iA; i++){
        printf("%d ",listaA[i]);
    }
    printf("\n");
    for(int i = 0; i < iB; i++){
        printf("%d ",listaB[i]);
    }

    free(listaA);
    free(listaB);
}
