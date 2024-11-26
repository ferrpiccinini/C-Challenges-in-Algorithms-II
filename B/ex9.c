#include <stdio.h>
#include <math.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a,b,c;
    printf("insira valores p A,B,C");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>c) swap(&a,&c);
    if (a>b) swap(&a,&b);
    if (b>c) swap(&a,&b);
    
    printf("%d %d %d", a,b,c);
}