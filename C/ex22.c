#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int not_end = 1;
    int x1;int v1;
    int x2;int v2;
    printf("insira o x1 e o v1: ");
    scanf("%d %d",&x1,&v1);
    printf("insira o x2 e o v2: ");
    scanf("%d %d",&x2,&v2);
    while(not_end == 1){
        x1 += v1;
        x2 += v2;
        if(x2 == x1){
            printf("SIM");
            not_end = 0;
        }
        if(x1 > x2 && v1 > v2){
            printf("NAO");
            not_end = 0;
        }
        if(x2 > x1 && v2 > v1){
            printf("NAO");
            not_end = 0;
        }
    }
}