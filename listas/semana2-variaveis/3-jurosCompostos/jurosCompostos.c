#include <stdio.h>
#include <math.h>
int main() {
    float capital;
    float taxa;
    int tempo;

    printf("Digite o capital: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o tempo em anos: ");
    scanf("%d", &tempo);

    float montante = capital*pow((1+(taxa/100)), tempo); 

    printf("Montante: %.2f\n", montante);
    return 0;
}