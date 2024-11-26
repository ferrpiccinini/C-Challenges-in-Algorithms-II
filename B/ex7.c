#include <stdio.h>
#include <math.h>

int main(){
    int a,b,temp;
    printf("insira valores p A e B: ");
    scanf("%d %d",&a,&b);
    while(a>b){
        temp = b;
        b = a;
        a = temp;
    }
    printf("%d %d",a,b);
}