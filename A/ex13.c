#include <stdio.h>
#include <math.h>

int main(){
    int segundos_i,dias,horas,minutos,segundos;
    printf("digite os segundos: ");
    scanf("%d",&segundos_i);
    dias = segundos_i/86400;
    segundos_i %= 86400;
    horas = segundos_i/3600;
    segundos_i %= 3600;
    minutos = segundos_i/60;
    segundos_i %= 60;
    segundos = segundos_i;
    printf("seus segundos da %d dias %d horas %d minutos e %d segundos.",dias,horas,minutos,segundos);
    
}