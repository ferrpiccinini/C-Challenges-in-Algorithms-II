#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n_max; int choice; int max; int min; int soma = 0;
    printf("insira a quantia max de numeros: ");
    scanf("%d", &n_max);

    printf("insira o num: ");
    scanf("%d",&soma);

    min = soma;
    max = soma;
    for(int i = n_max-1; i>0; i--){
        printf("insira o num: ");
        scanf("%d", &choice);

        if(max<choice){
            max = choice;
        }
        else if(min>choice){
            min = choice;
        }
        
        soma += choice;
    }
    printf("%d maior num %d menor num e soma = %d",max,min,soma);
}