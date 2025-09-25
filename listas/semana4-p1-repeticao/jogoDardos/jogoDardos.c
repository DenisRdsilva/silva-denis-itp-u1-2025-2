#include <stdio.h>
#include <math.h>
int main() {
    int n = 1;
    int posicaoX, posicaoY;
    int pontosPrincipais = 0, pontosProximidadeAoAnterior = 0;

    double distancia(int x1, int y1, int x2, int y2) {
        int distanciaX = x2 - x1;
        int distanciaY = y2 - y1;
        return sqrt((distanciaX*distanciaX) + (distanciaY*distanciaY));
    }

    int pontosRecebidos(double distancia, int ponto1, int ponto2, int ponto3) {
        int pontos = 0;
        if (distancia <= 1) {
            pontos += ponto1;
        } else if (distancia > 1 && distancia <= 2) {
            pontos += ponto2;
        } else if (distancia > 2 && distancia <= 3) {
            pontos += ponto3;
        }
        // printf("distancia: %.2f, pontos: %d\n", distancia, pontos);
        return pontos;
    }

    while (n <= 10) {
        int posicaoXAnterior = posicaoX;
        int posicaoYAnterior = posicaoY;

        printf("Quais as coordenadas do tiro %d? ", n);
        scanf("%d %d", &posicaoX, &posicaoY);

        double distanciaAoCentro = distancia(posicaoX, posicaoY, 0, 0);
        double distanciaExtra = distancia(posicaoXAnterior, posicaoYAnterior, posicaoX, posicaoY);

        pontosPrincipais = pontosRecebidos(distanciaAoCentro, 10, 6, 4) + pontosPrincipais;
        pontosProximidadeAoAnterior = pontosRecebidos(distanciaExtra, 5, 3, 2) + pontosProximidadeAoAnterior;
        n++;
    }

    printf("Total de pontos: %d\n", pontosPrincipais + pontosProximidadeAoAnterior);
    return 0;
}
