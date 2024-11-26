#include <stdio.h>
#include <math.h>

int main(){
    float a,b,media;
    char nome[20];
    
    printf("\ncoloque dois numeros");
    scanf("%f %f",&a,&b);

    printf("\ndigite o nome do aluno");
    scanf("%s",nome);

    media = (a+b)/2.0;
    printf("\n%s obteve %f de media",nome,media);
}