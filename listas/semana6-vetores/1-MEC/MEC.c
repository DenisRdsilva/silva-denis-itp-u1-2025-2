#include <stdio.h>
#include <math.h>

int main() {
    int numeroQuestoes;

    printf("Quantas questoes tem na prova? ");
    scanf("%d", &numeroQuestoes);

    if (numeroQuestoes <= 0 || numeroQuestoes > 20) {
        printf("O número de questões deve estar entre 1 e 20.\n");
        return 0;
    }

    int gabarito[numeroQuestoes];
    int respostas[numeroQuestoes];

    for (int i = 0; i < numeroQuestoes; i++) { // Para inserir o gabarito
        printf("Qual o gabarito da questão %d? ", i + 1);
        scanf("%d", &gabarito[i]);
    }

    for (int i = 0; i < numeroQuestoes; i++) { // Para inserir as respostas do aluno
        printf("Resposta do aluno para a questao %d? ", i + 1);
        scanf("%d", &respostas[i]);
    }

    int acertos = 0;
    for (int i = 0; i < numeroQuestoes; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }

    if (acertos == 1) { // Checa se é singular ou plural
        printf("%d acerto\n", acertos);
    } else {
        printf("%d acertos\n", acertos);
    }
    
    return 0;
}
