#include <stdio.h>
int main()
{
    float altura;
    int peso;

    printf("Digite o peso em Kg: ");
    scanf("%d", &peso);

    printf("Digite a altura em m: ");
    scanf("%f", &altura);

    float doublealtura = altura * altura;
    float imc = peso / doublealtura;

    if (imc > 30) {
        printf("Obesidade");
    }
    else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso");
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal");
    }
    else if (imc < 18.5) {
        printf("Abaixo do peso");
    }

    return 0;
}