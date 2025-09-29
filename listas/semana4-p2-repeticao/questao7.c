#include <stdio.h>

int main()
{
    int a, b;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    while (b < a) {
        printf("\nO valor de a precisa ser maior que o de b\n");

        printf("Insira o valor de a: ");
        scanf("%d", &a);

        printf("Insira o valor de b: ");
        scanf("%d", &b);
    }

    for (int i = b; i <= a; i++) {
        int contadorDivisores = 0;
        for (int j = 2; j <= b/2; j++) {
            if (i % j == 0) {
                contadorDivisores++;
            }
        }
    }

    return 0;
}