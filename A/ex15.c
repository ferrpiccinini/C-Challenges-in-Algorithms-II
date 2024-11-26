#include <stdio.h>
#include <math.h>

int main(){
    int hab_total,votos_brancos,votos_nulos,votos_validos,ausentes;
    printf("insira os habitantes, votos validos, votos brancos e nulos: ");
    scanf("%d %d %d %d", &hab_total,&votos_validos,&votos_brancos,&votos_nulos);
    ausentes = hab_total-(votos_brancos+votos_nulos+votos_validos);
    printf("votos validos sao %.2f%% votos nulos sao %.2f%% votos brancos sao %.2f%% e ausentes sao %.2f%%",hab_total*(votos_validos/100.0), hab_total*(votos_nulos/100.0), hab_total*(votos_brancos/100.0), hab_total*(ausentes/100.0));
    
}