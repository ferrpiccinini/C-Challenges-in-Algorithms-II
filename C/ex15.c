#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int choice; int times = 0;
    printf("insira p detectar se e primo: ");
    scanf("%d", &choice);
    
    for(int i = 1; i<choice; i++){
        if(choice%i == 0){
            times++;
        }
    }
    if(times>1){
        printf("0");
    }
    else{
        printf("1");
    }
}