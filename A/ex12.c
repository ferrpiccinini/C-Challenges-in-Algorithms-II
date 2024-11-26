#include <stdio.h>
#include <math.h>

int main(){
    float valor,rendimento;
    int largura,altura,latas,total;
    printf("insira a largura e altura da parede: ");
    scanf("%d %d",&largura,&altura);

    printf("insira o valor e rendimento da lata de tinta colega: ", &valor,&rendimento);
    scanf("%f %f",&valor,&rendimento);

    total = valor*(ceil((largura*altura)/rendimento));
    latas = total/valor;

    printf("voce tera que comprar %d latas e pagara %d reais", latas,total);

}