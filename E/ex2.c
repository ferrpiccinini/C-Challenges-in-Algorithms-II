#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[32]; int size = 0;
    printf("\nInsira a palavra: ");
    fgets(palavra, 32, stdin);
    strtok(palavra, "\n");
    for(int i=0;palavra[i] != '\0'; i++){
        size++;
    }
    for(size;size >= 0; size--){
        printf("%c ",palavra[size]);
    }
}