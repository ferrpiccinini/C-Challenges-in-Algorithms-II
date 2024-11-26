#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int temp_acima_media(int* lista, int max){
    int media = 0; int n = 0;
    for(int i = 0; i<=max; i++){
        media += lista[i];
    }
    media /= 7;
    for(int i = 0; i<=max; i++){
        if(lista[i]>media){
            n++;
        }
    }
    return n;
}


int main(){
    int lista[] = {1,2,3,4,5,6,7};
    int retorno = temp_acima_media(lista, 6);
    printf("dias: %d",retorno);
}