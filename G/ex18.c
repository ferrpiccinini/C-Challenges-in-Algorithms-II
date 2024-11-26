#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int somaFatoriais(int n) {
    int soma = 0;
    for (int i = 0; i <= n; i++) {
        soma += fatorial(i);
    }
    return soma;
}

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser não-negativo.\n");
        return 1;
    }

    int soma = somaFatoriais(N);

    printf("Soma dos fatoriais de 0 até %d: %d\n", N, soma);

    return 0;
}
