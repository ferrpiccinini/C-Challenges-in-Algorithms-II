#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int validarData(struct Data d) {
    if (d.ano < 1 || d.mes < 1 || d.mes > 12 || d.dia < 1) {
        return 0;
    }

    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((d.ano % 4 == 0 && d.ano % 100 != 0) || (d.ano % 400 == 0)) {
        diasPorMes[1] = 29;  // Ajuste para fevereiro
    }

    if (d.dia > diasPorMes[d.mes - 1]) {
        return 0;
    }

    return 1;
}

void imprimirData(struct Data d) {
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("%02d de %s de %d\n", d.dia, meses[d.mes - 1], d.ano);
}

int main() {
    int N;
    
    printf("Digite o número de datas: ");
    scanf("%d", &N);
    
    struct Data data;
    
    for (int i = 0; i < N; i++) {
        printf("Digite a data no formato dd/mm/aaaa: ");
        if (scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano) != 3) {
            printf("DATA INVALIDA\n");
            while(getchar() != '\n');
            continue;
        }

        if (validarData(data)) {
            imprimirData(data);
        } else {
            printf("DATA INVALIDA\n");
        }
    }

    return 0;
}
