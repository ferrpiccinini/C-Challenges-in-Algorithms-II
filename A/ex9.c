#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("\ncoloque dois numeros");
    scanf("%d %d %d",&a,&b,&c);
    int delta = (b*b)-(4*a*c);
    int x1 = (-b+sqrt(delta))/2*a;
    int x2 = (-b-sqrt(delta))/2*a;
    printf("%d %d",x1,x2);
}