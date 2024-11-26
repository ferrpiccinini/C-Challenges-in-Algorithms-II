#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[32];char letra[2]; int size = 0;
    printf("\nInsira a palavra: ");
    fgets(palavra, 32, stdin);
    strtok(palavra, "\n");

    printf("\nInsira a letra: ");
    fgets(letra, 2, stdin);
    strtok(letra, "\n");
    
    for(int i=0;palavra[i] != '\0'; i++){
        if(letra[0] == palavra[i]) { 
            size++;
        }
    }
    printf("\nqnt: %d",size);
}