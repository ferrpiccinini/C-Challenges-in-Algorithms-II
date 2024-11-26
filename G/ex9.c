#include <stdio.h>

void decimalParaBinario(int numero) {
    if (numero == 0) {
        printf("0");
        return;
    }

    int binario[32]; 
    int indice = 0;

    while (numero > 0) {
        binario[indice] = numero % 2;
        numero /= 2;                 
        indice++;
    }

    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("numero invalido, apenas inteiros não negativos são permitidos.\n");
        return 1;
    }

    printf("O número em base binária é: ");
    decimalParaBinario(numero);
    printf("\n");

    return 0;
}
