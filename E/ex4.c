#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func_palindromo(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char str2[32];
    int retorno = func_palindromo("ovo");
    printf("%d -> {retorno}",retorno);
}

