#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcular_pontos(int lances[], int total_lances) {
    int pontuacao = 0;
    int rodada = 0;

    for (int frame = 1; frame <= 10; frame++) {
        if (lances[rodada] == 10) { 
            pontuacao += 10 + lances[rodada + 1] + lances[rodada + 2];
            rodada++; 
        } else if (lances[rodada] + lances[rodada + 1] == 10) { 
            pontuacao += 10 + lances[rodada + 2];
            rodada += 2; 
        } else { 
            pontuacao += lances[rodada] + lances[rodada + 1];
            rodada += 2; 
        }
    }

    return pontuacao;
}



int main(){
    int lances[21] = {0}; 
    int rodada = 0;       
    int frame = 1;        
    int lance;          

    while (frame <= 10) {
        printf("frame %d - lance 1: ", frame);
        scanf("%d", &lance);
        lances[rodada++] = lance;

        if (frame < 10) {
            if (lance == 10) {
                frame++;
                continue;
            } else {
                printf("frame %d - lance 2: ", frame);
                scanf("%d", &lance);
                lances[rodada++] = lance;
            }
        } else {
            if (lance == 10) {
                printf("frame 10 - lance 2: ");
                scanf("%d", &lance);
                lances[rodada++] = lance;

                printf("frame 10 - lance 3: ");
                scanf("%d", &lance);
                lances[rodada++] = lance;
            } else {
                printf("frame 10 - lance 2: ");
                scanf("%d", &lance);
                lances[rodada++] = lance;

                if (lances[rodada - 2] + lances[rodada - 1] == 10) {
                    printf("frame 10 - lance 3: ");
                    scanf("%d", &lance);
                    lances[rodada++] = lance;
                }
            }
        }
        frame++;
    }

    printf("\n\n");

    for(int i = 0; i<rodada; i++){
        if(i < rodada-3){
            if(lances[i] == 10){
                printf("X ");
                printf("_ ");
            }else if(lances[i] + lances[i+1] == 10){
                printf("%d ",lances[i]);
                i++;
                printf("/ ");
            }
            else{
                printf("%d ",lances[i]);
                i++;
                printf("%d ",lances[i]);
            }
            printf("| ");
        }
        else{
            if(frame == 11){
                if(lances[i] + lances[i+1] == 10 && lances[i] != 10){
                    printf("%d ",lances[i]);
                    printf("/ ");
                    i++;
                }
                else if(lances[i] == 10){
                    printf("X ");
                }
                else{
                    printf("%d ",lances[i]);
                }
            }
            else{
                printf("%d ",lances[i]);
                i++;
                printf("%d ",lances[i]);
            }
        }
    }
    int retorno = calcular_pontos(lances,rodada);
    printf("\npontuaçao: %d",retorno);
}