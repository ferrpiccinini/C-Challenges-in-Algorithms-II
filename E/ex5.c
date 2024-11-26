#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_index_size(char a, char* str_a, char* str_b){
    int lenA = 0;
    int lenB = 0;
    for(int i=0;i < strlen(str_a); i++){
        if(str_a[i] == a){
            lenA++;
        }
        if(str_b[i] == a){
            lenB++;
        }
    }
    if(lenA == lenB){
        return 1;
    }
    return 0;
}


int main(){
    char str1[32]; char str2[32];int printou = 0;
    printf("\nInsira a palavra1: ");
    fgets(str1, 32, stdin);
    strtok(str1, "\n");

    printf("\nInsira a palavra2: ");
    fgets(str2, 32, stdin);
    strtok(str2, "\n");

    if(strlen(str1) != strlen(str2)){
        printf("0");
    }
    else{
        for(int i=0;i < strlen(str1); i++){
            int retorno = str_index_size(str1[i],str1,str2);
            if(retorno == 0){
                printf("\nretorno: 0");
                printou = 1;
                break;
            }
        }
    }
    if(printou == 0){
        printf("\nretorno: 1");
    }
}