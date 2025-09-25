#include <stdio.h>
int main() {
    int numero1;
    int numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2; 
    int subtracao = numero1-numero2; 
    int produto = numero1*numero2; 
    float divisao = numero1/numero2; 
    int resto = numero1%numero2; 
    float media = (numero1+numero2)/2; 

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Produto: %d\n", produto);
    printf("Divisão: %f\n", divisao);
    printf("Resto: %d\n", resto);
    printf("Média: %f\n", media);
    return 0;
}