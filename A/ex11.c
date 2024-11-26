#include <stdio.h>
#include <math.h>

int main(){
    float salario_f;
    int salario,vendas;
    printf("adicione o salario e a quantia de vendas do vendedor x");
    scanf("%d %d",&salario,&vendas);
    salario_f = salario+(vendas*0.18);
    printf("o salario do vendedor foi %.2f",salario_f);
}