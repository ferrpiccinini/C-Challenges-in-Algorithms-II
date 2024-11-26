#include <stdio.h>

int calcularTamanho(char s[]) {
    int tamanho = 0;
    while (s[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, 100, stdin);
    strtok(s, "\n");
    int tamanho = calcularTamanho(s);

    printf("Quantidade de caracteres: %d\n", tamanho);

    return 0;
}
