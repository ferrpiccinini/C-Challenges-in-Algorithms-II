#include <stdio.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto p1;
    struct Ponto p2;
};

float calcularArea(struct Retangulo ret) {
    float largura = ret.p2.x - ret.p1.x;
    float altura = ret.p2.y - ret.p1.y;

    if (largura < 0) largura = -largura;
    if (altura < 0) altura = -altura;

    return largura * altura;
}

int main() {
    struct Retangulo ret;

    printf("Digite as coordenadas do ponto P1 (x y): ");
    scanf("%f %f", &ret.p1.x, &ret.p1.y);

    printf("Digite as coordenadas do ponto P2 (x y): ");
    scanf("%f %f", &ret.p2.x, &ret.p2.y);

    float area = calcularArea(ret);

    printf("Área do retângulo: %.4f\n", area);

    return 0;
}
