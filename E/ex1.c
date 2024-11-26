#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[32];
    printf("\nInsira a palavra: ");
    fgets(palavra, 32, stdin);
    strtok(palavra, "\n");
    for(int i=0;palavra[i] != '\0'; i++){
        printf("%c ",palavra[i]);
    }
}