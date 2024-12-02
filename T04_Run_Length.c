#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void limpar_buffer(FILE *arquivo) {
    while (fgetc(arquivo) != '\n') {}
}

void expandir_dados(FILE *entrada, FILE *saida) {
    char linha[128];
    while (fgets(linha, sizeof(linha), entrada)) {
        for (int i = 0; i < strlen(linha); i++) {
            if (linha[i] != ' ' && linha[i] != '@') {
                char valor[3] = {linha[i], '\0'};
                if (linha[i + 1] != ' ') {
                    valor[1] = linha[++i];
                }
                fprintf(saida, "%s ", valor);
            } else if (linha[i] == '@') {
                i += 2; 
                char elemento[3] = {linha[i], '\0'};
                if (linha[i + 1] != ' ') {
                    elemento[1] = linha[++i];
                }
                i += 2; 
                char qtd_str[3] = {linha[i], '\0'};
                if (linha[i + 1] != ' ') {
                    qtd_str[1] = linha[++i];
                }
                int quantidade = atoi(qtd_str);
                for (int j = 0; j < quantidade; j++) {
                    fprintf(saida, "%s ", elemento);
                }
            }
        }
        fprintf(saida, "\n");
    }
}

void compactar_dados(FILE *entrada, FILE *saida) {
    char linha[128];
    while (fgets(linha, sizeof(linha), entrada)) {
        for (int i = 0; i < strlen(linha); i++) {
            if (linha[i] == ' ' || linha[i] == '\n') continue;

            char elemento[3] = {linha[i], '\0'};
            if (linha[i + 1] != ' ' && linha[i + 1] != '\n') {
                elemento[1] = linha[++i];
            }

            int contador = 1;
            int j = i + 2;
            while (j < strlen(linha) && linha[j] == elemento[0]) {
                contador++;
                if (elemento[1] == '\0') {
                    j += 2;
                } else {
                    j += 3;
                }
            }

            if (contador > 3) {
                fprintf(saida, "@ %s %d ", elemento, contador);
            } else {
                for (int k = 0; k < contador; k++) {
                    fprintf(saida, "%s ", elemento);
                }
            }

            i = j - 2;
        }
        fprintf(saida, "\n");
    }
}

void processar_cabecalho(FILE *entrada, FILE **saida) {
    char tipo[3];
    fscanf(entrada, "%s", tipo);

    if (strcmp(tipo, "P8") == 0) {
        *saida = fopen("resultado.pgm", "w");
        fprintf(*saida, "P2\n");
    } else {
        *saida = fopen("resultado.pgmc", "w");
        fprintf(*saida, "P8\n");
    }

    int largura, altura, max_valor;
    fscanf(entrada, "%d %d %d", &largura, &altura, &max_valor);
    fprintf(*saida, "%d %d\n%d\n", largura, altura, max_valor);

    if (strcmp(tipo, "P8") == 0) {
        expandir_dados(entrada, *saida);
    } else {
        compactar_dados(entrada, *saida);
    }
}

int main() {
    //nome do arquivo aqui -->
    char arquivo_entrada[] = "exemplo1.pgm";
    FILE *entrada = fopen(arquivo_entrada, "r");
    if (!entrada) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    FILE *saida = NULL;
    processar_cabecalho(entrada, &saida);

    fclose(entrada);
    if (saida) {
        fclose(saida);
    }

    return EXIT_SUCCESS;
}
