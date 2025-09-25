#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Qual o comprimento do lado a? ");
    scanf("%d", &a);

    printf("Qual o comprimento do lado b? ");
    scanf("%d", &b);

    printf("Qual o comprimento do lado c? ");
    scanf("%d", &c);

    double soma(int x, int y) { //função para executar a soma
        return x + y;
    }

    int contarIgualdadeLados(int a, int b, int c) { //função para checar as igualdades, com um contador que aumenta de acordo com o número de lados iguais.
        int contadorIgualdades = 0;
        if (a == b) {
            contadorIgualdades = contadorIgualdades + 1;
        }
        if (a == c) {
            contadorIgualdades = contadorIgualdades + 1;
        }
        if (b == c) {
            contadorIgualdades = contadorIgualdades + 1;
        }
        return contadorIgualdades;
    }

    if (soma(a, b) > c || soma(a, c) > b || soma(b, c) > a) { //checa se a soma de dois lados é maior que o terceiro lado
        if (contarIgualdadeLados(a, b, c) == 2) {
            printf("Triângulo Equilátero ");
        } else if (contarIgualdadeLados(a, b, c) == 1) {
            printf("Triângulo Isósceles ");
        } else if (contarIgualdadeLados(a, b, c) == 0) {
            printf("Triângulo Escaleno ");
        }

        if (a*a == b*b + c*c && a > b && a > c) {
            printf("e Retângulo");
        } else if (a*a > b*b + c*c) {
            printf("e Acutângulo");
        } else if (a*a < b*b + c*c) {
            printf("e Obtusângulo");
        }
    } else {
        printf("Não forma um triângulo");
    }

    return 0;
}