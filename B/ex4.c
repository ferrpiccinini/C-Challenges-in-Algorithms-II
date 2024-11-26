#include <stdio.h>
#include <math.h>

int X_KM_limite = 100;

int main(){
    int km;
    float valor_x, valor_y, valor;
    printf("insira os valores de ate %d km e pos tal limite, alem disso insira a distancia da corrida ", X_KM_limite);
    scanf("%f %f %d",&valor_x, &valor_y, &km);
    if (km>X_KM_limite){
        valor = km*valor_y;
        printf("valor da corrida: %.2f",valor);
    }
    else{
        valor = km*valor_x;
        printf("valor da corrida: %.2f",valor);
    }
   
}