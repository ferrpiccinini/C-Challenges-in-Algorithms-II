#include <stdio.h>
#include <math.h>

int main(){
int a,b;
    printf("\ncoloque dois numeros");
    scanf("%d %d",&a,&b);
    float perc = a-a*(b/100.0);
    printf("%f",perc);
}