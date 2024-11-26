#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; 
    int fn0 = 1;
    int fn1 = 1;
    int fn2;

    printf("insira um numero N: ");
    scanf("%d",&n);

    if (n == 1) {
        printf("%d\n", fn0); 
    } else if (n >= 2) {
        printf("%d %d ", fn0, fn1);
        for(int i = 1; i<n; i++){
            fn2 = fn0 + fn1;
            fn0 = fn1;
            fn1 = fn2;
            printf("%d ", fn2);
        }
    }
}