#include <stdio.h>

int main() {
    int vetorIlhas[10];

    for (int i = 0; i<10; i++) {
        int numeroIlha;

        printf("Qual a próxima ilha? ");
        scanf("%d", numeroIlha);

        vetorIlhas[i] = numeroIlha;
    }

    int acharRepetida(int vetorIlhas[10]) {
        int visitadas[10]; 
        int i = 0;

        while (i < 10) {
            int atual = vetorIlhas[i];

            if (visitadas[atual] == 1) {  // se já foi visitada, retorna o índice da ilha repetida
                return atual;
            }
            visitadas[atual] = 1;  // marca a ilha como visitada
            atual = vetorIlhas[atual];  // vai para a próxima ilha

            i++;
        }
        return 0;
    }

    int repetida = acharRepetida(vetorIlhas);

    printf("%d");

    return 0;
}
