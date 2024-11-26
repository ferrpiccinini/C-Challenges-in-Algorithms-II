#include <stdio.h>
#include <math.h>

int main(){
    int idade;
    printf("insira a idade do eleitor: ");
    scanf("%d",&idade);
    if (idade >= 16 && idade < 18){
        printf("eleitor facultativo");
    }
    else if (idade>=18 && idade < 70){
        printf("OBRIGATORIO");
    }
    else {
        printf("DISPENSADO");
    }
    
    //acredito que de pra escrever melhor, utilzando apenas 3 if's
    // att - escrevi com 3 ifs mas acho que de p melhorar mais 
}