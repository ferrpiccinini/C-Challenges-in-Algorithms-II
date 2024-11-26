#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    char sexo;
    char registro[20];
    char dataIngresso[12];
    char curso[100];
};

void exibirAluno(struct Aluno aluno, int registro) {
    printf("Registro %d:\n", registro);
    printf("Nome: %s - Sexo: %s - RA: %s\n", aluno.nome, aluno.sexo, aluno.registro);
    printf("Ingresso: %s - Curso: %s\n", aluno.dataIngresso, aluno.curso);
    printf("==========\n");
}

int main() {
    struct Aluno alunos[100];
    int contador = 0;

    while (1) {
        printf("Digite o nome do aluno (ou 'FIM' para terminar): ");
        fgets(alunos[contador].nome, sizeof(alunos[contador].nome), stdin);
        alunos[contador].nome[strcspn(alunos[contador].nome, "\n")] = '\0';

        if (strcmp(alunos[contador].nome, "FIM") == 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &alunos[contador].sexo);
        getchar(); 

        printf("Digite o registro acadêmico (RA): ");
        fgets(alunos[contador].registro, sizeof(alunos[contador].registro), stdin);
        alunos[contador].registro[strcspn(alunos[contador].registro, "\n")] = '\0';

        printf("Digite a data de ingresso (dd/mm/aaaa): ");
        fgets(alunos[contador].dataIngresso, sizeof(alunos[contador].dataIngresso), stdin);
        alunos[contador].dataIngresso[strcspn(alunos[contador].dataIngresso, "\n")] = '\0';

        printf("Digite o nome do curso: ");
        fgets(alunos[contador].curso, sizeof(alunos[contador].curso), stdin);
        alunos[contador].curso[strcspn(alunos[contador].curso, "\n")] = '\0';

        contador++;
    }

    for (int i = 0; i < contador; i++) {
        exibirAluno(alunos[i], i + 1);
    }

    return 0;
}
