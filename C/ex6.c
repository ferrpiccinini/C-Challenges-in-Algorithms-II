#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float choice; float num = 0;
    printf("insira um numero N: ");
    scanf("%f",&choice);
    num += 1;
    for(float i = 2; i<=choice; i++){
        num += 1.0/i;
    }
    printf("%.4f", num);
}