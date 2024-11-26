#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x; int y;
    printf("insira dois numeros x // y: ");
    scanf("%d %d", &x,&y);
    if(y<x){
        printf("impossivel fazer y e maior que x");
    }
    else{
        for(x; x<y+1; x++){
            printf("%d ",x);
        }
    }
    
}