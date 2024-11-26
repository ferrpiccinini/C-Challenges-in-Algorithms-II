#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a = 0; int b;int choice;
    printf("insira o A: ");
    scanf("%d", &a);
    choice = a;
    printf("insira o numero B: ");
    scanf("%d", &b);
    for(int i=1; i<b; i++){
        a += choice;
    }
    printf("soma: %d",a);
}