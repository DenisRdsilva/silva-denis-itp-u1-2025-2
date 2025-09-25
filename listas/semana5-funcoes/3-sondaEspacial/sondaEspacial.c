#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    int vizinhosSeguros = 0;

    printf("Quais as coordenadas x e y da sonda? ");
    scanf("%f %f", &x, &y);

    float altura(float x, float y) {
        return sin(cos(y) + x) + cos(y + sin(x));
    }

    int pontoSeguro(float x, float y) {
        float pontosX[5] = {0,  0.2, -0.2,  0.2, -0.2};
        float pontosY[5] = {0,  0.2, -0.2, -0.2,  0.2};

        for (int i = 0; i < 5; i++) {
            float h = altura(x + pontosX[i], y + pontosY[i]);
            if (h < 0.0 || h > 2.0) {
                return 0;
            }
        }
        return 1;
    }

    int vizinhoSeguro(float x, float y) {
        float h = altura(x, y);
        return (h >= 0.0 && h <= 2.0);
    }

    if (!pontoSeguro(x, y)) { // Verifica o ponto inicial
        printf("troque de coordenada\n");
        return 0;
    } else { // Verifica os demais pontos
        if (vizinhoSeguro(x+2, y)) {
            vizinhosSeguros++;
        };
        if (vizinhoSeguro(x-2, y)) {
            vizinhosSeguros++;
        };
        if (vizinhoSeguro(x, y+2)) {
            vizinhosSeguros++;
        };
        if (vizinhoSeguro(x, y-2)) {
            vizinhosSeguros++;
        };
    }

    printf("vizinhos seguros: %d\n", vizinhosSeguros);

    if (vizinhosSeguros <= 1) {
        printf("inseguro");
    } else if (vizinhosSeguros <= 3) {
        printf("relativamente seguro");
    } else if (vizinhosSeguros >= 4) {
        printf("seguro");
    }

    return 0;
}
