#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("coloque dois numeros");
    scanf("%d %d",&a,&b);
    int soma = a+b; int sub = a-b; int mult = a*b;
    printf("\n%d\n%d\n%d",soma,sub,mult);
}