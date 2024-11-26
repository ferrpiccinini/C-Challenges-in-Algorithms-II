#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int* listan = (int*)malloc(sizeof(int)*999);
    int* listam = (int*)malloc(sizeof(int)*999);
    int* listac = (int*)malloc(sizeof(int)*999);
    int n; int m;
    int j = 0; int k = 0;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&listan[i]);
    }

    printf("insira o valor M: ");
    scanf("%d",&m);

    for(int i = 0; i < m; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&listam[i]);
    }

    int i = 0;
    if(n>m){
        while(j < m) {
            listac[i++] = listan[j++];
            listac[i++] = listam[k++];
        }
    }

    else{
        while(k < n) {
            listac[i++] = listam[k++];
            listac[i++] = listan[j++];
        }
    }

    while(j < n) {
        listac[i++] = listan[j++];
    }

    while(k < m) {
        listac[i++] = listam[k++];
    }

    printf("\n\n");
    for(int i=0;i<n+m;i++){
        printf("%d ",listac[i]);
    }

    free(listan);
    free(listam);
    free(listac);
}