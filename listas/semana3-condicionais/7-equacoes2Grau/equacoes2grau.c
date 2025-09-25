#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, raiz1, raiz2;

    printf("Qual o coeficiente a? ");
    scanf("%lf", &a);

    printf("Qual o coeficiente b? ");
    scanf("%lf", &b);

    printf("Qual o coeficiente c? ");
    scanf("%lf", &c);

    if (a != 0) {
        delta = (b*b - (4.0)*a*c);
        if (delta != 0.0) {
            if (delta > 0.0) {
                raiz1 = (-b + sqrt(delta))/(2*a);
                raiz2 = (-b - sqrt(delta))/(2*a);
                printf("Possui duas raízes reais distintas: %.2f e %.2f", raiz1, raiz2);
            } else if (delta < 0.0) {
                double parteReal = -b / (2*a);
                double parteImaginaria = sqrt(-delta) / (2*a);
                raiz2 = (-b - sqrt(-delta))/(2*a);
                printf("Possui duas raízes imaginárias: %.2f + %.2fi e %.2f - %.2fi", parteReal, parteImaginaria, parteReal, parteImaginaria);
            }
        } else if (delta == 0) {
            raiz1 = -b/(2*a);
            printf("Possui raíz única: %.2f", raiz1);
        }
    } else {
        printf("Não é equação de segundo grau");
    }
    return 0;
}