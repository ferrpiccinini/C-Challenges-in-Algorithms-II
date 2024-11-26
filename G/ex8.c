#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    strtok(s, "\n");

    int contador = 0;

    for (int i = 0; i < s[i] != '\0'; i++) {
        if(s[i] != 97 && s[i] != 101 && s[i] != 105 && s[i] != 111 && s[i] != 117 && s[i] != 32){
            contador++;
        }
    }
    printf("consoantes: %d", contador);
}
