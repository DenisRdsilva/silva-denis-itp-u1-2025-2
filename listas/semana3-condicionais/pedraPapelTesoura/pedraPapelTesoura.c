#include <stdio.h>
int main()
{
    char jogador1;
    char jogador2;

    printf("Instruções: P para Pedra, A para Papel ou T para Tesoura\n");

    printf("Jogador 1: ");
    scanf(" %c", &jogador1);

    printf("Jogador 2: ");
    scanf(" %c", &jogador2);

    if (jogador1 != jogador2) {
        if (jogador1 == 'P') {
            printf("Jogador 1 escolheu: Pedra\n");
            if (jogador2 == 'A') {
                printf("Jogador 2 escolheu: Papel\n");
                printf("Papel vence Pedra\n");
                printf("Jogador 2 ganhou!");
            } else if (jogador2 == 'T') {
                printf("Jogador 2 escolheu: Tesoura\n");
                printf("Pedra vence Tesoura\n");
                printf("Jogador 1 ganhou!");
            }
        }
        else if (jogador1 == 'A') {
            printf("Jogador 1 escolheu: Papel\n");
            if (jogador2 == 'P') {
                printf("Jogador 2 escolheu: Pedra\n");
                printf("Papel vence Pedra\n");
                printf("Jogador 1 ganhou!");
            } else if (jogador2 == 'T') {
                printf("Jogador 2 escolheu: Tesoura\n");
                printf("Tesoura vence Papel\n");
                printf("Jogador 2 ganhou!");
            }
        } else if (jogador1 == 'T') {
            printf("Jogador 1 escolheu: Tesoura\n");
            if (jogador2 == 'A') {
                printf("Jogador 2 escolheu: Papel\n");
                printf("Tesoura vence Papel\n");
                printf("Jogador 1 ganhou!");
            } else if (jogador2 == 'P') {
                printf("Jogador 2 escolheu: Pedra\n");
                printf("Pedra vence Tesoura\n");
                printf("Jogador 2 ganhou!");
            }
        }
    } else {
        printf("Empate");
    }
    return 0;
}