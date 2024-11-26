#include <stdio.h>

int main() {
    int N, X, posicao = -1;

    printf("Digite o tamanho do vetor N: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite os %d valores do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser buscado (X): ");
    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (vetor[i] == X) {
            posicao = i;  
            break;        
        }
    }

    printf("Posição de X: %d\n", posicao);

    return 0;
}