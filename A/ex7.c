#include <stdio.h>
#include <math.h>

int main(){
    float a,b;
    printf("\ncoloque dois numeros");
    scanf("%f %f",&a,&b);
    float IMC = a/(b*b);
    printf("%.2f",IMC);
}