#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num; int x;
    printf("insira o numero p ver se eh perfeito: ");
    scanf("%d",&num);
    for(int i = 1; i<num; i++){
        if((i+(i+1)+(i+2)) == num){
            printf("S");
            x = 1;
            break;
        } 
    }
    if(x != 1){
        printf("N");
    }
}