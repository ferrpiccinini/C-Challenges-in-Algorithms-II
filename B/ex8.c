#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("insira valores p A,B,C");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
    }
    else if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}