#include <stdio.h>

int binario_pdecimal(const char *binario) {
    int decimal = 0;
    int potencia = 1; 

    int tamanho = 0;
    while (binario[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += potencia;
        } else if (binario[i] != '0') {
            printf("Entrada inválida: %s\n", binario);
            return -1;
        }
        potencia *= 2;
    }

    return decimal;
}

int main() {
    char binario[33];

    printf("Digite um número binário (até 32 bits): ");
    scanf("%32s", binario);

    int decimal = binarioParaDecimal(binario);

    if (decimal != -1) {
        printf("O número em base decimal é: %d\n", decimal);
    }

    return 0;
}
