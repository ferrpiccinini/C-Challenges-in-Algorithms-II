#include <stdio.h>
#include <math.h>

int main(){
    float c;
    printf("digite os graus p serem convertidos");
    scanf("%f", &c);
    float celsius_f = (c*9/5)+32.0;
    printf("%f em farenheit é: %.2f",c,celsius_f);
}