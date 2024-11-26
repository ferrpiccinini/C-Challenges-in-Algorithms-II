#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mult(int base, int vezes){
    int choice = base;
    for(int i=1; i<vezes; i++){
        base += choice;
    }
    return base;
}

int main(){
    int a = 0; int b;
    printf("insira o A: ");
    scanf("%d", &a);
    printf("insira o B(expoente): ");
    scanf("%d", &b);
    int resultado = a;
    for(int i=1; i<b; i++){
        resultado = mult(resultado,a);
    }
    printf("\rresultado: %d",resultado);
}