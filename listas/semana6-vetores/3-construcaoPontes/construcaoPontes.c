#include <stdio.h>

int main() {
    int numeroPontos;

    printf("Quantos pontos? ");
    scanf("%d", &numeroPontos);

    int gradeAlturaPontos[numeroPontos];

    for (int i = 0; i < numeroPontos; i++) {
        int alturaPonto;

       do {
            printf("Qual a altura do ponto %d? (não pode ser zero) ", i + 1);
            scanf("%d", &alturaPonto);

            if (alturaPonto == 0) {
                printf("Altura não pode ser 0.\n");
            }
        } while (alturaPonto == 0); // Só aceita se o valor for diferente de 0

        gradeAlturaPontos[i] = alturaPonto;
    }

    int alturaMaior = 0, contadorDeMaiores = 0;
    int indicePrimeiroMaior, indiceSegundoMaior;

    for (int i = 0; i < numeroPontos; i++) {
        if (gradeAlturaPontos[i] > alturaMaior) { // Checa se o número é maior que o anterior
            alturaMaior = gradeAlturaPontos[i];
            indicePrimeiroMaior = i; // guarda o primeiro indice do valor mais alto
            contadorDeMaiores = 0;
        };
        if (gradeAlturaPontos[i] == alturaMaior && contadorDeMaiores < 3) { // Checa se houver outro número igual ao maior
            contadorDeMaiores++;
            indiceSegundoMaior = i; // guarda o segundo índice do valor mais alto
        };
    }

    int comprimentoPonte = indiceSegundoMaior - (indicePrimeiroMaior + 1);

    if (comprimentoPonte > 0) {
        printf("%d", comprimentoPonte);
    }
    
    return 0;
}
