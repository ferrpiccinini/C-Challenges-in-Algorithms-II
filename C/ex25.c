#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *lista_cresc; int *lista_descresc; int *lista_padrao; int retorno;
    int n; int num; int size = 0; int temp;
    int x_vezes = 0;
    lista_cresc = (int*)malloc(sizeof(int)*999);
    lista_descresc = (int*)malloc(sizeof(int)*999);
    lista_padrao = (int*)malloc(sizeof(int)*999);
   

    printf("insira a quantidade de numeros: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("insira o numero %d p entrar na lista: ",i);
        scanf("%d",&num);
        lista_cresc[size] = num;
        lista_descresc[size] = num;
        lista_padrao[size] = num;
        size++;
    }

    for(int i = 0; i<size;i++){
        for(int y = 0;y<size;y++){
            if(lista_cresc[i] < lista_cresc[y]){
                temp = lista_cresc[i];
                lista_cresc[i] = lista_cresc[y];
                lista_cresc[y] = temp;
            }
        }
    }
    for(int i = 0; i<size;i++){
        for(int y = 0;y<size;y++){
            if(lista_descresc[i] > lista_descresc[y]){
                temp = lista_descresc[i];
                lista_descresc[i] = lista_descresc[y];
                lista_descresc[y] = temp;
            }
        }
    }
    for(int i = 0; i<size; i++){
        if(lista_padrao[i] == lista_cresc[i]){
            continue;
        }
        x_vezes++;
        break;
    }
    if(x_vezes == 0){
        printf("1");
    }
    else{
        x_vezes = 0;
        for(int i = 0; i<size; i++){
            if(lista_padrao[i] == lista_descresc[i]){
                continue;
            }
            x_vezes++;
            break;
        }
        if(x_vezes == 0){
            printf("-1");
        }
        else{
            printf("0");
        }
    }
}