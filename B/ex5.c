#include <stdio.h>
#include <math.h>

int main(){
    int ano;
    printf("insira o ano p detectarmos se e bissexto ou nao: ");
    scanf("%d",&ano);
    if(ano<0){
        printf("-1");
    }
    else if(ano%400 == 0){
        printf("1");
    }
    else if(ano%4 == 0 && ano%100 != 0){
        printf("1");
    }
    else{
        printf("0");
    }
}