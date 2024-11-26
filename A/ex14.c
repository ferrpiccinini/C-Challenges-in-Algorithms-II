#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("digite o numero");
    scanf("%d",&num);
   
    while(num){
        printf("%d",num%10);
        num /= 10;
    }
}