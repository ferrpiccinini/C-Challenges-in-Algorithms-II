#include <stdio.h>
#include <string.h>

void gerarFitaComplementar(const char *fitaOriginal, char *fitaComplementar) {
    int i = 0;
    while (fitaOriginal[i] != '\0') {
        if (fitaOriginal[i] == 'A') {
            fitaComplementar[i] = 'T';
        } else if (fitaOriginal[i] == 'T') {
            fitaComplementar[i] = 'A';
        } else if (fitaOriginal[i] == 'C') {
            fitaComplementar[i] = 'G';
        } else if (fitaOriginal[i] == 'G') {
            fitaComplementar[i] = 'C';
        }
        i++;
    }
    fitaComplementar[i] = '\0';
}

int main() {
    char fitaOriginal[101], fitaComplementar[101];

    printf("Digite a fita de DNA: ");
    scanf("%100s", fitaOriginal);

    gerarFitaComplementar(fitaOriginal, fitaComplementar);

    printf("Fita original:      %s\n", fitaOriginal);
    printf("Fita complementar:  %s\n", fitaComplementar);

    return 0;
}