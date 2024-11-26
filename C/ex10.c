#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; int n1;int mdc = 1;
    printf("insira dois numeros n1 n2(maior): ");
    scanf("%d %d",&n,&n1);

    for(int i = 1; i<n1; i++){
        if(n%i == 0 && n1%i == 0){
            mdc = i;
        }
    }
    printf("%d e o mdc",mdc);
}