#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("\ncoloque dois numeros");
    scanf("%d %d",&a,&b);
    float media_r = a/(float)b; int media_i = a/(int)b; int resto = a%(int)b;
    printf("%.2f %d %d", media_r, media_i, resto);
}