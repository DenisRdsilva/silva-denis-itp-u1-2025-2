#include <stdio.h>
#include <math.h>

int main()
{
    float coordenadaInicialX, coordenadaInicialY, comprimentoTeia, quantidadeAlvos, coordenadaAlvoX, coordenadaAlvoY;
    float novaCoordenadaX = coordenadaInicialX;

    printf("Quais as coordenadas iniciais? ");
    scanf("%f %f", &coordenadaInicialX, &coordenadaInicialY);

    printf("Qual o comprimento da teia? ");
    scanf("%f", &comprimentoTeia);

    printf("Quantidade de alvos? ");
    scanf("%f", &quantidadeAlvos);

    for (int i = 0; i < quantidadeAlvos; i++) {
        printf("Quais as coordenadas do alvo %d? ", i + 1);
        scanf("%f %f", &coordenadaAlvoX, &coordenadaAlvoY);

        float distanciaX = coordenadaAlvoX - novaCoordenadaX;
        float distanciaY = coordenadaAlvoY - coordenadaInicialY;

        float distancia = sqrt(distanciaX*distanciaX + distanciaY*distanciaY);

        if (distancia <= comprimentoTeia) {
            novaCoordenadaX = coordenadaAlvoX*2 - coordenadaInicialX;
            if (i == quantidadeAlvos - 1) {
                printf("S");
            }
        } else {
            printf("N");
            break;
        }
    }

    return 0;
}