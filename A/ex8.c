#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("\ncoloque dois numeros");
    scanf("%d %d",&a,&b);
    int hipo = sqrt((a*a)+(b*b));
    printf("%d",hipo);
}