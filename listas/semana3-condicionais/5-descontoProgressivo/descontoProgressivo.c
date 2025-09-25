#include <stdio.h>
int main()
{
    float valorCompra;
    float economiaDesconto;
    float valorFinal;
    float desconto;

    printf("Total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra > 1000) {
        desconto = 20;
        economiaDesconto = valorCompra*(desconto/100);
        valorFinal = valorCompra - economiaDesconto;
        printf("Desconto: 20%%\n");
        printf("Economia de: R$ %.2f\n", economiaDesconto);
        printf("Valor final: R$ %.2f", valorFinal);
    } else if (valorCompra > 500.01 && valorCompra <= 1000) {
        desconto = 15;
        economiaDesconto = valorCompra*(desconto/100);
        valorFinal = valorCompra - economiaDesconto;
        printf("Desconto: 15%%\n");
        printf("Economia de: R$ %.2f\n", economiaDesconto);
        printf("Valor final: R$ %.2f", valorFinal);
    } else if (valorCompra > 100.01 && valorCompra <= 500) {
        desconto = 10;
        economiaDesconto = valorCompra*(desconto/100);
        valorFinal = valorCompra - economiaDesconto;
        printf("Desconto: 10%%\n");
        printf("Economia de: R$ %.2f\n", economiaDesconto);
        printf("Valor final: R$ %.2f", valorFinal);
    } else if (valorCompra <= 100) {
        printf("Valor final: R$ %.2f", valorCompra);
    }
    return 0;
}