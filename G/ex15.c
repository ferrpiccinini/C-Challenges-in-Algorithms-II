#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int raizQuadrada(int num) {
    int estimativa = num;
    int precisao = 1;  
    int resultado = 0;

    if (num < 0) return -1;  

    while (estimativa * estimativa > num) {
        estimativa = (estimativa + num / estimativa) / 2;
    }

    return estimativa;
}

int calcularDistancia(struct Ponto p1, struct Ponto p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    int distanciaAoQuadrado = dx * dx + dy * dy;
    return raizQuadrada(distanciaAoQuadrado);
}

int main() {
    struct Ponto p1, p2;

    printf("Digite as coordenadas do ponto P1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Digite as coordenadas do ponto P2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    int distancia = calcularDistancia(p1, p2);

    printf("Distância euclidiana entre P1 e P2: %d\n", distancia);

    return 0;
}
