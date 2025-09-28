#include <stdio.h>

int main()
{
    int numeroLinhas;

    printf("Insira o número de linhas: ");
    scanf("%f", &numeroLinhas);

    for (int i = 0; i < numeroLinhas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}